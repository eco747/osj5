/*
  Copyright (c) 2013
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2013-Mar-11 23:25 (EDT)
  Function: 

*/

#include <conf.h>
#include <nstdio.h>
#include <proc.h>
#include <arch.h>
#include <error.h>
#include <msgs.h>
#include <dev.h>
#include <bootflags.h>
#include <clock.h>
#include <nvic.h>
#include <gpio.h>
#include <stm32.h>

#define SR_TXE	0x80
#define SR_RXNE 0x20

#define CFFLAGS_ALTPINS	3	// 2 bits of flags - alt set of pins

#ifndef SERIAL_QUEUE_SIZE
#  define SERIAL_QUEUE_SIZE     16	/* input queue size */
#endif

int serial_putchar(FILE*, char);
int serial_getchar(FILE*);
int serial_noop(FILE*);
int serial_status(FILE*);
void serial_setbaud(int, int);

extern void blink(int);


const struct io_fs serial_port_fs = {
    serial_putchar,
    serial_getchar,
    0,
    0,
    serial_status,
    0,
    0,
    0,
    0,
    0,
    0
};

struct Com {
    FILE file;
    char queue[ SERIAL_QUEUE_SIZE ];
    u_char head, tail, len;

    u_char status;
    u_char bauddiv;
#define COMSTAT_THROTTLED	2	/* we have dropped RTS */

    int portno;
    USART_TypeDef * addr;
} com[ N_SERIAL ];


FILE *serial0_port = 0;


/* initialize the serial ports */
int
serial_init(struct Device_Conf *dev){
    int i    = dev->unit;
    USART_TypeDef *addr;
    int irq;
    int b;

    int altpins = dev->flags & CFFLAGS_ALTPINS;

    finit( & com[i].file );
    com[i].file.fs = &serial_port_fs;
    com[i].file.codepage = CODEPAGE_UTF8;
    com[i].head = com[i].tail = com[i].len = 0;
    com[i].status  = 0;
    com[i].portno  = i;
    com[i].bauddiv = 1;
    com[i].file.d  = (void*)&com[i];

    // enable gpio clock, usart clock, configure pins
#if defined(PLATFORM_STM32F1)
    switch(i){
    case 0:
        addr = USART1;
        RCC->APB2ENR |= 0x4005;		// usart1+gpioA+afi
        GPIOA->CRH   |= 0x4b0;
        irq           = (int) IRQ_USART1;
        break;
    case 1:
        addr = USART2;
        RCC->APB2ENR |= 0x5;
        RCC->APB1ENR |= 0x20000;
        GPIOA->CRL    = 0x4b00;
        com[i].bauddiv = 2;
        irq           = (int) IRQ_USART2;
        break;
    case 2:
        addr = USART3;
        RCC->APB2ENR |= 0x9;
        RCC->APB1ENR |= 0x40000;
        GPIOB->CRH    = 0x4b00;
        com[i].bauddiv = 2;
        irq           = (int) IRQ_USART3;
        break;
    }
#elif defined(PLATFORM_STM32F4)
    switch(i){
    case 0:
        addr = USART1;
        irq  = (int) IRQ_USART1;
        if( altpins ){
            gpio_init( GPIO_B6, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_B7, GPIO_AF(7) | GPIO_PUSH_PULL );
        }else{
            gpio_init( GPIO_A9, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_A10, GPIO_AF(7) | GPIO_PUSH_PULL );
        }
        RCC->APB2ENR |= 1<<4;
        com[i].bauddiv = 2;
        break;
    case 1:
        addr = USART2;
        irq  = (int) IRQ_USART2;
        if( altpins ){
            gpio_init( GPIO_D5, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_D6, GPIO_AF(7) | GPIO_PUSH_PULL );
        }else{
            gpio_init( GPIO_A2, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_A3, GPIO_AF(7) | GPIO_PUSH_PULL );
        }
        RCC->APB1ENR |= 1<<17;
        com[i].bauddiv = 4;
        break;
    case 2:
        addr = USART3;
        irq  = (int) IRQ_USART3;

        if( altpins ){
            gpio_init( GPIO_C10, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_C11, GPIO_AF(7) | GPIO_PUSH_PULL );
        }else{
            gpio_init( GPIO_B10, GPIO_AF(7) | GPIO_PUSH_PULL );
            gpio_init( GPIO_B11, GPIO_AF(7) | GPIO_PUSH_PULL );
        }
        // alt: d8, d9
        RCC->APB1ENR |= 1<<18;
        com[i].bauddiv = 4;
        break;
    case 3:
        addr = UART4;
        irq  = (int) IRQ_UART4;
        if( altpins ){
            gpio_init( GPIO_C10, GPIO_AF(8) | GPIO_PUSH_PULL );
            gpio_init( GPIO_C11, GPIO_AF(8) | GPIO_PUSH_PULL );
        }else{
            gpio_init( GPIO_A0, GPIO_AF(8) | GPIO_PUSH_PULL );
            gpio_init( GPIO_A1, GPIO_AF(8) | GPIO_PUSH_PULL );
        }
        RCC->APB1ENR |= 1<<19;
        com[i].bauddiv = 4;
        break;

        // case 4:
        // c12, d2
        // case 5:
        // c6,c7; g14, g9
    }
#endif
    com[i].addr   = addr;

    if( dev->baud )
        serial_setbaud(i, b=dev->baud);
    else
        serial_setbaud(i, b=9600);

    addr->CR1 |= 0x200C		// enable, no parity, 8 bit, ...
        | 0x20;			// enable RX irq

    // enable ints
    nvic_enable( irq, IPL_TTY );

    if( !serial0_port ){
        serial0_port = &com[i].file;
    }

    bootmsg("%s at io 0x%x irq %d %d baud\n", dev->name, addr, irq, b);

    return (int) &com[i].file;
}

