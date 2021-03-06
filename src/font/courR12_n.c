
// file: font/courR12.bdf
// font: -Adobe-Courier-Medium-R-Normal--12-120-75-75-M-70-ISO10646-1

#include <font.h>

const struct Font font_courR12_n = {
    .type       = 1,
    .name	= "courR12_n",
    .height	= 12,
    .width	= 7,
    .bytescol	= 2,
    .numcol     = 7,
    .startchar  = 33,
    .lastchar	= 63,
    .data       = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x80, 0x0, 0x90, 0x3, 0xf0, 0x0, 0x9c, 0x3, 0xf0, 0x0, 0x9c, 0x0, 0x10, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x98, 0x1, 0x24, 0x2, 0x66, 0x6, 0x44, 0x2, 0x88, 0x1, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x88, 0x0, 0x54, 0x0, 0x54, 0x1, 0xa8, 0x2, 0xa0, 0x2, 0x10, 0x1, 	// 37	percent
	0x80, 0x1, 0x58, 0x2, 0x64, 0x2, 0x44, 0x2, 0x8c, 0x1, 0x40, 0x1, 0x20, 0x2, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x1, 0xc, 0x6, 0x2, 0x8, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x2, 0x8, 0xc, 0x6, 0xf0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x10, 0x0, 0x50, 0x0, 0x3c, 0x0, 0x50, 0x0, 0x10, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x40, 0x0, 0x40, 0x0, 0xf0, 0x1, 0x40, 0x0, 0x40, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x0, 0x0, 0x4, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x0, 0x0, 0x4, 0x0, 0x3, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0, 0x2, 0x0, 	// 47	slash
	0x0, 0x0, 0xfc, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0xfc, 0x1, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x4, 0x2, 0x4, 0x2, 0xfe, 0x3, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x1c, 0x3, 0x82, 0x2, 0x42, 0x2, 0x22, 0x2, 0x1c, 0x3, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x4, 0x1, 0x2, 0x2, 0x22, 0x2, 0x22, 0x2, 0xdc, 0x1, 0x0, 0x0, 	// 51	three
	0xc0, 0x0, 0xa0, 0x0, 0x98, 0x0, 0x84, 0x2, 0xfe, 0x3, 0x80, 0x2, 0x0, 0x0, 	// 52	four
	0x0, 0x1, 0x3e, 0x2, 0x22, 0x2, 0x22, 0x2, 0x22, 0x2, 0xc2, 0x1, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0xf8, 0x1, 0x24, 0x2, 0x22, 0x2, 0x22, 0x2, 0xc2, 0x1, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x6, 0x0, 0x2, 0x0, 0x82, 0x3, 0x7a, 0x0, 0x6, 0x0, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0xdc, 0x1, 0x22, 0x2, 0x22, 0x2, 0x22, 0x2, 0xdc, 0x1, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x3c, 0x2, 0x42, 0x2, 0x42, 0x2, 0x42, 0x1, 0xfc, 0x0, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x20, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x40, 0x0, 0xa0, 0x0, 0x10, 0x1, 0x8, 0x2, 0x0, 0x0, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0xa0, 0x0, 0xa0, 0x0, 0xa0, 0x0, 0xa0, 0x0, 0xa0, 0x0, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x0, 0x0, 0x8, 0x2, 0x10, 0x1, 0xa0, 0x0, 0x40, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x8, 0x0, 0x4, 0x0, 0xc4, 0x2, 0x24, 0x0, 0x18, 0x0, 0x0, 0x0, 	// 63	question
    }
};
