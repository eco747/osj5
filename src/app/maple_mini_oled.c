/*
  Copyright (c) 2013
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2013-Mar-17 23:15 (EDT)
  Function: 
 
  $Id$

*/

#include <stm32f10x.h>
#include <proc.h>
#include "ssd1306.h"
#include <i2c.h>
#include <gpio.h>

static u_char dpybuf[SSD1306_LCDHEIGHT * SSD1306_LCDWIDTH / 8 + 1] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xFF,
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00,
0x80, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x8C, 0x8E, 0x84, 0x00, 0x00, 0x80, 0xF8,
0xF8, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80,
0x00, 0xE0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xC7, 0x01, 0x01,
0x01, 0x01, 0x83, 0xFF, 0xFF, 0x00, 0x00, 0x7C, 0xFE, 0xC7, 0x01, 0x01, 0x01, 0x01, 0x83, 0xFF,
0xFF, 0xFF, 0x00, 0x38, 0xFE, 0xC7, 0x83, 0x01, 0x01, 0x01, 0x83, 0xC7, 0xFF, 0xFF, 0x00, 0x00,
0x01, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x00, 0x00, 0x7F, 0xFF,
0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF,
0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x0F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xC7, 0xC7, 0x8F,
0x8F, 0x9F, 0xBF, 0xFF, 0xFF, 0xC3, 0xC0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFC,
0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x01, 0x03, 0x03, 0x03,
0x03, 0x03, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01,
0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x00, 0x00,
0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x03,
0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// addr, flags, len, 0, data, cdata[]

i2c_msg dpyinit[25] = {

#define ssd1306_command(cmd)	I2C_MSG_C2( SSD1306_I2C_ADDRESS, 0, REG_CMD, cmd )


#if defined SSD1306_128_32
    // Init sequence for 128x32 OLED module
    ssd1306_command(SSD1306_DISPLAYOFF),                    // 0xAE
    ssd1306_command(SSD1306_SETDISPLAYCLOCKDIV),            // 0xD5
    ssd1306_command(0x80),                                  // the suggested ratio 0x80
    ssd1306_command(SSD1306_SETMULTIPLEX),                  // 0xA8
    ssd1306_command(0x1F),
    ssd1306_command(SSD1306_SETDISPLAYOFFSET),              // 0xD3
    ssd1306_command(0x0),                                   // no offset
    ssd1306_command(SSD1306_SETSTARTLINE | 0x0),            // line #0
    ssd1306_command(SSD1306_CHARGEPUMP),                    // 0x8D
    ssd1306_command(0x14),					// switch vcc
    ssd1306_command(SSD1306_MEMORYMODE),                    // 0x20
    ssd1306_command(0x00),                                  // 0x0 act like ks0108
    ssd1306_command(SSD1306_SEGREMAP | 0x1),
    ssd1306_command(SSD1306_COMSCANDEC),
    ssd1306_command(SSD1306_SETCOMPINS),                    // 0xDA
    ssd1306_command(0x02),
    ssd1306_command(SSD1306_SETCONTRAST),                   // 0x81
    ssd1306_command(0x8F),
    ssd1306_command(SSD1306_SETPRECHARGE),                  // 0xd9
    ssd1306_command(0xF1),					// switch vcc
    ssd1306_command(SSD1306_SETVCOMDETECT),                 // 0xDB
    ssd1306_command(0x40),
    ssd1306_command(SSD1306_DISPLAYALLON_RESUME),           // 0xA4
    ssd1306_command(SSD1306_NORMALDISPLAY),                 // 0xA6
#endif

  ssd1306_command(SSD1306_DISPLAYON),			//--turn on oled panel

};

i2c_msg dpyinv[1] = {
    ssd1306_command(SSD1306_INVERTDISPLAY),
};
i2c_msg dpynorm[1] = {
    ssd1306_command(SSD1306_NORMALDISPLAY),
};

i2c_msg dpyset[3] = {
  ssd1306_command(SSD1306_SETLOWCOLUMN  | 0x0),  // low col = 0
  ssd1306_command(SSD1306_SETHIGHCOLUMN | 0x0),  // hi col = 0
  ssd1306_command(SSD1306_SETSTARTLINE  | 0x0), // line #0
};

static void
display(){
    int i,x;
    i2c_msg m;

    i2c_xfer(0, 3, dpyset, 1000000);

#if 0
    // the whole thing all at once
    m.slave = SSD1306_I2C_ADDRESS;
    m.flags = 0;
    m.clen  = 1;
    m.dlen  = 512;
    m.cdata[0] = 0x40;

    m.data = dpybuf;
    i2c_xfer(0, 1, &m, 1000000);
    // twice, because the buffer is 128*64
    i2c_xfer(0, 1, &m, 1000000);
    return;
#else
    // a bit at a time (so others can use the bus)
    m.slave = SSD1306_I2C_ADDRESS;
    m.flags = 0;
    m.clen  = 1;
    m.dlen  = 16;
    m.cdata[0] = 0x40;

    for (i=0; i<(SSD1306_LCDWIDTH*SSD1306_LCDHEIGHT/8); i+=16) {
        m.data = dpybuf + i;
        i2c_xfer(0, 1, &m, 100000);
    }

    for (i=0; i<(SSD1306_LCDWIDTH*SSD1306_LCDHEIGHT/8); i+=16) {
        m.data = dpybuf + i;
        i2c_xfer(0, 1, &m, 100000);
    }
#endif
}

static void
i2ctest(void){
    short mx, my, mz, ax, ay, az, tmp;

    // enable + init
    i2c_xfer(0, 25, dpyinit, 1000000);

    while(1){
        int s;
        gpio_set( GPIO_B1 );

        display();
        sleep(1);

        i2c_xfer(0, 1, dpyinv, 1000000);
        sleep(1);

        gpio_clear( GPIO_B1 );
        i2c_xfer(0, 1, dpynorm, 1000000);
        sleep(1);
    }
}



void
main(void){

    gpio_init( GPIO_B1, GPIO_OUTPUT_PP | GPIO_OUTPUT_2MHZ );

    /* fork off a blink proc */
    //start_proc( 1024, blinky,  "blinky" );
    //start_proc( 1024, blinky,  "blinky" );
    start_proc( 1024, i2ctest, "i2ctest" );

}
