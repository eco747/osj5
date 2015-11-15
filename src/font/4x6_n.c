
// file: font/4x6.bdf
// font: -Misc-Fixed-Medium-R-Normal--6-60-75-75-C-40-ISO10646-1

#include <font.h>

const struct Font font_4x6_n = {
    .type       = 1,
    .name	= "4x6_n",
    .height	= 6,
    .width	= 4,
    .bytescol	= 1,
    .numcol     = 4,
    .startchar  = 33,
    .lastchar	= 63,
    .data       = {
	0x0, 0x17, 0x0, 0x0, 	// 33	exclam
	0x3, 0x0, 0x3, 0x0, 	// 34	quotedbl
	0x1f, 0xa, 0x1f, 0xa, 	// 35	numbersign
	0x16, 0x37, 0x1a, 0x0, 	// 36	dollar
	0x9, 0x4, 0x12, 0x0, 	// 37	percent
	0xa, 0x15, 0xa, 0x10, 	// 38	ampersand
	0x0, 0x3, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x1e, 0x21, 0x0, 	// 40	parenleft
	0x21, 0x1e, 0x0, 0x0, 	// 41	parenright
	0x15, 0xe, 0x15, 0x0, 	// 42	asterisk
	0x4, 0x1f, 0x4, 0x0, 	// 43	plus
	0x20, 0x10, 0x0, 0x0, 	// 44	comma
	0x4, 0x4, 0x4, 0x0, 	// 45	hyphen
	0x0, 0x10, 0x0, 0x0, 	// 46	period
	0x18, 0x4, 0x3, 0x0, 	// 47	slash
	0xe, 0x15, 0xe, 0x0, 	// 48	zero
	0x12, 0x1f, 0x10, 0x0, 	// 49	one
	0x12, 0x19, 0x16, 0x0, 	// 50	two
	0x11, 0x15, 0xb, 0x0, 	// 51	three
	0x7, 0x4, 0x1f, 0x0, 	// 52	four
	0x17, 0x15, 0x9, 0x0, 	// 53	five
	0xe, 0x15, 0x9, 0x0, 	// 54	six
	0x19, 0x5, 0x3, 0x0, 	// 55	seven
	0x1a, 0x15, 0xb, 0x0, 	// 56	eight
	0x12, 0x15, 0xe, 0x0, 	// 57	nine
	0x0, 0x12, 0x0, 0x0, 	// 58	colon
	0x20, 0x12, 0x0, 0x0, 	// 59	semicolon
	0x4, 0xa, 0x11, 0x0, 	// 60	less
	0xa, 0xa, 0xa, 0x0, 	// 61	equal
	0x11, 0xa, 0x4, 0x0, 	// 62	greater
	0x1, 0x15, 0x2, 0x0, 	// 63	question
    }
};