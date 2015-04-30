
// file: font/luBIS12.bdf
// font: -B&H-Lucida-Bold-I-Normal-Sans-12-120-75-75-P-79-ISO10646-1

#include <font.h>

const struct Font font_luBIS12 = {
    .type       = 1,
    .name	= "luBIS12",
    .height	= 12,
    .width	= 12,
    .bytescol	= 2,
    .numcol     = 12,
    .startchar  = 33,
    .lastchar	= 127,
    .data       = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x70, 0x3, 0x7e, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0x80, 0x0, 0x88, 0x3, 0xf8, 0x3, 0xfe, 0x0, 0x8e, 0x3, 0xf8, 0x3, 0xfe, 0x0, 0x8e, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x1c, 0x2, 0xfe, 0x7, 0x72, 0x2, 0xff, 0x3, 0xc2, 0x1, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x0, 0x0, 0xc, 0x2, 0x1e, 0x3, 0x92, 0x1, 0x5e, 0x0, 0xac, 0x1, 0xd0, 0x3, 0x4c, 0x2, 0xc6, 0x3, 0x82, 0x1, 0x0, 0x0, 	// 37	percent
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x1, 0xec, 0x3, 0x3e, 0x2, 0x72, 0x2, 0xe2, 0x3, 0x9e, 0x1, 0xc, 0x3, 0xe0, 0x2, 0x60, 0x0, 0x0, 0x0, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x0, 0x0, 0xf0, 0x3, 0xfc, 0x7, 0xe, 0x4, 0x3, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x0, 0x4, 0x0, 0x6, 0x81, 0x3, 0xff, 0x1, 0x7e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x14, 0x0, 0x8, 0x0, 0x38, 0x0, 0xe, 0x0, 0x8, 0x0, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0xe0, 0x1, 0x3c, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x0, 0x0, 0x8, 0x0, 0x7, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x0, 0x0, 0x6, 0x80, 0x7, 0xe0, 0x1, 0x70, 0x0, 0x3c, 0x0, 0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 47	slash
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xfc, 0x3, 0x1e, 0x2, 0x2, 0x2, 0xc2, 0x3, 0xfe, 0x1, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0xe4, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x84, 0x3, 0x46, 0x3, 0x62, 0x3, 0x32, 0x3, 0x3e, 0x3, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x4, 0x3, 0x26, 0x2, 0x22, 0x2, 0xf2, 0x3, 0xde, 0x1, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 51	three
	0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x50, 0x0, 0x48, 0x0, 0xc4, 0x3, 0xfe, 0x3, 0x7e, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 52	four
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x18, 0x3, 0x16, 0x2, 0x36, 0x3, 0xf6, 0x1, 0xe6, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x1, 0xf8, 0x3, 0x3c, 0x2, 0x26, 0x2, 0xe2, 0x3, 0xc6, 0x1, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x86, 0x3, 0xc6, 0x1, 0x66, 0x0, 0x36, 0x0, 0x1e, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0x0, 0x0, 0x80, 0x1, 0xcc, 0x3, 0x3e, 0x2, 0x32, 0x2, 0xe2, 0x3, 0xde, 0x1, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1c, 0x3, 0x3e, 0x2, 0x22, 0x3, 0xe2, 0x1, 0xfe, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x18, 0x3, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x0, 0x8, 0x0, 0x7, 0x18, 0x3, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x0, 0x0, 0x40, 0x0, 0xe0, 0x0, 0xb0, 0x1, 0x10, 0x1, 0x18, 0x3, 0xc, 0x2, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0x0, 0x0, 0x40, 0x0, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x4, 0x3, 0x8c, 0x1, 0x88, 0x0, 0xd8, 0x0, 0x70, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x62, 0x3, 0x72, 0x0, 0x12, 0x0, 0x1e, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 63	question
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0xf8, 0x1, 0xc, 0x3, 0x64, 0x2, 0xf2, 0x2, 0x8a, 0x2, 0x6a, 0x2, 0xfe, 0x0, 0x1c, 0x0, 0x0, 0x0, 	// 64	at
	0x0, 0x0, 0x0, 0x3, 0x80, 0x3, 0xe0, 0x0, 0x70, 0x0, 0x58, 0x0, 0x4c, 0x0, 0xfe, 0x3, 0xfe, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 65	A
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x2, 0x22, 0x2, 0x32, 0x3, 0xfe, 0x1, 0xcc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 66	B
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf8, 0x3, 0x1c, 0x3, 0x4, 0x2, 0x6, 0x2, 0x2, 0x2, 0x6, 0x1, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 67	C
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x2, 0x2, 0x2, 0x2, 0x3, 0x2, 0x1, 0xc6, 0x1, 0xfe, 0x0, 0x3c, 0x0, 0x0, 0x0, 	// 68	D
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x2, 0x22, 0x2, 0x22, 0x2, 0x2, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 69	E
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x22, 0x0, 0x22, 0x0, 0x22, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 70	F
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf8, 0x3, 0x1c, 0x3, 0x4, 0x2, 0x6, 0x2, 0xc2, 0x3, 0xc6, 0x3, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 71	G
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x20, 0x0, 0x20, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 72	H
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 73	I
	0x0, 0x8, 0x0, 0x8, 0x0, 0xc, 0xe0, 0xf, 0xfe, 0x7, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 74	J
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x70, 0x0, 0xd8, 0x1, 0x8c, 0x3, 0x6, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 75	K
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 76	L
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x6, 0x0, 0xfe, 0x0, 0x70, 0x0, 0x18, 0x0, 0xc6, 0x3, 0xfe, 0x3, 0x3e, 0x0, 	// 77	M
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x3, 0x7e, 0x0, 0x1e, 0x0, 0x3c, 0x0, 0xf0, 0x0, 0xc0, 0x3, 0xf0, 0x3, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 78	N
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf8, 0x3, 0x1c, 0x3, 0x4, 0x2, 0x2, 0x2, 0x2, 0x1, 0xc6, 0x1, 0xfe, 0x0, 0x3c, 0x0, 0x0, 0x0, 	// 79	O
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x5e, 0x0, 0x42, 0x0, 0x62, 0x0, 0x3e, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 80	P
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf8, 0x3, 0x1c, 0x3, 0x4, 0x2, 0x2, 0x6, 0x2, 0x5, 0xc6, 0xd, 0xfe, 0x8, 0x3c, 0x8, 0x0, 0x0, 	// 81	Q
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x62, 0x0, 0xf2, 0x1, 0x9e, 0x3, 0xc, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 82	R
	0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1c, 0x3, 0x3e, 0x2, 0x72, 0x2, 0xe2, 0x3, 0xc6, 0x1, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 83	S
	0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x2, 0x0, 0xe2, 0x3, 0xfe, 0x3, 0x3e, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 84	T
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xfe, 0x3, 0x3e, 0x3, 0x0, 0x2, 0x0, 0x3, 0xe0, 0x1, 0xfe, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 85	U
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x3, 0xfe, 0x3, 0x0, 0x1, 0xc0, 0x0, 0x70, 0x0, 0x3e, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 86	V
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x3, 0xfe, 0x3, 0x80, 0x1, 0x60, 0x0, 0xfc, 0x3, 0xfc, 0x3, 0x0, 0x1, 0xe0, 0x0, 0x3e, 0x0, 	// 87	W
	0x0, 0x0, 0x0, 0x3, 0x82, 0x3, 0xce, 0x0, 0x3e, 0x0, 0xf8, 0x0, 0xe0, 0x3, 0x98, 0x3, 0xe, 0x2, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 88	X
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0x0, 0xfe, 0x3, 0xc0, 0x3, 0x60, 0x0, 0x38, 0x0, 0x1e, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 89	Y
	0x0, 0x0, 0x0, 0x3, 0x80, 0x3, 0xc2, 0x3, 0xe2, 0x2, 0x72, 0x2, 0x3a, 0x2, 0x1e, 0x2, 0xe, 0x0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 90	Z
	0x0, 0x0, 0x80, 0x7, 0xf8, 0x7, 0x7f, 0x4, 0x7, 0x4, 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 91	bracketleft
	0x0, 0x0, 0x0, 0x0, 0x3, 0x0, 0x1f, 0x0, 0xfc, 0x0, 0xe0, 0x7, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 92	backslash
	0x0, 0x0, 0x0, 0x4, 0x0, 0x4, 0x81, 0x7, 0xf9, 0x7, 0x7f, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 93	bracketright
	0x0, 0x0, 0x0, 0x0, 0x80, 0x1, 0xc0, 0x0, 0x60, 0x0, 0x10, 0x0, 0x8, 0x0, 0xfc, 0x1, 0xfc, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 94	asciicircum
	0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 95	underscore
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x3, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 96	grave
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x3, 0xf0, 0x3, 0x38, 0x2, 0x8, 0x1, 0x88, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 97	a
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x3, 0xf8, 0x3, 0x3f, 0x2, 0x17, 0x2, 0x88, 0x3, 0xf8, 0x1, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 98	b
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf0, 0x3, 0x18, 0x2, 0x8, 0x2, 0x18, 0x2, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 99	c
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x1, 0xf0, 0x3, 0x38, 0x2, 0x8, 0x1, 0x88, 0x3, 0xf8, 0x3, 0x7f, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 100	d
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf0, 0x3, 0x58, 0x2, 0x48, 0x2, 0x68, 0x3, 0x38, 0x1, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 101	e
	0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xc8, 0xf, 0xf8, 0x1, 0x3e, 0x0, 0xf, 0x0, 0x9, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 102	f
	0x0, 0x0, 0x0, 0x4, 0xc0, 0xd, 0xf0, 0x9, 0x38, 0x9, 0x88, 0xc, 0xc8, 0x7, 0xf8, 0x3, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 103	g
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x7f, 0x0, 0x17, 0x0, 0x88, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 104	h
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x7b, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 105	i
	0x0, 0x8, 0x0, 0x8, 0x0, 0xf, 0xf8, 0x7, 0xfb, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 106	j
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x7f, 0x0, 0xe7, 0x0, 0xb0, 0x1, 0x18, 0x3, 0x8, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 107	k
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x7f, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 108	l
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x10, 0x0, 0x88, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x10, 0x0, 0x88, 0x3, 0xf8, 0x3, 	// 109	m
	0x0, 0x0, 0x0, 0x0, 0x80, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x10, 0x0, 0x88, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 110	n
	0x0, 0x0, 0x0, 0x0, 0xe0, 0x1, 0xf0, 0x3, 0x18, 0x2, 0x8, 0x2, 0x8, 0x3, 0xf8, 0x1, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 111	o
	0x0, 0x0, 0x0, 0xc, 0xc0, 0xf, 0xf8, 0x3, 0x38, 0x2, 0x10, 0x2, 0x88, 0x3, 0xf8, 0x1, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 112	p
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x1, 0xf0, 0x3, 0x38, 0x2, 0x8, 0xd, 0x88, 0xf, 0xf8, 0x3, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 113	q
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x3, 0xf8, 0x3, 0x78, 0x0, 0x10, 0x0, 0x18, 0x0, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 114	r
	0x0, 0x0, 0x0, 0x1, 0x30, 0x3, 0x78, 0x2, 0xe8, 0x2, 0xc8, 0x3, 0x98, 0x1, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 115	s
	0x0, 0x0, 0x0, 0x0, 0xc8, 0x3, 0xf8, 0x3, 0x3e, 0x2, 0xe, 0x2, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 116	t
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x1, 0xf8, 0x3, 0x38, 0x2, 0x0, 0x1, 0xc0, 0x3, 0xf8, 0x3, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 117	u
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x3, 0xf8, 0x3, 0x0, 0x1, 0xc0, 0x0, 0x78, 0x0, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 118	v
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x3, 0xf8, 0x3, 0x0, 0x1, 0xc0, 0x0, 0xf0, 0x3, 0x0, 0x3, 0x80, 0x1, 0xf8, 0x0, 0x38, 0x0, 	// 119	w
	0x0, 0x0, 0x0, 0x2, 0x0, 0x3, 0x98, 0x0, 0x78, 0x0, 0xf0, 0x1, 0xc0, 0x3, 0x20, 0x3, 0x18, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 120	x
	0x0, 0x0, 0x0, 0x8, 0x0, 0xc, 0xf8, 0x7, 0xf8, 0x3, 0x0, 0x1, 0xc0, 0x0, 0x78, 0x0, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 121	y
	0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x88, 0x3, 0xc8, 0x3, 0xe8, 0x2, 0x78, 0x2, 0x38, 0x2, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 122	z
	0x0, 0x0, 0x20, 0x3, 0xac, 0x7, 0xfe, 0x4, 0x53, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 123	braceleft
	0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf8, 0x7, 0xff, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 124	bar
	0x0, 0x0, 0x0, 0x4, 0x50, 0x6, 0xf9, 0x3, 0xaf, 0x1, 0x26, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 125	braceright
	0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x30, 0x0, 0x30, 0x0, 0x70, 0x0, 0x60, 0x0, 0x60, 0x0, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 126	asciitilde
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 127	
    }
};
