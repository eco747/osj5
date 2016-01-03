/*
  Copyright (c) 2015
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2015-Dec-13 18:27 (EST)
  Function: dma

*/

#include <conf.h>
#include <clock.h>
#include <proc.h>
#include <dev.h>
#include <error.h>
#include <gpio.h>
#include <stm32.h>
#include <nvic.h>
#include <userint.h>


#define DMA	DMA2
#define DMASTR	DMA2_Stream3
#define DMACHAN	4

#define MAXTRY 		3
#define RTIMEOUT	4800000		// 100 ms
#define WTIMEOUT	12000000	// 250 ms


#define CMD_CPSMEN	(1<<10)
#define CMD_WAIT_NONE	(0)
#define CMD_WAIT_SHORT	(1<<6)
#define CMD_WAIT_LONG	(3<<6)

#define SR_CMDSENT	(1<<7)
#define SR_CMDREND	(1<<6)
#define SR_DTIMEOUT	(1<<3)
#define SR_CTIMEOUT	(1<<2)
#define SR_DCRCFAIL	(1<<1)
#define SR_CCRCFAIL	(1<<0)

#define DMASCR_MINC	(1<<10)
#define DMASCR_DIR_M2P  (1<<6)
#define DMASCR_DIR_P2M	0
#define DMASCR_PFCTRL	(1<<5)
#define DMASCR_TEIE	4
#define DMASCR_TCIE	16
#define DMASCR_EN	1

int sdio_ioctl(FILE*, int, void*);
int sdio_bread(FILE*, char*, int, offset_t);
int sdio_bwrite(FILE*, const char*, int, offset_t);
int sdio_stat(FILE *, struct stat*);

const struct io_fs sdio_fs = {
    0, /* putc */
    0, /* getc */
    0, /* close */
    0, /* flush */
    0, /* status */
    0, /* read */
    0, /* write */
    sdio_bread,  /* bread */
    sdio_bwrite, /* bwrite */
    0, /* seek */
    0, /* tell */
    sdio_stat,
    sdio_ioctl
};


struct SDIOinfo {
    lock_t		lock;
    FILE file;
    const char		*name;
    u_char		sdcid[16];
    u_char		sdcsd[16];	// a meshigas of unaligned jibber-jabber
    int			sectors;
    int			rca;
    u_char		ishc;

} sdcinfo[ N_SDIO ];


#ifdef SDIOVERBOSE
struct crumb {
    const char *event;
    int when;
    int arg0;
    int arg1;
};

#define NR_CRUMBS       128
static struct crumb crumbs[NR_CRUMBS];

static inline void
_sdio_drop_crumb(const char *event, u_long arg0, u_long arg1) {
    struct crumb *crumb = &crumbs[cur_crumb % NR_CRUMBS];
    crumb->event = event;
    crumb->when  = get_hrtime();
    crumb->arg0  = arg0;
    crumb->arg1  = arg1;
    cur_crumb++;
}
#define SDIO_CRUMB(event, arg0, arg1) _spi_drop_crumb(event, (u_long)arg0, (u_long)arg1)
#else
#define SDIO_CRUMB(event, arg0, arg1)
#endif





static int initialize_card(struct SDIOinfo *);