/* set the baud rate on serial port */
void
serial_setbaud(int port, int baud){
    int d, i;
    int plx;

    com[port].addr->BRR = sys_clock_freq() / baud / com[port].bauddiv;;
}

int
serial_noop(FILE*f){
    return 1;
}

/* return the status */
int
serial_status(FILE*f){
    int s = 0;
    struct Com *p;

    return 1;
}

/* output a char */
int
serial_putchar(FILE *f, char ch){
    /* outputs a char over the serial line */
    int i;
    struct Com *p;
    int plx;

    p = (struct Com*)f->d;
    USART_TypeDef *addr = p->addr;

    while(1){
        plx = spltty();
        if( addr->SR & SR_TXE ) break;
#ifdef USE_PROC
        if( !(f->flags & F_NONBLOCK) ){
            addr->CR1 |= 0x80;	/* enable TXE irq */
            tsleep(addr, currproc->prio, "com/o", 100000);
        }
#endif
    }

    addr->DR = ch;
    splx(plx);

    return 1;
}

/* get a char */
int
serial_getchar(FILE *f){
    char ch;
    int i, plx;
    struct Com *p;

    p = (struct Com*)f->d;
    USART_TypeDef *addr = p->addr;

    while( 1 ){
        plx = spltty();
        if( p->len ) break;

        if( f->flags & F_NONBLOCK ){
            /* wait until something is available */
            do {
                i = addr->SR;
            }while( !(i & SR_TXE) );
            ch = addr->DR;
            splx(plx);
            return ch;
        }else{
#ifdef USE_PROC
            tsleep( &p->len, currproc->prio, "com/i", 0);
#endif
        }
    }


    ch = p->queue[ p->tail++ ];
    p->tail %= SERIAL_QUEUE_SIZE;
    p->len --;
    /* RSN - flow control */

    splx(plx);
    return ch;

}

/****************************************************************/

static void
serial_irq(int unit){
    USART_TypeDef *addr = com[unit].addr;

    int sr = addr->SR;

    // kprintf("s %d %x\n", unit, sr);

    if( sr & SR_TXE ){
        /* transmitter empty */
        //blink(1);
        addr->CR1 &= ~ 0xC0;	// disable TXE irq
        wakeup( addr );
    }

    if( sr & SR_RXNE ){
        /* got a char */
        int ch = addr->DR;
        int i;

        /* special control char ? */
        for(i=0; i<sizeof(com[unit].file.cchars); i++){
            if(com[unit].file.cchars[i] && ch == com[unit].file.cchars[i]){
                sigunblock( com[unit].file.ccpid );
                ksendmsg( com[unit].file.ccpid, MSG_CCHAR_0 + i );
                return;
            }
        }

        if( com[unit].len < SERIAL_QUEUE_SIZE ){
            /* queue it up */
            com[unit].queue[ com[unit].head++ ] = ch;
            com[unit].head %= SERIAL_QUEUE_SIZE;
            com[unit].len ++;
            /* flow control */
#if 0
            if( com[unit].len > SERIAL_QUEUE_HIWATER ){
                /* almost full - drop RTS */
                /* com[unit].status |= COMSTAT_THROTTLED; */
            }
#endif
            wakeup( &com[unit].len );
        }
    }
}

/****************************************************************/
void
USART1_IRQHandler(void){
    serial_irq(0);
}
void
USART2_IRQHandler(void){
    serial_irq(1);
}
void
USART3_IRQHandler(void){
    serial_irq(2);
}

