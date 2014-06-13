/*
  Copyright (c) 1998
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 1998
  Function: kernel messages
*/


#include <sys/types.h>
//#include <sys/param.h>
#include <conf.h>
#include <nstdio.h>
#include <proc.h>
#include <alloc.h>
#include <error.h>
#include <stdarg.h>
#include <userint.h>

/* kprintf

       sends output to kconsole + LCD
       if they are not yet initialized, buffer the output
       and flush it out later
*/


extern FILE *kconsole_port;
#ifdef N_LCD
extern FILE *klcd_port;
#endif

static char *kbuf = 0;
static kbufsz = 0;
static kbuflen = 0;
static kflushp = 0;
static redp = 0;

static int kprintffnc_con(char);
static int kprintffnc_buf(char);
void kflush(int);
extern void blinky(void);

/* xterm: 7 = inverse, 1 = bold, 4 = underline, 0 = normal */
/* ANSI:  31 = red, 40 = black bkg */
#if defined(PLATFORM_EMUL) || defined(PLATFORM_ARM_CM)
#  define RED	"\e[1;31m"
#else
#  define RED	"\e[1;31;40m"
#endif
#define WHT	"\e[0m"

#define KBUF_MAX	2048	/* no more than this much if the console is up */

static void
red_on(){
    if( redp ) return;
    if(kconsole_port){ fputs(RED, kconsole_port); redp = 1; }
}
static void
red_off(){
    if( !redp ) return;
    if(kconsole_port){ fputs(WHT, kconsole_port); redp = 0; }
}

void
kflush(int colorp){
    int len = kbuflen;
    int i;

    if( ! kconsole_port )
        PANIC("kflush but no console\n");

    if( kflushp )
        return;

    red_on();

    kflushp = 1;
    for(i=0; i<len; i++){
        kprintffnc_con(kbuf[i]);
    }

    if( !colorp ) red_off();
}


static int
kprintffnc_con(char c){

    fputc(c, kconsole_port);
#ifdef N_LCD
    fputc(c, klcd_port);
#endif

}

static int
kprintffnc_e9(void *a, char c){
    XE9(c);
}

static int
kprintffnc_buf(char c){

    if( kbufsz < kbuflen + 2 ){
        char *buf;
        int sz = (kbufsz ? kbufsz : 64) * 2;

        buf = alloc( sz );
        if( kbufsz ){
            memcpy(buf, kbuf, kbufsz);
            free(kbuf, kbufsz);
        }
        kbuf = buf;
        kbufsz = sz;
    }
    kbuf[ kbuflen ++ ] = c;
    kbuf[ kbuflen ] = 0;
}

static int
kprintffnc(void *a, char c){

    if(kconsole_port
#ifdef N_LCD
        && klcd_port
#endif
        ){
        if( kbuflen && !kflushp )
            kflush(1);
        kprintffnc_con(c);
        if( kbufsz < KBUF_MAX )
            /* also to buffer if room */
            kprintffnc_buf(c);
    }else{
        kprintffnc_buf(c);
    }
}

void
kprintf(const char *fmt, ...){
    va_list ap;

    red_on();
    va_start(ap,fmt);
    vprintf(kprintffnc, 0, fmt, ap);
    red_off();
}

void
e9printf(const char *fmt, ...){
    va_list ap;

    va_start(ap,fmt);
    vprintf(kprintffnc_e9, 0, fmt, ap);
}

void
hexdump(const unsigned char *d, int len){
    int i;
    int col = 0;

    kprintf("\n");

    for(i=0; i<len; i++){
        if( !col )       kprintf("%08.8X:", d + i);
        if(! (col % 4 )) kprintf(" ");

        kprintf(" %x%x", (d[i]&0xF0) >> 4, (d[i]&0x0F));

        if( ++col == 16){
            kprintf("\n");
            col = 0;
        }
    }

    kprintf("\n");
}

void
diag(const char *file, const char *func, int line, const char *fmt, ...){
    va_list ap;

    red_on();
    va_start(ap,fmt);

    kprintf("%s:%d in %s(): ", file, line, func);
    vprintf(kprintffnc, 0, fmt, ap);

    red_off();
}

#ifdef USE_CLI
DEFUN(dmesg, "display system messgages")
{
    int i;

    puts(RED);
    for(i=0; i<kbuflen; i++){
        putchar(kbuf[i]);
    }
    puts(WHT);


}
#endif