int
sdio_init(struct Device_Conf *dev){
    int unit = dev->unit;
    struct SDIOinfo *ii = sdcinfo + unit;
    char info[32];
    int i;

    finit( & ii->file );
    ii->file.d  = (void*)ii;
    ii->file.fs = & sdio_fs;
    ii->name = dev->name;
    ii->lock = 0;

    gpio_init( GPIO_D2,  GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ | GPIO_PULL_UP );	// cmd
    gpio_init( GPIO_C12, GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ );	// clk
    gpio_init( GPIO_C8,  GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ | GPIO_PULL_UP );	// data
    gpio_init( GPIO_C9,  GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ | GPIO_PULL_UP );	// data
    gpio_init( GPIO_C10, GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ | GPIO_PULL_UP );	// data
    gpio_init( GPIO_C11, GPIO_AF(12) | GPIO_PUSH_PULL  | GPIO_SPEED_100MHZ | GPIO_PULL_UP );	// data


    RCC->APB2ENR |= 1<<11;
    RCC->AHB1ENR |= 1<<22;	// DMA

    SDIO->POWER = 3;	// enable
    SDIO->CLKCR = 0
        | (1<<8)	// enable
        | (120)		// 400kHz at start
        ;

    // RSN - card detect

    int r = initialize_card(ii);

    if( !r ) return 0;	/* no card installed */

    //hexdump(ii->sdcid, 16);
    //hexdump(ii->sdcsd, 16);


    info[0] = ii->sdcid[1];
    info[1] = ii->sdcid[2];
    info[2] = '/';
    for(i=0;i<5;i++)
        info[3+i] = ii->sdcid[3+i];
    info[8] = 0;

    const char *sdtype;
    int nsect;
    if( (ii->sdcsd[0] & 0xC0) == 0 ){
        // standard SD version 1.0
        int rblen = ii->sdcsd[5] & 0xF;
        int csize = (ii->sdcsd[8]>>6) + (ii->sdcsd[7]<<2) + ((ii->sdcsd[6] & 3)<<10);
        int cmult = (ii->sdcsd[10]>>7) + ((ii->sdcsd[9] & 3)<<1);
        nsect = (csize + 1) * (1<<(cmult + 2)) * (1<<(rblen - 9));
        sdtype = "SD/1.0";
        ii->ishc = 0;
    }else{
        // SDHC version 2.0
        nsect = (ii->sdcsd[9] + (ii->sdcsd[8]<<8) + ((ii->sdcsd[7]&0x3F)<<16) + 1) * 1024;
        sdtype = "SD/HC";
        ii->ishc = 1;
    }

    ii->sectors = nsect;

    bootmsg("%s at sdio%d %s sdcard %s %d sect, %d MB\n",
            dev->name, unit,
            sdtype, info,
            nsect, nsect>>11
        );

    // do we need partitions?

#if 0
    dkpart_learn( dev, "sd", unit, & ii->file, nsect );
#else
    // or:

    snprintf(info, sizeof(info), "%s:", ii->name);
    fmount( & ii->file, info, "fatfs" );

    //bootmsg( "sdcard %s speed %dkHz mounted on %s type %s\n",
    // ii->name, actspeed/1000, info, "fatfs" );
#endif

    return (int)& ii->file;
}

static inline void
sdio_clr_icr(void){
    SDIO->ICR |= (1<<23) | (1<<22) | 0x7F;
}

static int
sdio_cmd_none(u_long cmd, u_long arg){
    int timeout = 0xFFFF;

    sdio_clr_icr();
    cmd |= (SDIO->CMD & ~0x3FFF) | CMD_CPSMEN | CMD_WAIT_NONE;
    SDIO->ARG = arg;
    SDIO->CMD = cmd;

    // wait
    while( !(SDIO->STA & SR_CMDSENT) ) {
        if( !--timeout ) return SR_CTIMEOUT;
    }

    return 0;
}

static inline int
_sdio_cmd(u_long cmd){

    sdio_clr_icr();
    cmd |= (SDIO->CMD & ~0x3FFF ) | CMD_CPSMEN | cmd;
    SDIO->CMD = cmd;

    while( !(SDIO->STA & (SR_CMDREND | SR_CCRCFAIL | SR_CTIMEOUT)) ) {
    }

    return SDIO->STA & (SR_CCRCFAIL | SR_CTIMEOUT);
}

static int
sdio_cmd_short(u_long cmd, u_long arg){

    SDIO->ARG = arg;
    return _sdio_cmd( cmd | CMD_WAIT_SHORT );
}

static int
sdio_cmd_r1(u_long cmd, u_long arg){

    SDIO->ARG = arg;
    int r = _sdio_cmd( cmd | CMD_WAIT_SHORT );

    if( SDIO->RESP1 & 0xFFFFE008 ) return -1;
    return r;
}

