/*
  Copyright (c) 2018
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2018-Mar-10 11:04 (EST)
  Function: 

*/
#ifndef __stm32f7_spi_impl_h__
#define __stm32f7_spi_impl_h__

#define DMA_TYPE_2

#include <spi_info.h>

#define SPIGPIO_CONF 	(GPIO_OUTPUT | GPIO_PUSH_PULL | GPIO_SPEED_25MHZ)
#define CR2_FRXTH_8BIT	(1<<12)
#define CR2_DS_8BIT	(7<<8)

#define PUT_DR(dev, c) (*(char*)&(dev->DR) = c)
#define GET_DR(dev)    (*(char*)&(dev->DR))


static inline void
_spi_dev_init(int unit, struct SPIInfo *ii){
    SPI_TypeDef *addr;
    int dmairqrx, dmairqtx;

    switch(unit){

    case 3:
        // on ahb2, dma2 chan2+3
        // CLK = E12, MISO = E13, MOSI = E14
        ii->addr      = addr = SPI4;
        ii->irq       = SPI4_IRQn;
        ii->rxdma     = DMA2_Stream0;
        ii->txdma     = DMA2_Stream1;
        ii->dma	      = DMA2;
        ii->clock     = APB2CLOCK;
        dmairqrx      = IRQ_DMA2_STREAM0;
        dmairqtx      = IRQ_DMA2_STREAM1;
        ii->dmanrx    = 0;
        ii->dmantx    = 1;
        ii->dmachan   = 4;
        RCC->APB2ENR |= 1<<13;	// spi
        RCC->AHB1ENR |= 1<<22;	// DMA2
        gpio_init( GPIO_E12, GPIO_AF(5) | GPIO_PUSH_PULL | GPIO_SPEED_50MHZ );
        gpio_init( GPIO_E13, GPIO_AF(5) | GPIO_PULL_UP );
        gpio_init( GPIO_E14, GPIO_AF(5) | GPIO_PUSH_PULL | GPIO_SPEED_50MHZ );

        break;

    default:
        bootmsg("invalid spi%d\n", unit);
        PANIC("invalid spi");
    }

    addr->CR2 &= ~0xE7;
    addr->CR2 |= CR2_FRXTH_8BIT | CR2_DS_8BIT;

    nvic_enable( dmairqrx, IPL_DISK );
    nvic_enable( dmairqtx, IPL_DISK );

}


#endif /* __stm32f7_spi_impl_h__ */
