
// file: font/9x15B.bdf
// font: -Misc-Fixed-Bold-R-Normal--15-140-75-75-C-90-ISO10646-1

#include <font.h>

const struct Font font_9x15B_n = {
    .type       = 1,
    .name	= "9x15B_n",
    .height	= 15,
    .width	= 9,
    .bytescol	= 2,
    .numcol     = 9,
    .startchar  = 33,
    .lastchar	= 63,
    .data       = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0xb, 0xfc, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0x20, 0x1, 0xf8, 0x7, 0xf8, 0x7, 0x20, 0x1, 0xf8, 0x7, 0xf8, 0x7, 0x20, 0x1, 0x0, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x70, 0x4, 0xf8, 0xc, 0xc8, 0x8, 0xfc, 0x1f, 0x88, 0x9, 0x98, 0xf, 0x10, 0x7, 0x0, 0x0, 	// 36	dollar
	0x18, 0x8, 0x3c, 0xe, 0x18, 0x7, 0xc0, 0x1, 0xe0, 0x0, 0x38, 0x6, 0x1c, 0xf, 0x4, 0x6, 0x0, 0x0, 	// 37	percent
	0x0, 0x7, 0xb8, 0xf, 0xfc, 0x8, 0xe4, 0x8, 0xbc, 0xd, 0x18, 0x7, 0x0, 0xf, 0x80, 0x9, 0x0, 0x0, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0x0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf8, 0x7, 0x1c, 0xe, 0x6, 0x18, 0x2, 0x10, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x0, 0x0, 0x2, 0x10, 0x6, 0x18, 0x1c, 0xe, 0xf8, 0x7, 0xe0, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x80, 0x0, 0xa0, 0x2, 0xe0, 0x3, 0xc0, 0x1, 0xe0, 0x3, 0xa0, 0x2, 0x80, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0xf0, 0x7, 0xf0, 0x7, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4c, 0x0, 0x7c, 0x0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x1c, 0x0, 0x1c, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x8, 0x0, 0xe, 0x0, 0x7, 0xc0, 0x1, 0xe0, 0x0, 0x38, 0x0, 0x1c, 0x0, 0x4, 0x0, 0x0, 0x0, 	// 47	slash
	0xe0, 0x1, 0xf0, 0x3, 0x18, 0x6, 0xc, 0xc, 0xc, 0xc, 0x18, 0x6, 0xf0, 0x3, 0xe0, 0x1, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x10, 0x8, 0x18, 0x8, 0xfc, 0xf, 0xfc, 0xf, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 49	one
	0x10, 0x8, 0x18, 0xc, 0xc, 0xe, 0x4, 0xb, 0x84, 0x9, 0xcc, 0x8, 0x78, 0x8, 0x30, 0x8, 0x0, 0x0, 	// 50	two
	0x8, 0x4, 0xc, 0xc, 0x4, 0x8, 0x44, 0x8, 0x44, 0x8, 0xec, 0xc, 0xb8, 0x7, 0x10, 0x3, 0x0, 0x0, 	// 51	three
	0x80, 0x1, 0xc0, 0x1, 0x60, 0x1, 0x30, 0x1, 0x18, 0x1, 0xfc, 0xf, 0xfc, 0xf, 0x0, 0x1, 0x0, 0x0, 	// 52	four
	0x7c, 0x2, 0x7c, 0x6, 0x44, 0xc, 0x24, 0x8, 0x24, 0x8, 0x64, 0xc, 0xc4, 0x7, 0x80, 0x3, 0x0, 0x0, 	// 53	five
	0xf0, 0x3, 0xf8, 0x7, 0x8c, 0xc, 0x44, 0x8, 0x44, 0x8, 0xcc, 0xc, 0x98, 0x7, 0x0, 0x3, 0x0, 0x0, 	// 54	six
	0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0xf, 0xc4, 0xf, 0xe4, 0x0, 0x3c, 0x0, 0x1c, 0x0, 0x0, 0x0, 	// 55	seven
	0x10, 0x3, 0xb8, 0x7, 0xec, 0xc, 0x44, 0x8, 0x44, 0x8, 0xec, 0xc, 0xb8, 0x7, 0x10, 0x3, 0x0, 0x0, 	// 56	eight
	0x30, 0x0, 0x78, 0x6, 0xcc, 0xc, 0x84, 0x8, 0x84, 0x8, 0x4c, 0xc, 0xf8, 0x7, 0xf0, 0x3, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x0, 0x40, 0x8, 0xe0, 0x1c, 0xe0, 0x1c, 0x40, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x0, 0x0, 0x40, 0x0, 0xe0, 0x4c, 0xe0, 0x7c, 0x40, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0xc0, 0x0, 0xe0, 0x1, 0x30, 0x3, 0x18, 0x6, 0xc, 0xc, 0x4, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 60	less
	0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x4, 0x8, 0xc, 0xc, 0x18, 0x6, 0x30, 0x3, 0xe0, 0x1, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x18, 0x0, 0x1c, 0x0, 0x4, 0xd, 0x84, 0xd, 0xc4, 0x0, 0x7c, 0x0, 0x38, 0x0, 0x0, 0x0, 	// 63	question
    }
};