static int
sdio_cmd_r3(u_long cmd, u_long arg){

    SDIO->ARG = arg;
    int r = _sdio_cmd( cmd | CMD_WAIT_SHORT );
    // cmd does not return a CRC. ignore CRC error
    return r & SR_CTIMEOUT;
}

static int
sdio_cmd_long(u_long cmd, u_long arg, u_long *dst){

    SDIO->ARG = arg;
    int r = _sdio_cmd( cmd | CMD_WAIT_LONG );

    dst[0] = __REV(SDIO->RESP1);
    dst[1] = __REV(SDIO->RESP2);
    dst[2] = __REV(SDIO->RESP3);
    dst[3] = __REV(SDIO->RESP4);

    return r;
}

static int
initialize_card(struct SDIOinfo *ii){

    int i, r;
    int isv2 = 0;
    int ishc = 0;

    for(i=0; i<5; i++){
        r = sdio_cmd_none(0, 0);
        // kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
        if( !r ) break;
    }
    if( r ) return 0;

    // cmd8 - required to enable v2/HC features (>2GB)
    r = sdio_cmd_short( 8, 0x01AA );
    //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
    if( r ) return 0;
    r = SDIO->RESP1;
    if( (r & 0xFF) == 0xAA && (r & 0x7E00) == 0 ) isv2 = 1;	// 2.0 yay!

    // loop until ready
    //  cmd 55/41 => R1
    int max = 100000;
    while( max-- > 0 ){
        r = sdio_cmd_short( 55, 0 );
        //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
        r = sdio_cmd_r3( 41, 0x80100000 | (isv2 ? (1<<30) : 0) );
        //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
        if( !r && (SDIO->RESP1 & (1<<31)) ) break;
    }
    //kprintf("sdio41 cmd %d r %x sr %x res %08.8x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);

    if( isv2 && (SDIO->RESP1 & 0x40000000) ) ishc = 1;	// HC yay!

    r = sdio_cmd_long( 2, 0,  (u_long*)ii->sdcid );
    //kprintf("sdio2 r %x sr %x res %08.8x %08.8x %08.8x %08.8x\n", r, SDIO->STA, SDIO->RESP1, SDIO->RESP2, SDIO->RESP3, SDIO->RESP4);

    r = sdio_cmd_short( 3, 0 );
    if( r ) return 0;
    //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
    ii->rca = SDIO->RESP1 >> 16;

    r = sdio_cmd_long( 9, ii->rca << 16,  (u_long*)ii->sdcsd );
    if( r ) return 0;
    //kprintf("sdio3 r %x sr %x res %08.8x %08.8x %08.8x %08.8x\n", r, SDIO->STA, SDIO->RESP1, SDIO->RESP2, SDIO->RESP3, SDIO->RESP4);

    // select card
    r = sdio_cmd_short( 7, ii->rca << 16 );
    //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);

#if 1
    // 4 bit mode
    r = sdio_cmd_short( 55, ii->rca << 16 );
    //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);

    r = sdio_cmd_short( 6, 2 );
    //kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
    if( !r )
        SDIO->CLKCR |= 1 << 11;

    // increase speed
    if( isv2 && ishc ){
        SDIO->CLKCR |= 1<<10;	// disable divider => 48MHz
    }else{
        // 48MHz / 2 => 24MHz
        SDIO->CLKCR &= ~0xFF;
    }
#endif
    return 1;

}


int
sdio_ioctl(FILE*f, int s, void*d){}

static void
sdio_clear(struct SDIOinfo *ii){
    initialize_card(ii);
}

static void
sdio_stop(void){
    int r = sdio_cmd_short( 12, 0 );
    //kprintf("sdio. cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
}


static void
dma_clr_irq(void){
    DMA->LIFCR |= 0x3D << 22;
}

