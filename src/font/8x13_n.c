
// file: font/8x13.bdf
// font: -Misc-Fixed-Medium-R-Normal--13-120-75-75-C-80-ISO10646-1

#include <font.h>

const struct Font font_8x13_n = {
    .type       = 1,
    .name	= "8x13_n",
    .height	= 13,
    .width	= 8,
    .bytescol	= 2,
    .numcol     = 8,
    .startchar  = 33,
    .lastchar	= 63,
    .data       = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0xa0, 0x0, 0xf8, 0x3, 0xa0, 0x0, 0xa0, 0x0, 0xf8, 0x3, 0xa0, 0x0, 0x0, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x30, 0x2, 0x48, 0x2, 0xfc, 0x7, 0x48, 0x2, 0x88, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x8, 0x4, 0x14, 0x3, 0x88, 0x0, 0x60, 0x2, 0x10, 0x5, 0xc, 0x2, 0x0, 0x0, 	// 37	percent
	0x0, 0x0, 0x60, 0x3, 0x90, 0x4, 0x90, 0x4, 0x60, 0x5, 0x0, 0x2, 0x0, 0x5, 0x0, 0x0, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x18, 0x3, 0x4, 0x4, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x0, 0x0, 0x4, 0x4, 0x18, 0x3, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x10, 0x0, 0x54, 0x0, 0x38, 0x0, 0x38, 0x0, 0x54, 0x0, 0x10, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x40, 0x0, 0x40, 0x0, 0xf0, 0x1, 0x40, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x0, 0x0, 0x8, 0x0, 0x6, 0x0, 0x6, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0xe, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x6, 0x0, 0x1, 0x80, 0x0, 0x40, 0x0, 0x20, 0x0, 0x10, 0x0, 0xc, 0x0, 0x0, 0x0, 	// 47	slash
	0x0, 0x0, 0xf0, 0x1, 0x8, 0x2, 0x4, 0x4, 0x4, 0x4, 0x8, 0x2, 0xf0, 0x1, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x10, 0x4, 0x8, 0x4, 0xfc, 0x7, 0x0, 0x4, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x18, 0x6, 0x4, 0x5, 0x84, 0x4, 0x84, 0x4, 0x44, 0x4, 0x38, 0x4, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x4, 0x2, 0x4, 0x4, 0x44, 0x4, 0x64, 0x4, 0x54, 0x4, 0x8c, 0x3, 0x0, 0x0, 	// 51	three
	0x0, 0x0, 0xc0, 0x1, 0x20, 0x1, 0x10, 0x1, 0x8, 0x1, 0xfc, 0x7, 0x0, 0x1, 0x0, 0x0, 	// 52	four
	0x0, 0x0, 0x7c, 0x2, 0x44, 0x4, 0x24, 0x4, 0x24, 0x4, 0x24, 0x4, 0xc4, 0x3, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0xf0, 0x3, 0x88, 0x4, 0x44, 0x4, 0x44, 0x4, 0x44, 0x4, 0x80, 0x3, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x4, 0x0, 0x4, 0x6, 0x84, 0x1, 0x64, 0x0, 0x14, 0x0, 0xc, 0x0, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0xb8, 0x3, 0x44, 0x4, 0x44, 0x4, 0x44, 0x4, 0x44, 0x4, 0xb8, 0x3, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x38, 0x0, 0x44, 0x4, 0x44, 0x4, 0x44, 0x4, 0x24, 0x2, 0xf8, 0x1, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x0, 0x20, 0x4, 0x70, 0xe, 0x20, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x0, 0x8, 0x20, 0x6, 0x70, 0x6, 0x20, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x0, 0x0, 0x40, 0x0, 0xa0, 0x0, 0x10, 0x1, 0x8, 0x2, 0x4, 0x4, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0x20, 0x1, 0x20, 0x1, 0x20, 0x1, 0x20, 0x1, 0x20, 0x1, 0x20, 0x1, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x4, 0x4, 0x8, 0x2, 0x10, 0x1, 0xa0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x18, 0x0, 0x4, 0x0, 0x4, 0x0, 0x84, 0x5, 0x44, 0x0, 0x38, 0x0, 0x0, 0x0, 	// 63	question
    }
};
