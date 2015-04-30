
// file: font/luRS14.bdf
// font: -B&H-Lucida-Medium-R-Normal-Sans-14-140-75-75-P-81-ISO10646-1

#include <font.h>

const struct Font font_luRS14_n = {
    .type       = 1,
    .name	= "luRS14_n",
    .height	= 14,
    .width	= 10,
    .bytescol	= 2,
    .numcol     = 10,
    .startchar  = 33,
    .lastchar	= 63,
    .data       = {
	0x0, 0x0, 0xfc, 0xd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0x20, 0x1, 0x20, 0x1, 0xfc, 0xf, 0x20, 0x1, 0x20, 0x1, 0xfc, 0xf, 0x20, 0x1, 0x20, 0x1, 0x0, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x38, 0x4, 0x44, 0x8, 0x44, 0x8, 0xfe, 0x1f, 0x84, 0x8, 0x84, 0x8, 0x8, 0x7, 0x0, 0x0, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x18, 0x4, 0x24, 0x2, 0x24, 0x1, 0x98, 0x0, 0x40, 0x6, 0x20, 0x9, 0x10, 0x9, 0x8, 0x6, 0x0, 0x0, 	// 37	percent
	0x0, 0x0, 0x0, 0x7, 0xb8, 0x8, 0x44, 0x8, 0x44, 0x8, 0xc4, 0x8, 0x24, 0x5, 0x18, 0x6, 0xc0, 0x5, 0x40, 0x8, 	// 38	ampersand
	0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0xf0, 0x3, 0xc, 0xc, 0x2, 0x10, 0x2, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x2, 0x10, 0x2, 0x10, 0xc, 0xc, 0xf0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x28, 0x0, 0x10, 0x0, 0x6c, 0x0, 0x10, 0x0, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0xf0, 0x7, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x20, 0x0, 0x10, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x10, 0x0, 0xc, 0x0, 0x3, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 47	slash
	0x0, 0x0, 0xf0, 0x3, 0x8, 0x4, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x8, 0x4, 0xf0, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x8, 0x0, 0xfc, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x8, 0x8, 0x4, 0xc, 0x4, 0xa, 0x4, 0x9, 0x84, 0x8, 0x44, 0x8, 0x38, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x8, 0x4, 0x4, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0xa8, 0x4, 0x10, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 51	three
	0x0, 0x0, 0x80, 0x1, 0x40, 0x1, 0x20, 0x1, 0x10, 0x1, 0x8, 0x1, 0xfc, 0xf, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 52	four
	0x0, 0x0, 0x7c, 0x4, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x84, 0x4, 0x4, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0xf0, 0x3, 0x48, 0x4, 0x24, 0x8, 0x24, 0x8, 0x24, 0x8, 0x44, 0x4, 0x88, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0xe, 0x84, 0x1, 0x44, 0x0, 0x24, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0x10, 0x3, 0xa8, 0x4, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0xa8, 0x4, 0x10, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x70, 0x4, 0x88, 0x8, 0x4, 0x9, 0x4, 0x9, 0x4, 0x9, 0x88, 0x4, 0xf0, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x60, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x20, 0x0, 0x10, 0x60, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x40, 0x1, 0x20, 0x2, 0x20, 0x2, 0x10, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0x40, 0x1, 0x40, 0x1, 0x40, 0x1, 0x40, 0x1, 0x40, 0x1, 0x40, 0x1, 0x40, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x0, 0x0, 0x10, 0x4, 0x20, 0x2, 0x20, 0x2, 0x40, 0x1, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x8, 0x0, 0x4, 0x0, 0x84, 0xd, 0x44, 0x0, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 63	question
    }
};
