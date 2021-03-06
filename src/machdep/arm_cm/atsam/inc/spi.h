/*
  Copyright (c) 2016
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2016-Jul-03 11:28 (EDT)
  Function: atsam spi

*/

#ifndef __spi_h__
#define __spi_h__



struct SPIConf {
    int		unit;
    int		speed;
    int		nss;
    char	ss[8];
    int		_ss;
};



typedef struct spi_msg {
    u_char	mode;
# define SPIMO_READ	1
# define SPIMO_WRITE	2
# define SPIMO_UNTIL	3
# define SPIMO_DELAY	4
# define SPIMO_FINISH	5	// wait for last byte to finish
# define SPIMO_PINSOFF	6
# define SPIMO_PINSON	7
# define SPIMO_UNTIL_SLOW 8

    u_char	response;
    int		dlen;
    char	*data;
    int		(*until)(int);

} spi_msg;

extern int spi_xfer(const struct SPIConf *, int, spi_msg*, int);
extern int spi_cf_init(struct SPIConf *);

#define SPI_XFER_OK		0
#define SPI_XFER_TIMEOUT	-1
#define SPI_XFER_ERROR		-2

#endif /* __spi_h__ */
