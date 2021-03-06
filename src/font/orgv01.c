
// file: font/orgv01.bdf
// font: -FreeType-Org_v01-Medium-R-Normal--8-80-72-72-P-43-ISO10646-1

#include <font.h>

const struct Font font_orgv01 = {
    .type       = 1,
    .name	= "orgv01",
    .height	= 8,
    .width	= 6,
    .bytescol	= 1,
    .numcol     = 6,
    .startchar  = 33,
    .lastchar	= 127,
    .data       = {
	0x5c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 33	0021
	0x4, 0x0, 0x4, 0x0, 0x0, 0x0, 	// 34	0022
	0x28, 0x7c, 0x28, 0x7c, 0x28, 0x0, 	// 35	0023
	0x5c, 0x54, 0x7c, 0x54, 0x74, 0x0, 	// 36	0024
	0x44, 0x20, 0x10, 0x8, 0x44, 0x0, 	// 37	0025
	0x7c, 0x54, 0x54, 0x3c, 0x50, 0x0, 	// 38	0026
	0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 39	0027
	0x38, 0x44, 0x0, 0x0, 0x0, 0x0, 	// 40	0028
	0x44, 0x38, 0x0, 0x0, 0x0, 0x0, 	// 41	0029
	0x28, 0x10, 0x28, 0x0, 0x0, 0x0, 	// 42	002A
	0x10, 0x38, 0x10, 0x0, 0x0, 0x0, 	// 43	002B
	0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 44	002C
	0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 	// 45	002D
	0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 46	002E
	0x40, 0x20, 0x10, 0x8, 0x4, 0x0, 	// 47	002F
	0x7c, 0x44, 0x44, 0x44, 0x7c, 0x0, 	// 48	0030
	0x7c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 49	0031
	0x74, 0x54, 0x54, 0x54, 0x5c, 0x0, 	// 50	0032
	0x54, 0x54, 0x54, 0x54, 0x7c, 0x0, 	// 51	0033
	0x1c, 0x10, 0x10, 0x10, 0x7c, 0x0, 	// 52	0034
	0x5c, 0x54, 0x54, 0x54, 0x74, 0x0, 	// 53	0035
	0x7c, 0x54, 0x54, 0x54, 0x74, 0x0, 	// 54	0036
	0x4, 0x4, 0x4, 0x4, 0x7c, 0x0, 	// 55	0037
	0x7c, 0x54, 0x54, 0x54, 0x7c, 0x0, 	// 56	0038
	0x5c, 0x54, 0x54, 0x54, 0x7c, 0x0, 	// 57	0039
	0x48, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 58	003A
	0x68, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 59	003B
	0x10, 0x28, 0x44, 0x0, 0x0, 0x0, 	// 60	003C
	0x28, 0x28, 0x28, 0x28, 0x0, 0x0, 	// 61	003D
	0x44, 0x28, 0x10, 0x0, 0x0, 0x0, 	// 62	003E
	0x4, 0x4, 0x54, 0x14, 0x1c, 0x0, 	// 63	003F
	0x7c, 0x44, 0x5c, 0x54, 0x5c, 0x0, 	// 64	0040
	0x7c, 0x14, 0x14, 0x14, 0x7c, 0x0, 	// 65	0041
	0x7c, 0x54, 0x54, 0x54, 0x28, 0x0, 	// 66	0042
	0x7c, 0x44, 0x44, 0x44, 0x44, 0x0, 	// 67	0043
	0x7c, 0x44, 0x44, 0x44, 0x38, 0x0, 	// 68	0044
	0x7c, 0x54, 0x54, 0x54, 0x54, 0x0, 	// 69	0045
	0x7c, 0x14, 0x14, 0x14, 0x14, 0x0, 	// 70	0046
	0x7c, 0x44, 0x54, 0x54, 0x74, 0x0, 	// 71	0047
	0x7c, 0x10, 0x10, 0x10, 0x7c, 0x0, 	// 72	0048
	0x44, 0x44, 0x7c, 0x44, 0x44, 0x0, 	// 73	0049
	0x60, 0x44, 0x44, 0x7c, 0x44, 0x0, 	// 74	004A
	0x7c, 0x10, 0x28, 0x28, 0x44, 0x0, 	// 75	004B
	0x7c, 0x40, 0x40, 0x40, 0x40, 0x0, 	// 76	004C
	0x7c, 0x4, 0x7c, 0x4, 0x7c, 0x0, 	// 77	004D
	0x7c, 0x4, 0x4, 0x4, 0x7c, 0x0, 	// 78	004E
	0x7c, 0x44, 0x44, 0x44, 0x7c, 0x0, 	// 79	004F
	0x7c, 0x14, 0x14, 0x14, 0x1c, 0x0, 	// 80	0050
	0x7c, 0x44, 0x44, 0x64, 0x7c, 0x0, 	// 81	0051
	0x7c, 0x14, 0x14, 0x74, 0x1c, 0x0, 	// 82	0052
	0x5c, 0x54, 0x54, 0x54, 0x74, 0x0, 	// 83	0053
	0x4, 0x4, 0x7c, 0x4, 0x4, 0x0, 	// 84	0054
	0x7c, 0x40, 0x40, 0x40, 0x7c, 0x0, 	// 85	0055
	0x1c, 0x20, 0x40, 0x20, 0x1c, 0x0, 	// 86	0056
	0x7c, 0x40, 0x7c, 0x40, 0x7c, 0x0, 	// 87	0057
	0x44, 0x28, 0x10, 0x28, 0x44, 0x0, 	// 88	0058
	0xc, 0x10, 0x60, 0x10, 0xc, 0x0, 	// 89	0059
	0x74, 0x54, 0x54, 0x54, 0x5c, 0x0, 	// 90	005A
	0x7c, 0x44, 0x0, 0x0, 0x0, 0x0, 	// 91	005B
	0x4, 0x8, 0x10, 0x20, 0x40, 0x0, 	// 92	005C
	0x44, 0x7c, 0x0, 0x0, 0x0, 0x0, 	// 93	005D
	0x8, 0x4, 0x8, 0x0, 0x0, 0x0, 	// 94	005E
	0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 	// 95	005F
	0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 96	0060
	0x68, 0x68, 0x68, 0x78, 0x0, 0x0, 	// 97	0061
	0x7c, 0x48, 0x48, 0x78, 0x0, 0x0, 	// 98	0062
	0x78, 0x48, 0x48, 0x48, 0x0, 0x0, 	// 99	0063
	0x78, 0x48, 0x48, 0x7c, 0x0, 0x0, 	// 100	0064
	0x78, 0x58, 0x58, 0x58, 0x0, 0x0, 	// 101	0065
	0x10, 0x7c, 0x14, 0x0, 0x0, 0x0, 	// 102	0066
	0x78, 0x48, 0x48, 0xf8, 0x0, 0x0, 	// 103	0067
	0x7c, 0x8, 0x8, 0x78, 0x0, 0x0, 	// 104	0068
	0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 105	0069
	0x80, 0xf8, 0x0, 0x0, 0x0, 0x0, 	// 106	006A
	0x7c, 0x10, 0x18, 0x70, 0x0, 0x0, 	// 107	006B
	0x7c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 108	006C
	0x78, 0x8, 0x18, 0x8, 0x78, 0x0, 	// 109	006D
	0x78, 0x8, 0x8, 0x78, 0x0, 0x0, 	// 110	006E
	0x78, 0x48, 0x48, 0x78, 0x0, 0x0, 	// 111	006F
	0xf8, 0x48, 0x48, 0x78, 0x0, 0x0, 	// 112	0070
	0x78, 0x48, 0xc8, 0x78, 0x0, 0x0, 	// 113	0071
	0x78, 0x8, 0x8, 0x8, 0x0, 0x0, 	// 114	0072
	0x40, 0x58, 0x50, 0x70, 0x0, 0x0, 	// 115	0073
	0x8, 0x8, 0x7c, 0x8, 0x8, 0x0, 	// 116	0074
	0x78, 0x40, 0x40, 0x78, 0x0, 0x0, 	// 117	0075
	0x38, 0x40, 0x40, 0x78, 0x0, 0x0, 	// 118	0076
	0x78, 0x40, 0x60, 0x40, 0x78, 0x0, 	// 119	0077
	0x48, 0x30, 0x30, 0x48, 0x0, 0x0, 	// 120	0078
	0x78, 0x40, 0x40, 0xf8, 0x0, 0x0, 	// 121	0079
	0x70, 0x50, 0x58, 0x40, 0x0, 0x0, 	// 122	007A
	0x10, 0x38, 0x44, 0x0, 0x0, 0x0, 	// 123	007B
	0x7c, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 124	007C
	0x44, 0x38, 0x10, 0x0, 0x0, 0x0, 	// 125	007D
	0x30, 0x10, 0x10, 0x10, 0x18, 0x0, 	// 126	007E
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 	// 127	
    }
};