static void
dma_start(u_long flags, char *dst, int len){

    DMASTR->PAR   = (u_long) & SDIO->FIFO;
    DMASTR->M0AR  = (u_long) dst;
    DMASTR->NDTR  = len >> 2;

    DMASTR->CR   &= ~1;	// clear EN first
    DMASTR->CR   &= (0xF<<28) | (1<<20);
    DMASTR->CR   |= flags | DMASCR_MINC | (DMACHAN << 25)
        | DMASCR_PFCTRL
        | (1 << 23) | (1 << 21)	// burst
        | (2 << 16)		// high prio
        | (2 << 13) | (2 << 11)	// 32bit
        // RSN - IE
        ;

    DMASTR->FCR  &= ~0x7;
    DMASTR->FCR  |= (1<<2) // use fifo
        | 3;		   // thresh=full

    DMASTR->CR   |= DMASCR_EN;

}

static void
dma_stop(void){
    DMASTR->CR &= ~(DMASCR_EN | DMASCR_TEIE | DMASCR_TCIE);
    dma_clr_irq();
}

static int
dma_wait_complete(void){
    utime_t t1 = get_hrtime() + 1000000;

    while( 1 ){
        //if( (DMA->LISR & ((1<<27) | (1<<25) | (1<<22))) ) break;
        if( !(DMASTR->CR & 1) ) break;
        if( get_hrtime() > t1 ) return -1;
    }


    return DMA->LISR & ((1<<25) | (1<<22));
}


int
sdio_bread(FILE*f, char*d, int len, offset_t pos){
    struct SDIOinfo *ii = f->d;
    int tries, ret=-1, r;

    //kprintf("sdrd %qx %d\n", pos, len);

    if( ii->ishc ) pos /= 512;

    sync_lock(& ii->lock, "sdcard");

    for(tries=0; tries<MAXTRY; tries++){

        dma_start(DMASCR_DIR_P2M, d, len);

        SDIO->DCTRL  &= ~0xFFF;
        SDIO->DTIMER  = RTIMEOUT;
        SDIO->DLEN    = len;
        SDIO->DCTRL  |= 0
            | (9<<4)	// 512B block
            | (1<<1)	// read
            | (1<<3)	// dma
            | 1		// enable data mode
            ;

        r = sdio_cmd_r1( 18, pos );

        // kprintf("sdio cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);

        if( !r ){
            r = dma_wait_complete();

            if( r )
                kprintf("dma err %x, %x\n", r, DMA->LISR >> 22 );
        }

        //kprintf("dma %x %x\n", DMASTR->NDTR, DMA->LISR >> 22);
        //kprintf("sr %x dl %x ct %x fc %x\n", SDIO->STA, SDIO->DLEN, SDIO->DCOUNT, SDIO->FIFOCNT);
        sdio_stop();
        dma_stop();

        if( !r ){
            // all done!
            ret = len;
            break;
        }
    }

    sync_unlock(& ii->lock );
    //kprintf("sdrd => %d\n", ret);
    //if( ret > 0 ){
    //    hexdump( d, 16 );
    //    hexdump( d+512-16, 16 );
    //}
    return ret;
}

static void
sdio_wait_tx_complete(void){
    utime_t t1 = get_hrtime() + 100000;

    while(1){
        if( !(SDIO->STA & (1<<12)) ) return;
        if( get_hrtime() > t1 )      return;
    }
}

