
// file: font/9x15.bdf
// font: -Misc-Fixed-Medium-R-Normal--15-140-75-75-C-90-ISO10646-1

#include <font.h>

const struct Font font_9x15 = {
    .name	= "9x15",
    .height	= 15,
    .width	= 9,
    .byteschar	= 2,
    .startchar  = 32,
    .lastchar	= 146,
    .data       = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 32	 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0x20, 0x1, 0xf8, 0x7, 0x20, 0x1, 0x20, 0x1, 0xf8, 0x7, 0x20, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x30, 0x4, 0x48, 0x8, 0x88, 0x8, 0xfc, 0x1f, 0x88, 0x8, 0x8, 0x9, 0x10, 0x6, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x18, 0x8, 0x24, 0x6, 0x18, 0x1, 0xc0, 0x0, 0x20, 0x6, 0x18, 0x9, 0x4, 0x6, 0x0, 0x0, 	// 37	percent
	0x0, 0x0, 0x38, 0x7, 0xc4, 0x8, 0xc4, 0x8, 0x38, 0x5, 0x0, 0x2, 0x0, 0x5, 0x80, 0x8, 0x0, 0x0, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x3, 0xc, 0xc, 0x2, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x10, 0xc, 0xc, 0xf0, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x88, 0x0, 0x50, 0x0, 0x20, 0x0, 0xfc, 0x1, 0x20, 0x0, 0x50, 0x0, 0x88, 0x0, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0xf0, 0x7, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4c, 0x0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x0, 0x0, 0x8, 0x0, 0x6, 0x0, 0x1, 0xc0, 0x0, 0x20, 0x0, 0x18, 0x0, 0x4, 0x0, 0x0, 0x0, 	// 47	slash
	0x0, 0x0, 0xf0, 0x3, 0x8, 0x4, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x8, 0x4, 0xf0, 0x3, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x20, 0x8, 0x10, 0x8, 0x8, 0x8, 0xfc, 0xf, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x18, 0xc, 0x4, 0xa, 0x4, 0x9, 0x84, 0x8, 0x44, 0x8, 0x24, 0x8, 0x18, 0x8, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x4, 0x4, 0x4, 0x8, 0x4, 0x8, 0x44, 0x8, 0x64, 0x8, 0x54, 0x8, 0x8c, 0x7, 0x0, 0x0, 	// 51	three
	0x0, 0x0, 0x80, 0x1, 0x40, 0x1, 0x20, 0x1, 0x10, 0x1, 0x8, 0x1, 0xfc, 0xf, 0x0, 0x1, 0x0, 0x0, 	// 52	four
	0x0, 0x0, 0x7c, 0x4, 0x44, 0x8, 0x24, 0x8, 0x24, 0x8, 0x24, 0x8, 0x24, 0x8, 0xc4, 0x7, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0xf0, 0x7, 0x88, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x80, 0x7, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0xc, 0x4, 0x3, 0xc4, 0x0, 0x34, 0x0, 0xc, 0x0, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0x10, 0x3, 0xa8, 0x4, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0xa8, 0x4, 0x10, 0x3, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x78, 0x0, 0x84, 0x8, 0x84, 0x8, 0x84, 0x8, 0x84, 0x8, 0x44, 0x4, 0xf8, 0x3, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0xc, 0x60, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x4c, 0x60, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x20, 0x1, 0x10, 0x2, 0x8, 0x4, 0x4, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x40, 0x2, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x0, 0x0, 0x4, 0x8, 0x8, 0x4, 0x10, 0x2, 0x20, 0x1, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x18, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0xb, 0x84, 0x0, 0x44, 0x0, 0x38, 0x0, 0x0, 0x0, 	// 63	question
	0x0, 0x0, 0xf8, 0x7, 0x4, 0x8, 0xc4, 0x8, 0x24, 0x9, 0x24, 0x9, 0xa4, 0x8, 0xf8, 0x1, 0x0, 0x0, 	// 64	at
	0x0, 0x0, 0xe0, 0xf, 0x10, 0x1, 0x8, 0x1, 0x4, 0x1, 0x8, 0x1, 0x10, 0x1, 0xe0, 0xf, 0x0, 0x0, 	// 65	A
	0x0, 0x0, 0xfc, 0xf, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0xa8, 0x4, 0x10, 0x3, 0x0, 0x0, 	// 66	B
	0x0, 0x0, 0xf8, 0x7, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x8, 0x4, 0x0, 0x0, 	// 67	C
	0x0, 0x0, 0xfc, 0xf, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x8, 0x4, 0xf0, 0x3, 0x0, 0x0, 	// 68	D
	0x0, 0x0, 0xfc, 0xf, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x4, 0x8, 0x4, 0x8, 0x0, 0x0, 	// 69	E
	0x0, 0x0, 0xfc, 0xf, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x4, 0x0, 0x4, 0x0, 0x0, 0x0, 	// 70	F
	0x0, 0x0, 0xf8, 0x7, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x84, 0x8, 0x84, 0x8, 0x88, 0x7, 0x0, 0x0, 	// 71	G
	0x0, 0x0, 0xfc, 0xf, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0x40, 0x0, 0xfc, 0xf, 0x0, 0x0, 	// 72	H
	0x0, 0x0, 0x0, 0x0, 0x4, 0x8, 0x4, 0x8, 0xfc, 0xf, 0x4, 0x8, 0x4, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 73	I
	0x0, 0x0, 0x0, 0x4, 0x0, 0x8, 0x0, 0x8, 0x4, 0x8, 0x4, 0x8, 0xfc, 0x7, 0x4, 0x0, 0x4, 0x0, 	// 74	J
	0x0, 0x0, 0xfc, 0xf, 0x40, 0x0, 0xc0, 0x0, 0x20, 0x1, 0x10, 0x2, 0x8, 0x4, 0x4, 0x8, 0x0, 0x0, 	// 75	K
	0x0, 0x0, 0xfc, 0xf, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 	// 76	L
	0x0, 0x0, 0xfc, 0xf, 0x10, 0x0, 0x60, 0x0, 0x80, 0x1, 0x60, 0x0, 0x10, 0x0, 0xfc, 0xf, 0x0, 0x0, 	// 77	M
	0x0, 0x0, 0xfc, 0xf, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0, 0x0, 0x1, 0xfc, 0xf, 0x0, 0x0, 	// 78	N
	0x0, 0x0, 0xf8, 0x7, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0x4, 0x8, 0xf8, 0x7, 0x0, 0x0, 	// 79	O
	0x0, 0x0, 0xfc, 0xf, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x38, 0x0, 0x0, 0x0, 	// 80	P
	0x0, 0x0, 0xf8, 0x7, 0x4, 0x8, 0x4, 0xa, 0x4, 0xc, 0x4, 0x18, 0x4, 0x28, 0xf8, 0x27, 0x0, 0x0, 	// 81	Q
	0x0, 0x0, 0xfc, 0xf, 0x44, 0x0, 0x44, 0x0, 0xc4, 0x0, 0x44, 0x1, 0x44, 0x2, 0x38, 0xc, 0x0, 0x0, 	// 82	R
	0x0, 0x0, 0x38, 0x6, 0x44, 0x8, 0x44, 0x8, 0x44, 0x8, 0x84, 0x8, 0x84, 0x8, 0x18, 0x7, 0x0, 0x0, 	// 83	S
	0x0, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0xfc, 0xf, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x0, 0x0, 	// 84	T
	0x0, 0x0, 0xfc, 0x7, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0xfc, 0x7, 0x0, 0x0, 	// 85	U
	0x0, 0x0, 0x1c, 0x0, 0xe0, 0x0, 0x0, 0x7, 0x0, 0x8, 0x0, 0x7, 0xe0, 0x0, 0x1c, 0x0, 0x0, 0x0, 	// 86	V
	0x0, 0x0, 0xfc, 0x7, 0x0, 0x8, 0x0, 0x4, 0xc0, 0x3, 0x0, 0x4, 0x0, 0x8, 0xfc, 0x7, 0x0, 0x0, 	// 87	W
	0x0, 0x0, 0xc, 0xc, 0x10, 0x2, 0x20, 0x1, 0xc0, 0x0, 0x20, 0x1, 0x10, 0x2, 0xc, 0xc, 0x0, 0x0, 	// 88	X
	0x0, 0x0, 0xc, 0x0, 0x10, 0x0, 0x20, 0x0, 0xc0, 0xf, 0x20, 0x0, 0x10, 0x0, 0xc, 0x0, 0x0, 0x0, 	// 89	Y
	0x0, 0x0, 0x4, 0xe, 0x4, 0x9, 0x84, 0x8, 0x44, 0x8, 0x24, 0x8, 0x14, 0x8, 0xc, 0x8, 0x0, 0x0, 	// 90	Z
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x1f, 0x2, 0x10, 0x2, 0x10, 0x2, 0x10, 0x0, 0x0, 0x0, 0x0, 	// 91	bracketleft
	0x0, 0x0, 0x4, 0x0, 0x18, 0x0, 0x20, 0x0, 0xc0, 0x0, 0x0, 0x1, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 	// 92	backslash
	0x0, 0x0, 0x0, 0x0, 0x2, 0x10, 0x2, 0x10, 0x2, 0x10, 0xfe, 0x1f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 93	bracketright
	0x0, 0x0, 0x20, 0x0, 0x10, 0x0, 0x8, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x0, 0x0, 	// 94	asciicircum
	0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x0, 	// 95	underscore
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 96	grave
	0x0, 0x0, 0x0, 0x6, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x5, 0xc0, 0xf, 0x0, 0x0, 	// 97	a
	0x0, 0x0, 0xfc, 0xf, 0x40, 0x4, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0xc0, 0x7, 0x0, 0x0, 	// 98	b
	0x0, 0x0, 0xc0, 0x7, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x40, 0x4, 0x0, 0x0, 	// 99	c
	0x0, 0x0, 0xc0, 0x7, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x40, 0x4, 0xfc, 0xf, 0x0, 0x0, 	// 100	d
	0x0, 0x0, 0xc0, 0x7, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0xc0, 0x1, 0x0, 0x0, 	// 101	e
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0xf8, 0xf, 0x84, 0x0, 0x84, 0x0, 0x4, 0x0, 0x18, 0x0, 0x0, 0x0, 	// 102	f
	0x0, 0x0, 0xc0, 0x35, 0x20, 0x4a, 0x20, 0x4a, 0x20, 0x4a, 0x20, 0x4a, 0xc0, 0x49, 0x20, 0x30, 0x0, 0x0, 	// 103	g
	0x0, 0x0, 0xfc, 0xf, 0x40, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0xc0, 0xf, 0x0, 0x0, 	// 104	h
	0x0, 0x0, 0x0, 0x0, 0x20, 0x8, 0x24, 0x8, 0xe4, 0xf, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 105	i
	0x0, 0x0, 0x0, 0x38, 0x0, 0x40, 0x0, 0x40, 0x20, 0x40, 0x24, 0x40, 0xe4, 0x3f, 0x0, 0x0, 0x0, 0x0, 	// 106	j
	0x0, 0x0, 0xfc, 0xf, 0x0, 0x1, 0x80, 0x2, 0x80, 0x2, 0x40, 0x4, 0x40, 0x4, 0x20, 0x8, 0x0, 0x0, 	// 107	k
	0x0, 0x0, 0x0, 0x0, 0x4, 0x8, 0x4, 0x8, 0xfc, 0xf, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 108	l
	0x0, 0x0, 0xe0, 0xf, 0x20, 0x0, 0x20, 0x0, 0xc0, 0x7, 0x20, 0x0, 0x20, 0x0, 0xc0, 0xf, 0x0, 0x0, 	// 109	m
	0x0, 0x0, 0xe0, 0xf, 0x40, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0xc0, 0xf, 0x0, 0x0, 	// 110	n
	0x0, 0x0, 0xc0, 0x7, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0xc0, 0x7, 0x0, 0x0, 	// 111	o
	0x0, 0x0, 0xe0, 0x7f, 0x40, 0x4, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0xc0, 0x7, 0x0, 0x0, 	// 112	p
	0x0, 0x0, 0xc0, 0x7, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x40, 0x4, 0xe0, 0x7f, 0x0, 0x0, 	// 113	q
	0x0, 0x0, 0x20, 0x0, 0xc0, 0xf, 0x40, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0xc0, 0x0, 0x0, 0x0, 	// 114	r
	0x0, 0x0, 0xc0, 0x4, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x20, 0x9, 0x40, 0x6, 0x0, 0x0, 	// 115	s
	0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0xf8, 0x7, 0x20, 0x8, 0x20, 0x8, 0x20, 0x8, 0x0, 0x4, 0x0, 0x0, 	// 116	t
	0x0, 0x0, 0xe0, 0x7, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0xe0, 0x7, 0x0, 0x8, 0x0, 0x0, 	// 117	u
	0x0, 0x0, 0x60, 0x0, 0x80, 0x1, 0x0, 0x6, 0x0, 0x8, 0x0, 0x6, 0x80, 0x1, 0x60, 0x0, 0x0, 0x0, 	// 118	v
	0x0, 0x0, 0xe0, 0x7, 0x0, 0x8, 0x0, 0x4, 0x80, 0x3, 0x0, 0x4, 0x0, 0x8, 0xe0, 0x7, 0x0, 0x0, 	// 119	w
	0x0, 0x0, 0x20, 0x8, 0x40, 0x4, 0x80, 0x2, 0x0, 0x1, 0x80, 0x2, 0x40, 0x4, 0x20, 0x8, 0x0, 0x0, 	// 120	x
	0x0, 0x0, 0xe0, 0x27, 0x0, 0x48, 0x0, 0x48, 0x0, 0x48, 0x0, 0x44, 0xe0, 0x3f, 0x0, 0x0, 0x0, 0x0, 	// 121	y
	0x0, 0x0, 0x20, 0x8, 0x20, 0xc, 0x20, 0xa, 0x20, 0x9, 0xa0, 0x8, 0x60, 0x8, 0x20, 0x8, 0x0, 0x0, 	// 122	z
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x0, 0xdc, 0xe, 0x22, 0x11, 0x2, 0x10, 0x2, 0x10, 0x0, 0x0, 	// 123	braceleft
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x1f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 124	bar
	0x0, 0x0, 0x2, 0x10, 0x2, 0x10, 0x22, 0x11, 0xdc, 0xe, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 125	braceright
	0x0, 0x0, 0x18, 0x0, 0x4, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x10, 0x0, 0xc, 0x0, 0x0, 0x0, 	// 126	asciitilde
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 127	
	0x0, 0x0, 0x80, 0x0, 0xc0, 0x1, 0xa0, 0x2, 0x90, 0x4, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x0, 0x0, 	// 128	arrowleft
	0x0, 0x0, 0x20, 0x0, 0x10, 0x0, 0x8, 0x0, 0xfc, 0xf, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x0, 0x0, 	// 129	arrowup
	0x0, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x90, 0x4, 0xa0, 0x2, 0xc0, 0x1, 0x80, 0x0, 0x0, 0x0, 	// 130	arrowright
	0x0, 0x0, 0x0, 0x1, 0x0, 0x2, 0x0, 0x4, 0xfc, 0xf, 0x0, 0x4, 0x0, 0x2, 0x0, 0x1, 0x0, 0x0, 	// 131	arrowdown
	0x0, 0x0, 0x20, 0x1, 0x10, 0x2, 0x8, 0x4, 0xfc, 0xf, 0x8, 0x4, 0x10, 0x2, 0x20, 0x1, 0x0, 0x0, 	// 132	arrowupdn
	0x0, 0x0, 0x80, 0x0, 0xc0, 0x1, 0xa0, 0x2, 0x80, 0x0, 0xa0, 0x2, 0xc0, 0x1, 0x80, 0x0, 0x0, 0x0, 	// 133	arrowboth
	0x0, 0x0, 0xf0, 0x0, 0x30, 0x0, 0x50, 0x0, 0x90, 0x0, 0x0, 0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x0, 	// 134	uni2196
	0x0, 0x0, 0x0, 0x4, 0x0, 0x2, 0x0, 0x1, 0x90, 0x0, 0x50, 0x0, 0x30, 0x0, 0xf0, 0x0, 0x0, 0x0, 	// 135	uni2197
	0x0, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x4, 0x0, 0x5, 0x0, 0x6, 0x80, 0x7, 0x0, 0x0, 	// 136	uni2198
	0x0, 0x0, 0x80, 0x7, 0x0, 0x6, 0x0, 0x5, 0x80, 0x4, 0x40, 0x0, 0x20, 0x0, 0x10, 0x0, 0x0, 0x0, 	// 137	uni2199
	0x0, 0x0, 0x10, 0x0, 0x38, 0x0, 0x54, 0x0, 0x10, 0x0, 0x10, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 	// 138	uni21B0
	0x0, 0x0, 0xf0, 0xf, 0x10, 0x0, 0x10, 0x0, 0x10, 0x0, 0x54, 0x0, 0x38, 0x0, 0x10, 0x0, 0x0, 0x0, 	// 139	uni21B1
	0x80, 0x0, 0x0, 0x1, 0xe0, 0x3, 0x10, 0x1, 0x88, 0x0, 0x8, 0x0, 0x8, 0x0, 0x10, 0x0, 0xe0, 0x0, 	// 140	uni21B6
	0xe0, 0x0, 0x10, 0x0, 0x8, 0x0, 0x8, 0x0, 0x88, 0x0, 0x10, 0x1, 0xe0, 0x3, 0x0, 0x1, 0x80, 0x0, 	// 141	uni21B7
	0xc0, 0x1, 0x20, 0x2, 0x10, 0x4, 0x10, 0x4, 0x40, 0x4, 0x20, 0x2, 0xf0, 0x1, 0x20, 0x0, 0x40, 0x0, 	// 142	uni21BA
	0x40, 0x0, 0x20, 0x0, 0xf0, 0x1, 0x20, 0x2, 0x40, 0x4, 0x10, 0x4, 0x10, 0x4, 0x20, 0x2, 0xc0, 0x1, 	// 143	uni21BB
	0xe0, 0x3, 0x10, 0x4, 0x8, 0x9, 0x28, 0xa, 0x8, 0xa, 0x28, 0xa, 0x8, 0x9, 0x10, 0x4, 0xe0, 0x3, 	// 144	smileface
	0xe0, 0x3, 0x10, 0x4, 0x8, 0xa, 0x28, 0x9, 0x8, 0x9, 0x28, 0x9, 0x8, 0xa, 0x10, 0x4, 0xe0, 0x3, 	// 145	uni2639
	0x0, 0x0, 0x98, 0x3b, 0x24, 0x11, 0x54, 0xa, 0xc4, 0x4, 0x54, 0xa, 0x24, 0x11, 0x98, 0x3b, 0x0, 0x0, 	// 146	uni2620
    }
};
