
// file: font/ncenBI08.bdf
// font: -Adobe-New Century Schoolbook-Bold-I-Normal--8-80-75-75-P-56-ISO10646-1

#include <font.h>

const struct Font font_ncenBI08 = {
    .type       = 1,
    .name	= "ncenBI08",
    .height	= 8,
    .width	= 9,
    .bytescol	= 1,
    .numcol     = 9,
    .startchar  = 33,
    .lastchar	= 127,
    .data       = {
	0x0, 0x0, 0x30, 0x7, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 33	exclam
	0x0, 0x0, 0x0, 0x2, 0x1, 0x2, 0x1, 0x0, 0x0, 	// 34	quotedbl
	0x0, 0x0, 0xa, 0x3a, 0xf, 0x3a, 0xf, 0xa, 0x0, 	// 35	numbersign
	0x0, 0x0, 0x48, 0xde, 0x7b, 0x32, 0x0, 0x0, 0x0, 	// 36	dollar
	0x0, 0x0, 0x6, 0x5, 0x63, 0x19, 0x7, 0x31, 0x28, 	// 37	percent
	0x0, 0x0, 0x10, 0x38, 0x2f, 0x1d, 0x33, 0x2c, 0x14, 	// 38	ampersand
	0x0, 0x0, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	quotesingle
	0x0, 0x0, 0x38, 0xc6, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 40	parenleft
	0x0, 0x0, 0x80, 0x63, 0x1c, 0x0, 0x0, 0x0, 0x0, 	// 41	parenright
	0x0, 0x0, 0x0, 0x5, 0x2, 0x7, 0x5, 0x0, 0x0, 	// 42	asterisk
	0x0, 0x0, 0x8, 0x8, 0x3e, 0x8, 0x0, 0x0, 0x0, 	// 43	plus
	0x0, 0x40, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	comma
	0x0, 0x0, 0x8, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 	// 45	hyphen
	0x0, 0x0, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	period
	0x0, 0x0, 0x30, 0xc, 0x3, 0x0, 0x0, 0x0, 0x0, 	// 47	slash
	0x0, 0x0, 0x1c, 0x22, 0x31, 0x1f, 0xe, 0x0, 0x0, 	// 48	zero
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x3, 0x0, 0x0, 0x0, 	// 49	one
	0x0, 0x0, 0x32, 0x39, 0x37, 0x13, 0x0, 0x0, 0x0, 	// 50	two
	0x0, 0x0, 0x32, 0x25, 0x3f, 0x1b, 0x0, 0x0, 0x0, 	// 51	three
	0x0, 0x0, 0x8, 0x2c, 0x3a, 0x2f, 0xb, 0x0, 0x0, 	// 52	four
	0x0, 0x0, 0x30, 0x27, 0x3d, 0x19, 0x1, 0x0, 0x0, 	// 53	five
	0x0, 0x0, 0x1c, 0x3e, 0x35, 0x1d, 0x0, 0x0, 0x0, 	// 54	six
	0x0, 0x0, 0x3, 0x31, 0x3d, 0x7, 0x3, 0x0, 0x0, 	// 55	seven
	0x0, 0x0, 0x18, 0x26, 0x3d, 0x1b, 0x0, 0x0, 0x0, 	// 56	eight
	0x0, 0x0, 0x26, 0x29, 0x1f, 0xe, 0x0, 0x0, 0x0, 	// 57	nine
	0x0, 0x0, 0x0, 0x30, 0x6, 0x0, 0x0, 0x0, 0x0, 	// 58	colon
	0x0, 0x0, 0x40, 0x30, 0x6, 0x0, 0x0, 0x0, 0x0, 	// 59	semicolon
	0x0, 0x0, 0x8, 0x8, 0x14, 0x22, 0x2, 0x0, 0x0, 	// 60	less
	0x0, 0x0, 0x14, 0x14, 0x14, 0x14, 0x0, 0x0, 0x0, 	// 61	equal
	0x0, 0x0, 0x20, 0x22, 0x14, 0x8, 0x8, 0x0, 0x0, 	// 62	greater
	0x0, 0x0, 0x0, 0x35, 0x7, 0x2, 0x0, 0x0, 0x0, 	// 63	question
	0x0, 0x0, 0x18, 0x26, 0x49, 0x5d, 0x55, 0x5d, 0x11, 	// 64	at
	0x0, 0x20, 0x38, 0x2c, 0xb, 0x2f, 0x3c, 0x20, 0x0, 	// 65	A
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x25, 0x3f, 0x1a, 0x0, 	// 66	B
	0x0, 0x0, 0x1c, 0x3e, 0x23, 0x21, 0x11, 0x3, 0x0, 	// 67	C
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x21, 0x39, 0x1e, 0x0, 	// 68	D
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x25, 0x2d, 0x1, 0x0, 	// 69	E
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x5, 0xd, 0x1, 0x0, 	// 70	F
	0x0, 0x0, 0x1c, 0x3e, 0x23, 0x19, 0x39, 0xb, 0x0, 	// 71	G
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x5, 0x34, 0x3f, 0x7, 	// 72	H
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x27, 0x1, 0x0, 0x0, 	// 73	I
	0x0, 0x0, 0x18, 0x28, 0x31, 0x1f, 0x7, 0x1, 0x0, 	// 74	J
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x7, 0x1c, 0x33, 0x21, 	// 75	K
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x27, 0x31, 0x0, 0x0, 	// 76	L
	0x0, 0x20, 0x39, 0xf, 0x3f, 0x18, 0x4, 0x3e, 0x3f, 	// 77	M
	0x0, 0x20, 0x39, 0x2f, 0xf, 0x38, 0xf, 0x1, 0x0, 	// 78	N
	0x0, 0x0, 0x1c, 0x3e, 0x23, 0x31, 0x1f, 0xe, 0x0, 	// 79	O
	0x0, 0x0, 0x20, 0x39, 0x3f, 0x9, 0x9, 0x6, 0x0, 	// 80	P
	0x0, 0x0, 0x1c, 0xbe, 0x63, 0x61, 0x5f, 0x2e, 0x0, 	// 81	Q
	0x0, 0x0, 0x20, 0x39, 0x3f, 0xd, 0x3d, 0x37, 0x2, 	// 82	R
	0x0, 0x0, 0x30, 0x26, 0x3f, 0x19, 0x3, 0x0, 0x0, 	// 83	S
	0x0, 0x0, 0x23, 0x39, 0x3f, 0x21, 0x3, 0x0, 0x0, 	// 84	T
	0x0, 0x0, 0x19, 0x3f, 0x27, 0x20, 0x19, 0x7, 0x1, 	// 85	U
	0x0, 0x0, 0x1, 0x3f, 0x31, 0xc, 0x7, 0x1, 0x0, 	// 86	V
	0x0, 0x0, 0x1, 0xf, 0x3d, 0x18, 0xf, 0x39, 0xc, 	// 87	W
	0x0, 0x20, 0x31, 0x2b, 0xf, 0x3c, 0x33, 0x21, 0x0, 	// 88	X
	0x0, 0x0, 0x21, 0x33, 0x3f, 0x4, 0x3, 0x1, 0x0, 	// 89	Y
	0x0, 0x0, 0x30, 0x3b, 0x2d, 0x27, 0x3b, 0x1, 0x0, 	// 90	Z
	0x0, 0x0, 0xf0, 0x8f, 0x1, 0x0, 0x0, 0x0, 0x0, 	// 91	bracketleft
	0x0, 0x0, 0x3, 0xc, 0x30, 0x0, 0x0, 0x0, 0x0, 	// 92	backslash
	0x0, 0x0, 0x80, 0xf1, 0xf, 0x0, 0x0, 0x0, 0x0, 	// 93	bracketright
	0x0, 0x0, 0x8, 0x6, 0x7, 0x8, 0x0, 0x0, 0x0, 	// 94	asciicircum
	0x0, 0x0, 0x40, 0x40, 0x40, 0x40, 0x0, 0x0, 0x0, 	// 95	underscore
	0x0, 0x0, 0x1, 0x3, 0x2, 0x0, 0x0, 0x0, 0x0, 	// 96	grave
	0x0, 0x0, 0x10, 0x34, 0x2c, 0x3c, 0x28, 0x0, 0x0, 	// 97	a
	0x0, 0x0, 0x19, 0x3f, 0x27, 0x1c, 0x8, 0x0, 0x0, 	// 98	b
	0x0, 0x0, 0x18, 0x3c, 0x24, 0x2c, 0x0, 0x0, 0x0, 	// 99	c
	0x0, 0x0, 0x18, 0x3c, 0x24, 0x3f, 0x27, 0x1, 0x0, 	// 100	d
	0x0, 0x0, 0x10, 0x38, 0x2c, 0x2c, 0x0, 0x0, 0x0, 	// 101	e
	0x0, 0x0, 0x84, 0x7c, 0x3f, 0x5, 0x1, 0x0, 0x0, 	// 102	f
	0x0, 0x0, 0xe0, 0xbc, 0xd4, 0xce, 0x2, 0x0, 0x0, 	// 103	g
	0x0, 0x0, 0x30, 0x3f, 0xf, 0x3c, 0x28, 0x0, 0x0, 	// 104	h
	0x0, 0x0, 0x34, 0x3d, 0xd, 0x0, 0x0, 0x0, 0x0, 	// 105	i
	0xc0, 0x84, 0x7d, 0x1d, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 106	j
	0x0, 0x0, 0x30, 0x3f, 0x17, 0x34, 0x28, 0x10, 0x0, 	// 107	k
	0x0, 0x0, 0x38, 0x3f, 0x27, 0x0, 0x0, 0x0, 0x0, 	// 108	l
	0x0, 0x0, 0x34, 0x3c, 0xc, 0x3c, 0x8, 0x3c, 0x28, 	// 109	m
	0x0, 0x0, 0x34, 0x3c, 0xc, 0x3c, 0x28, 0x0, 0x0, 	// 110	n
	0x0, 0x0, 0x18, 0x2c, 0x24, 0x18, 0x0, 0x0, 0x0, 	// 111	o
	0x0, 0xc0, 0xf4, 0xbc, 0x24, 0x1c, 0x8, 0x0, 0x0, 	// 112	p
	0x0, 0x0, 0x18, 0xbc, 0xe4, 0xbc, 0xc, 0x0, 0x0, 	// 113	q
	0x0, 0x0, 0x34, 0x3c, 0x8, 0xc, 0x0, 0x0, 0x0, 	// 114	r
	0x0, 0x28, 0x2c, 0x3c, 0x14, 0x0, 0x0, 0x0, 0x0, 	// 115	s
	0x0, 0x0, 0x14, 0x3e, 0x27, 0x0, 0x0, 0x0, 0x0, 	// 116	t
	0x0, 0x0, 0x18, 0x3c, 0x20, 0x3c, 0x2c, 0x0, 0x0, 	// 117	u
	0x0, 0x0, 0x1c, 0x3c, 0x30, 0xc, 0x0, 0x0, 0x0, 	// 118	v
	0x0, 0x0, 0x1c, 0x3c, 0x30, 0xc, 0x3c, 0x30, 0xc, 	// 119	w
	0x0, 0x20, 0x2c, 0x1c, 0x38, 0x2c, 0x4, 0x0, 0x0, 	// 120	x
	0x0, 0x0, 0xc4, 0x8c, 0x7c, 0x10, 0xc, 0x0, 0x0, 	// 121	y
	0x0, 0x20, 0x34, 0x3c, 0x2c, 0x4, 0x0, 0x0, 0x0, 	// 122	z
	0x0, 0x0, 0x8, 0x34, 0x43, 0x0, 0x0, 0x0, 0x0, 	// 123	braceleft
	0x0, 0x0, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0x0, 	// 124	bar
	0x0, 0x0, 0x0, 0x61, 0x16, 0x8, 0x0, 0x0, 0x0, 	// 125	braceright
	0x0, 0x0, 0x8, 0x4, 0xc, 0x8, 0x4, 0x0, 0x0, 	// 126	asciitilde
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 127	
    }
};