// wait for write to complete
static int
sdio_write_wait(int rca){
    int r;

    utime_t t1 = get_hrtime() + 250000;

    while(1){
        r = sdio_cmd_short( 13, rca << 16 );
        //kprintf("sdio13 cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);
        r = SDIO->RESP1;
        if( ((r >> 9) & 7) < 5 ) return 0;
        if( get_hrtime() > t1 )  return -1;
        usleep(10000);
    }
}
int
sdio_bwrite(FILE*f, const char*d, int len, offset_t pos){
    struct SDIOinfo *ii = f->d;

    int tries, ret=-1, r;

    //kprintf("sdwr %qx %d\n", pos, len);

    if( ii->ishc ) pos /= 512;

    sync_lock(& ii->lock, "sdcard");

    for(tries=0; tries<MAXTRY; tries++){

        dma_start(DMASCR_DIR_M2P, d, len);

        SDIO->DCTRL  &= ~0xFFF;
        SDIO->DTIMER  = RTIMEOUT;
        SDIO->DLEN    = len;

        if( len == 512 ){
            r = sdio_cmd_r1( 24, pos );		// single block
        }else{
            sdio_cmd_short( 55, ii->rca << 16 );
            sdio_cmd_short( 23, len >> 9 );	// pre-erase (slight speed improvement)
            r = sdio_cmd_r1( 25, pos );		// multi block
        }
        if(r) kprintf("sdio25 cmd %d r %x sr %x res %x\n", SDIO->RESPCMD, r, SDIO->STA, SDIO->RESP1);

        if( !r ){

            SDIO->DCTRL  |= 0
                | (9<<4)	// 512B block
                | (1<<3)	// dma
                | 1		// enable data mode
                ;

            dma_wait_complete();
            // QQQ - there is always a fifo error
            sdio_wait_tx_complete();

            if( r )
                kprintf("dma err %x, %x\n", r, DMA->LISR >> 22 );
        }

        //kprintf("dma %x %x %x\n", DMASTR->NDTR, DMA->LISR >> 22, DMASTR->CR);
        //kprintf("sr %x dl %x ct %x fc %x\n", SDIO->STA, SDIO->DLEN, SDIO->DCOUNT, SDIO->FIFOCNT);

        if( len != 512 ) sdio_stop();
        r |= sdio_write_wait(ii->rca);
        dma_stop();

        if( !r ){
            // all done!
            ret = len;
            break;
        }
    }

    sync_unlock(& ii->lock );
    // kprintf("sdwr => %d\n", ret);

    return ret;

}

int
sdio_stat(FILE *f, struct stat *s){
    struct SDIOinfo *ii = f->d;

    s->dev     = 0;
    s->size    = (long long)ii->sectors * 512;
    s->ctime   = 0;
    s->blksize = 512;
    s->mode    = 0;
    s->flags   = SSF_BLKWRITE | SSF_NOERASE;

    return 0;
}

DEFUN(sdtest, "sd card test")
{
    char *buf = alloc(1024);
    FILE *f   = fopen("dev:sdio", "w");

    //sdio_bread( f, buf, 512, 0);	// read first sector
    //hexdump( buf, 16 );
    //hexdump( buf+512-16, 16 );

    memset(buf, random() & 0xFF, 512);
    hexdump( buf, 16 );

    sdio_bwrite(f, buf, 512, 0xF0000 ); // write

    bzero(buf, 512);
    sdio_bread( f, buf, 512, 0xF0000 ); // read back
    hexdump( buf, 16 );
    hexdump( buf+512-16, 16 );
    //hexdump(buf, 1024);

    free(buf, 1024);
    return 0;
}

#ifdef KTESTING

DEFUN(wrfile, "test file write timing")
{
    int i, len;
    FILE *f;

    if( argc != 3 ){
        f_error("mkfile name len");
        return -1;
    }

    len = atoi(argv[2]);

    int t0 = get_hrtime();
    f = fopen( argv[1], "w!" );
    if( f ){
        // start of RAM
        while(len){
            int wl = (len > 65536) ? 65536 : len;
            fwrite(f, (char*)0x20000000, wl );
            len -= wl;
        }
        fclose(f);

        int t1 = get_hrtime();
        printf("time: %d\n", t1 - t0);
    }
    return 0;
}

DEFUN(rdfile, "test file read timing")
{
    int i, len;
    FILE *f;

    if( argc != 2 ){
        f_error("rdfile name");
        return -1;
    }

    len = atoi(argv[2]);
    char *buf = alloc( 8192 );

    int t0 = get_hrtime();
    f = fopen( argv[1], "r" );
    if( f ){
        while(1){
            int rl = fread(f, buf, 8192);
            if( rl != 8192 ) break;
        }
        fclose(f);

        int t1 = get_hrtime();
        printf("time: %d\n", t1 - t0);
    }

    free(buf, 8192);
    return 0;
}


#endif
