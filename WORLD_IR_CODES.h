/*
TV-B-Gone for Arduino version 0.001
Ported to Arduino by Ken Shirriff, Dec 3, 2009
http://arcfn.com

The original code is:
TV-B-Gone Firmware version 1.2
 for use with ATtiny85v and v1.2 hardware
 (c) Mitch Altman + Limor Fried 2009

*/

//Codes captured from Generation 3 TV-B-Gone by Limor Fried & Mitch Altman
//table of POWER codes

#include "main.h" //includes struct definition, as well as 

const uint16_t code_na000Times[] PROGMEM = {
  60, 60,
  60, 2700,
  120, 60,
  240, 60,
};
const uint8_t code_na000Codes[] PROGMEM = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x10,
};
const struct IrCode code_na000Code PROGMEM = {
  freq_to_timerval(38400),
  26,             // # of pairs
  2,              // # of bits per index
  code_na000Times,
  code_na000Codes
};

const uint16_t code_na001Times[] PROGMEM = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
};
const uint8_t code_na001Codes[] PROGMEM = {
  0xD5,
  0x41,
  0x11,
  0x00,
  0x14,
  0x44,
  0x6D,
  0x54,
  0x11,
  0x10,
  0x01,
  0x44,
  0x45,
};
const struct IrCode code_na001Code PROGMEM = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na001Codes
};
const uint16_t code_na002Times[] PROGMEM = {
  42, 46,
  42, 133,
  42, 7519,
  347, 176,
  347, 177,
};
const uint8_t code_na002Codes[] PROGMEM = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x48,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x49,
  0x20,
  0x80,
};
const struct IrCode code_na002Code PROGMEM = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na002Times,
  code_na002Codes
};
const uint16_t code_na003Times[] PROGMEM = {
  26, 185,
  27, 80,
  27, 185,
  27, 4549,
};
const uint8_t code_na003Codes[] PROGMEM = {
  0x15,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x9B,
  0x95,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x99,
};
const struct IrCode code_na003Code PROGMEM = {
  freq_to_timerval(38610),
  64,		// # of pairs
  2,		// # of bits per index
  code_na003Times,
  code_na003Codes
};
const uint16_t code_na004Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na004Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x01,
  0x04,
  0x92,
  0x48,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na004Code PROGMEM = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na004Codes
};
const uint16_t code_na005Times[] PROGMEM = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
};
const uint8_t code_na005Codes[] PROGMEM = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na005Code PROGMEM = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na005Codes
};
const uint16_t code_na006Times[] PROGMEM = {
  50, 62,
  50, 172,
  50, 4541,
  448, 466,
  450, 465,
};
const uint8_t code_na006Codes[] PROGMEM = {
  0x64,
  0x90,
  0x00,
  0x04,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x12,
  0x40,
  0x00,
  0x12,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0x90,
};
const struct IrCode code_na006Code PROGMEM = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na006Times,
  code_na006Codes
};
const uint16_t code_na007Times[] PROGMEM = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12107,
};
const uint8_t code_na007Codes[] PROGMEM = {
  0x09,
  0x94,
  0x53,
  0x29,
  0x94,
  0xD9,
  0x85,
  0x32,
  0x8A,
  0x65,
  0x32,
  0x9B,
  0x20,
};
const struct IrCode code_na007Code PROGMEM = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na007Times,
  code_na007Codes
};
const uint16_t code_na008Times[] PROGMEM = {
  56, 58,
  56, 170,
  56, 4011,
  898, 450,
  900, 449,
};
const uint8_t code_na008Codes[] PROGMEM = {
  0x64,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x82,
  0x01,
  0x04,
  0x10,
  0x48,
  0x2A,
  0x10,
  0x01,
  0x24,
  0x02,
  0x48,
  0x00,
  0x82,
  0x08,
  0x04,
  0x10,
  0x41,
  0x20,
  0x90,
};
const struct IrCode code_na008Code PROGMEM = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na008Times,
  code_na008Codes
};
const uint16_t code_na009Times[] PROGMEM = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na009Codes[] PROGMEM = {
  0x84,
  0x90,
  0x00,
  0x20,
  0x80,
  0x08,
  0x00,
  0x00,
  0x09,
  0x24,
  0x92,
  0x40,
  0x0A,
  0xBA,
  0x40,
};
const struct IrCode code_na009Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na009Codes
};
const uint16_t code_na010Times[] PROGMEM = {
  51, 55,
  51, 158,
  51, 2286,
  841, 419,
};
const uint8_t code_na010Codes[] PROGMEM = {
  0xD4,
  0x00,
  0x15,
  0x10,
  0x25,
  0x00,
  0x05,
  0x44,
  0x09,
  0x40,
  0x01,
  0x51,
  0x01,
};
const struct IrCode code_na010Code PROGMEM = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na010Times,
  code_na010Codes
};
const uint16_t code_na011Times[] PROGMEM = {
  55, 55,
  55, 172,
  55, 4039,
  55, 9348,
  56, 0,
  884, 442,
  885, 225,
};
const uint8_t code_na011Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na011Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na011Times,
  code_na011Codes
};
const uint16_t code_na012Times[] PROGMEM = {
  81, 87,
  81, 254,
  81, 3280,
  331, 336,
  331, 337,
};
const uint8_t code_na012Codes[] PROGMEM = {
  0x64,
  0x12,
  0x08,
  0x24,
  0x00,
  0x08,
  0x20,
  0x10,
  0x09,
  0x2A,
  0x10,
  0x48,
  0x20,
  0x90,
  0x00,
  0x20,
  0x80,
  0x40,
  0x24,
  0x90,
};
const struct IrCode code_na012Code PROGMEM = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na012Times,
  code_na012Codes
};
const uint16_t code_na013Times[] PROGMEM = {
  53, 55,
  53, 167,
  53, 2304,
  53, 9369,
  893, 448,
  895, 447,
};
const uint8_t code_na013Codes[] PROGMEM = {
  0x80,
  0x12,
  0x40,
  0x04,
  0x00,
  0x09,
  0x00,
  0x12,
  0x41,
  0x24,
  0x82,
  0x01,
  0x00,
  0x10,
  0x48,
  0x24,
  0xAA,
  0xE8,
};
const struct IrCode code_na013Code PROGMEM = {
  freq_to_timerval(38462),
  48,		// # of pairs
  3,		// # of bits per index
  code_na013Times,
  code_na013Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na014Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na014Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x09,
  0x04,
  0x92,
  0x40,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na014Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na014Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na015Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na015Codes[] PROGMEM = {
  0xA0,
  0x80,
  0x01,
  0x04,
  0x12,
  0x48,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na015Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na015Codes
};
const uint16_t code_na016Times[] PROGMEM = {
  28, 90,
  28, 211,
  28, 2507,
};
const uint8_t code_na016Codes[] PROGMEM = {
  0x54,
  0x04,
  0x10,
  0x00,
  0x95,
  0x01,
  0x04,
  0x00,
  0x10,
};
const struct IrCode code_na016Code PROGMEM = {
  freq_to_timerval(34483),
  34,		// # of pairs
  2,		// # of bits per index
  code_na016Times,
  code_na016Codes
};
const uint16_t code_na017Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na017Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na017Code PROGMEM = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na017Codes
};
const uint16_t code_na018Times[] PROGMEM = {
  51, 55,
  51, 161,
  51, 2566,
  849, 429,
  849, 430,
};
const uint8_t code_na018Codes[] PROGMEM = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x00,
  0x49,
  0x00,
  0x12,
  0x00,
  0x24,
  0xA8,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x10,
  0x01,
  0x24,
  0x00,
  0x48,
  0x00,
  0x92,
  0xA0,
  0x20,
  0x82,
  0x09,
  0x04,
  0x10,
  0x40,
  0x04,
  0x90,
  0x01,
  0x20,
  0x02,
  0x48,
};
const struct IrCode code_na018Code PROGMEM = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_na018Times,
  code_na018Codes
};
const uint16_t code_na019Times[] PROGMEM = {
  40, 42,
  40, 124,
  40, 4601,
  325, 163,
  326, 163,
};
const uint8_t code_na019Codes[] PROGMEM = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x10,
  0x00,
  0x20,
  0x80,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x80,
  0x40,
  0x00,
  0x82,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na019Code PROGMEM = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na019Times,
  code_na019Codes
};
const uint16_t code_na020Times[] PROGMEM = {
  60, 55,
  60, 163,
  60, 4099,
  60, 9698,
  61, 0,
  898, 461,
  900, 230,
};
const uint8_t code_na020Codes[] PROGMEM = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na020Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na020Times,
  code_na020Codes
};
const uint16_t code_na021Times[] PROGMEM = {
  48, 52,
  48, 160,
  48, 400,
  48, 2335,
  799, 400,
};
const uint8_t code_na021Codes[] PROGMEM = {
  0x80,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xC0,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x00,
};
const struct IrCode code_na021Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_na021Codes
};
const uint16_t code_na022Times[] PROGMEM = {
  53, 60,
  53, 175,
  53, 4463,
  53, 9453,
  892, 450,
  895, 225,
};
const uint8_t code_na022Codes[] PROGMEM = {
  0x80,
  0x02,
  0x40,
  0x00,
  0x02,
  0x40,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x48,
  0x0A,
  0xBA,
  0x00,
};
const struct IrCode code_na022Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na022Times,
  code_na022Codes
};
const uint16_t code_na023Times[] PROGMEM = {
  48, 52,
  48, 409,
  48, 504,
  48, 10461,
};
const uint8_t code_na023Codes[] PROGMEM = {
  0xA1,
  0x18,
  0x61,
  0xA1,
  0x18,
  0x7A,
  0x11,
  0x86,
  0x1A,
  0x11,
  0x86,
};
const struct IrCode code_na023Code PROGMEM = {
  freq_to_timerval(40000),
  44,		// # of pairs
  2,		// # of bits per index
  code_na023Times,
  code_na023Codes
};
const uint16_t code_na024Times[] PROGMEM = {
  58, 60,
  58, 2569,
  118, 60,
  237, 60,
  238, 60,
};
const uint8_t code_na024Codes[] PROGMEM = {
  0x69,
  0x24,
  0x10,
  0x40,
  0x03,
  0x12,
  0x48,
  0x20,
  0x80,
  0x00,
};
const struct IrCode code_na024Code PROGMEM = {
  freq_to_timerval(38462),
  26,		// # of pairs
  3,		// # of bits per index
  code_na024Times,
  code_na024Codes
};
const uint16_t code_na025Times[] PROGMEM = {
  84, 90,
  84, 264,
  84, 3470,
  346, 350,
  347, 350,
};
const uint8_t code_na025Codes[] PROGMEM = {
  0x64,
  0x92,
  0x49,
  0x00,
  0x00,
  0x00,
  0x00,
  0x02,
  0x49,
  0x2A,
  0x12,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x09,
  0x24,
  0x90,
};
const struct IrCode code_na025Code PROGMEM = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na025Times,
  code_na025Codes
};
const uint16_t code_na026Times[] PROGMEM = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12582,
};
const uint8_t code_na026Codes[] PROGMEM = {
  0x09,
  0x94,
  0x53,
  0x65,
  0x32,
  0x99,
  0x85,
  0x32,
  0x8A,
  0x6C,
  0xA6,
  0x53,
  0x20,
};
const struct IrCode code_na026Code PROGMEM = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na026Times,
  code_na026Codes
};

/* Duplicate timing table, same as na001 !
 const uint16_t code_na027Times[] PROGMEM = {
 	50, 100,
 	50, 200,
 	50, 800,
 	400, 400,
 };
 */
const uint8_t code_na027Codes[] PROGMEM = {
  0xC5,
  0x41,
  0x11,
  0x10,
  0x14,
  0x44,
  0x6C,
  0x54,
  0x11,
  0x11,
  0x01,
  0x44,
  0x44,
};
const struct IrCode code_na027Code PROGMEM = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na027Codes
};
const uint16_t code_na028Times[] PROGMEM = {
  118, 121,
  118, 271,
  118, 4750,
  258, 271,
};
const uint8_t code_na028Codes[] PROGMEM = {
  0xC4,
  0x45,
  0x14,
  0x04,
  0x6C,
  0x44,
  0x51,
  0x40,
  0x44,
};
const struct IrCode code_na028Code PROGMEM = {
  freq_to_timerval(38610),
  36,		// # of pairs
  2,		// # of bits per index
  code_na028Times,
  code_na028Codes
};
const uint16_t code_na029Times[] PROGMEM = {
  88, 90,
  88, 91,
  88, 181,
  177, 91,
  177, 8976,
};
const uint8_t code_na029Codes[] PROGMEM = {
  0x0C,
  0x92,
  0x53,
  0x46,
  0x16,
  0x49,
  0x29,
  0xA2,
  0xC0,
};
const struct IrCode code_na029Code PROGMEM = {
  freq_to_timerval(35842),
  22,		// # of pairs
  3,		// # of bits per index
  code_na029Times,
  code_na029Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na030Times[] PROGMEM = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na030Codes[] PROGMEM = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na030Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na030Codes
};
const uint16_t code_na031Times[] PROGMEM = {
  88, 89,
  88, 90,
  88, 179,
  88, 8977,
  177, 90,
};
const uint8_t code_na031Codes[] PROGMEM = {
  0x06,
  0x12,
  0x49,
  0x46,
  0x32,
  0x61,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na031Code PROGMEM = {
  freq_to_timerval(35842),
  24,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na031Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na032Times[] PROGMEM = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na032Codes[] PROGMEM = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na032Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na032Codes
};
const uint16_t code_na033Times[] PROGMEM = {
  40, 43,
  40, 122,
  40, 5297,
  334, 156,
  336, 155,
};
const uint8_t code_na033Codes[] PROGMEM = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x82,
  0x00,
  0x20,
  0x00,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x82,
  0x08,
  0x00,
  0x80,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na033Code PROGMEM = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na033Times,
  code_na033Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na034Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na034Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na034Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na034Codes
};
const uint16_t code_na035Times[] PROGMEM = {
  96, 93,
  97, 93,
  97, 287,
  97, 3431,
};
const uint8_t code_na035Codes[] PROGMEM = {
  0x16,
  0x66,
  0x5D,
  0x59,
  0x99,
  0x50,
};
const struct IrCode code_na035Code PROGMEM = {
  freq_to_timerval(41667),
  22,		// # of pairs
  2,		// # of bits per index
  code_na035Times,
  code_na035Codes
};
const uint16_t code_na036Times[] PROGMEM = {
  82, 581,
  84, 250,
  84, 580,
  85, 0,
};
const uint8_t code_na036Codes[] PROGMEM = {
  0x15,
  0x9A,
  0x9C,
};
const struct IrCode code_na036Code PROGMEM = {
  freq_to_timerval(37037),
  11,		// # of pairs
  2,		// # of bits per index
  code_na036Times,
  code_na036Codes
};
const uint16_t code_na037Times[] PROGMEM = {
  39, 263,
  164, 163,
  514, 164,
};
const uint8_t code_na037Codes[] PROGMEM = {
  0x80,
  0x45,
  0x00,
};
const struct IrCode code_na037Code PROGMEM = {
  freq_to_timerval(41667),
  11,		// # of pairs
  2,		// # of bits per index
  code_na037Times,
  code_na037Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na038Times[] PROGMEM = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na038Codes[] PROGMEM = {
  0xA4,
  0x10,
  0x40,
  0x00,
  0x82,
  0x09,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na038Code PROGMEM = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na038Codes
};
const uint16_t code_na039Times[] PROGMEM = {
  113, 101,
  688, 2707,
};
const uint8_t code_na039Codes[] PROGMEM = {
  0x11,
};
const struct IrCode code_na039Code PROGMEM = {
  freq_to_timerval(40000),
  4,		// # of pairs
  2,		// # of bits per index
  code_na039Times,
  code_na039Codes
};
const uint16_t code_na040Times[] PROGMEM = {
  113, 101,
  113, 201,
  113, 2707,
};
const uint8_t code_na040Codes[] PROGMEM = {
  0x06,
  0x04,
};
const struct IrCode code_na040Code PROGMEM = {
  freq_to_timerval(40000),
  8,		// # of pairs
  2,		// # of bits per index
  code_na040Times,
  code_na040Codes
};

const uint16_t code_na041Times[] PROGMEM = {
  58, 62,
  58, 2746,
  117, 62,
  242, 62,
};
const uint8_t code_na041Codes[] PROGMEM = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x00,
};
const struct IrCode code_na041Code PROGMEM = {
  freq_to_timerval(76923),
  26,    // # of pairs
  2,    // # of bits per index
  code_na041Times,
  code_na041Codes
};
const uint16_t code_na042Times[] PROGMEM = {
  54, 65,
  54, 170,
  54, 4099,
  54, 8668,
  899, 226,
  899, 421,
};
const uint8_t code_na042Codes[] PROGMEM = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na042Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na042Times,
  code_na042Codes
};
const uint16_t code_na043Times[] PROGMEM = {
  43, 120,
  43, 121,
  43, 3491,
  131, 45,
};
const uint8_t code_na043Codes[] PROGMEM = {
  0x15,
  0x75,
  0x56,
  0x55,
  0x75,
  0x54,
};
const struct IrCode code_na043Code PROGMEM = {
  freq_to_timerval(40000),
  24,   // # of pairs
  2,    // # of bits per index
  code_na043Times,
  code_na043Codes
};
const uint16_t code_na044Times[] PROGMEM = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na044Codes[] PROGMEM = {
  0x84,
  0x90,
  0x00,
  0x00,
  0x02,
  0x49,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na044Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na044Times,
  code_na044Codes
};
const uint16_t code_na045Times[] PROGMEM = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na045Codes[] PROGMEM = {
  0x80,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na045Code PROGMEM = {
  freq_to_timerval(38462),
  40,   // # of pairs
  3,    // # of bits per index
  code_na045Times,
  code_na045Codes
};
const uint16_t code_na046Times[] PROGMEM = {
  51, 277,
  52, 53,
  52, 105,
  52, 277,
  52, 2527,
  52, 12809,
  103, 54,
};
const uint8_t code_na046Codes[] PROGMEM = {
  0x0B,
  0x12,
  0x63,
  0x44,
  0x92,
  0x6B,
  0x44,
  0x92,
  0x50,
};
const struct IrCode code_na046Code PROGMEM = {
  freq_to_timerval(29412),
  23,   // # of pairs
  3,    // # of bits per index
  code_na046Times,
  code_na046Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na047Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na047Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x24,
  0x92,
  0x09,
  0x20,
  0x00,
  0x40,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na047Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na047Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na048Times[] PROGMEM = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
 };
 */
const uint8_t code_na048Codes[] PROGMEM = {
  0x80,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na048Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na044Times,
  code_na048Codes
};
const uint16_t code_na049Times[] PROGMEM = {
  274, 854,
  274, 1986,
};
const uint8_t code_na049Codes[] PROGMEM = {
  0x14,
  0x11,
  0x40,
};
const struct IrCode code_na049Code PROGMEM = {
  freq_to_timerval(45455),
  11,   // # of pairs
  2,    // # of bits per index
  code_na049Times,
  code_na049Codes
};
const uint16_t code_na050Times[] PROGMEM = {
  80, 88,
  80, 254,
  80, 3750,
  359, 331,
};
const uint8_t code_na050Codes[] PROGMEM = {
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x52,
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x50,
};
const struct IrCode code_na050Code PROGMEM = {
  freq_to_timerval(55556),
  48,   // # of pairs
  2,    // # of bits per index
  code_na050Times,
  code_na050Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na051Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na051Codes[] PROGMEM = {
  0xA0,
  0x10,
  0x01,
  0x24,
  0x82,
  0x48,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na051Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na051Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na052Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na052Codes[] PROGMEM = {
  0xA4,
  0x90,
  0x48,
  0x00,
  0x02,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na052Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na052Codes
};
const uint16_t code_na053Times[] PROGMEM = {
  51, 232,
  51, 512,
  51, 792,
  51, 2883,
};
const uint8_t code_na053Codes[] PROGMEM = {
  0x22,
  0x21,
  0x40,
  0x1C,
  0x88,
  0x85,
  0x00,
  0x40,
};
const struct IrCode code_na053Code PROGMEM = {
  freq_to_timerval(55556),
  30,   // # of pairs
  2,    // # of bits per index
  code_na053Times,
  code_na053Codes
};

/* Duplicate timing table, same as na053 !
 const uint16_t code_na054Times[] PROGMEM = {
  51, 232,
  51, 512,
  51, 792,
  51, 2883,
 };
 */
const uint8_t code_na054Codes[] PROGMEM = {
  0x22,
  0x20,
  0x15,
  0x72,
  0x22,
  0x01,
  0x54,
};
const struct IrCode code_na054Code PROGMEM = {
  freq_to_timerval(55556),
  28,   // # of pairs
  2,    // # of bits per index
  code_na053Times,
  code_na054Codes
};
const uint16_t code_na055Times[] PROGMEM = {
  3, 10,
  3, 20,
  3, 30,
  3, 12778,
};
const uint8_t code_na055Codes[] PROGMEM = {
  0x81,
  0x51,
  0x14,
  0xB8,
  0x15,
  0x11,
  0x44,
};
const struct IrCode code_na055Code PROGMEM = {
  0,              // Non-pulsed code
  27,   // # of pairs
  2,    // # of bits per index
  code_na055Times,
  code_na055Codes
};
const uint16_t code_na056Times[] PROGMEM = {
  55, 193,
  57, 192,
  57, 384,
  58, 0,
};
const uint8_t code_na056Codes[] PROGMEM = {
  0x2A,
  0x57,
};
const struct IrCode code_na056Code PROGMEM = {
  freq_to_timerval(37175),
  8,    // # of pairs
  2,    // # of bits per index
  code_na056Times,
  code_na056Codes
};
const uint16_t code_na057Times[] PROGMEM = {
  45, 148,
  46, 148,
  46, 351,
  46, 2781,
};
const uint8_t code_na057Codes[] PROGMEM = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_na057Code PROGMEM = {
  freq_to_timerval(40000),
  14,   // # of pairs
  2,    // # of bits per index
  code_na057Times,
  code_na057Codes
};
const uint16_t code_na058Times[] PROGMEM = {
  22, 101,
  22, 219,
  23, 101,
  23, 219,
  31, 218,
};
const uint8_t code_na058Codes[] PROGMEM = {
  0x8D,
  0xA4,
  0x08,
  0x04,
  0x04,
  0x92,
  0x4C,
};
const struct IrCode code_na058Code PROGMEM = {
  freq_to_timerval(33333),
  18,   // # of pairs
  3,    // # of bits per index
  code_na058Times,
  code_na058Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na059Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na059Codes[] PROGMEM = {
  0xA4,
  0x12,
  0x09,
  0x00,
  0x80,
  0x40,
  0x20,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na059Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na059Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na060Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na060Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x08,
  0x04,
  0x92,
  0x41,
  0x24,
  0x00,
  0x40,
  0x00,
  0x92,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na060Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na060Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na061Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na061Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x08,
  0x24,
  0x92,
  0x41,
  0x04,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na061Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na061Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na062Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na062Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x08,
  0x04,
  0x90,
  0x41,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na062Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na062Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na063Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na063Codes[] PROGMEM = {
  0xA4,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na063Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na063Codes
};

/* Duplicate timing table, same as na001 !
 const uint16_t code_na064Times[] PROGMEM = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
 };
 */
const uint8_t code_na064Codes[] PROGMEM = {
  0xC0,
  0x01,
  0x51,
  0x55,
  0x54,
  0x04,
  0x2C,
  0x00,
  0x15,
  0x15,
  0x55,
  0x40,
  0x40,
};
const struct IrCode code_na064Code PROGMEM = {
  freq_to_timerval(57143),
  52,   // # of pairs
  2,    // # of bits per index
  code_na001Times,
  code_na064Codes
};
const uint16_t code_na065Times[] PROGMEM = {
  48, 98,
  48, 197,
  98, 846,
  395, 392,
  1953, 392,
};
const uint8_t code_na065Codes[] PROGMEM = {
  0x84,
  0x92,
  0x01,
  0x24,
  0x12,
  0x00,
  0x04,
  0x80,
  0x08,
  0x09,
  0x92,
  0x48,
  0x04,
  0x90,
  0x48,
  0x00,
  0x12,
  0x00,
  0x20,
  0x26,
  0x49,
  0x20,
  0x12,
  0x41,
  0x20,
  0x00,
  0x48,
  0x00,
  0x80,
  0x80,
};
const struct IrCode code_na065Code PROGMEM = {
  freq_to_timerval(59172),
  78,   // # of pairs
  3,    // # of bits per index
  code_na065Times,
  code_na065Codes
};
const uint16_t code_na066Times[] PROGMEM = {
  38, 276,
  165, 154,
  415, 155,
  742, 154,
};
const uint8_t code_na066Codes[] PROGMEM = {
  0xC0,
  0x45,
  0x02,
  0x01,
  0x14,
  0x08,
  0x04,
  0x50,
  0x00,
};
const struct IrCode code_na066Code PROGMEM = {
  freq_to_timerval(38462),
  33,   // # of pairs
  2,    // # of bits per index
  code_na066Times,
  code_na066Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na067Times[] PROGMEM = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
 };
 */
const uint8_t code_na067Codes[] PROGMEM = {
  0x80,
  0x02,
  0x49,
  0x24,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na067Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na044Times,
  code_na067Codes
};
const uint16_t code_na068Times[] PROGMEM = {
  43, 121,
  43, 9437,
  130, 45,
  131, 45,
};
const uint8_t code_na068Codes[] PROGMEM = {
  0x8C,
  0x30,
  0x0D,
  0xCC,
  0x30,
  0x0C,
};
const struct IrCode code_na068Code PROGMEM = {
  freq_to_timerval(40000),
  24,   // # of pairs
  2,    // # of bits per index
  code_na068Times,
  code_na068Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na069Times[] PROGMEM = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
 };
 */
const uint8_t code_na069Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na069Code PROGMEM = {
  freq_to_timerval(40000),
  38,   // # of pairs
  3,    // # of bits per index
  code_na017Times,
  code_na069Codes
};
const uint16_t code_na070Times[] PROGMEM = {
  27, 76,
  27, 182,
  27, 183,
  27, 3199,
};
const uint8_t code_na070Codes[] PROGMEM = {
  0x40,
  0x02,
  0x08,
  0xA2,
  0xE0,
  0x00,
  0x82,
  0x28,
  0x40,
};
const struct IrCode code_na070Code PROGMEM = {
  freq_to_timerval(38462),
  33,   // # of pairs
  2,    // # of bits per index
  code_na070Times,
  code_na070Codes
};







/////////////////////////////////////////////////////////////


const uint16_t code_eu000Times[] PROGMEM = {
  43, 47,
  43, 91,
  43, 8324,
  88, 47,
  133, 133,
  264, 90,
  264, 91,
};
const uint8_t code_eu000Codes[] PROGMEM = {
  0xA4,
  0x08,
  0x00,
  0x00,
  0x00,
  0x00,
  0x64,
  0x2C,
  0x40,
  0x80,
  0x00,
  0x00,
  0x00,
  0x06,
  0x41,
};
const struct IrCode code_eu000Code PROGMEM = {
  freq_to_timerval(35714),
  40,		// # of pairs
  3,		// # of bits per index
  code_eu000Times,
  code_eu000Codes
};
const uint16_t code_eu001Times[] PROGMEM = {
  47, 265,
  51, 54,
  51, 108,
  51, 263,
  51, 2053,
  51, 11647,
  100, 109,
};
const uint8_t code_eu001Codes[] PROGMEM = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x35,
  0x89,
  0x24,
  0x9A,
  0xD6,
  0x24,
  0x92,
  0x48,
};
const struct IrCode code_eu001Code PROGMEM = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu001Times,
  code_eu001Codes
};
const uint16_t code_eu002Times[] PROGMEM = {
  43, 206,
  46, 204,
  46, 456,
  46, 3488,
};
const uint8_t code_eu002Codes[] PROGMEM = {
  0x1A,
  0x56,
  0xA6,
  0xD6,
  0x95,
  0xA9,
  0x90,
};
const struct IrCode code_eu002Code PROGMEM = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_eu002Times,
  code_eu002Codes
};

/* Duplicate timing table, same as na000 !
 const uint16_t code_eu003Times[] PROGMEM = {
 	58, 60,
 	58, 2687,
 	118, 60,
 	237, 60,
 	238, 60,
 };
 */
/*
const uint8_t code_eu003Codes[] PROGMEM = {
 	0x68,
 	0x20,
 	0x80,
 	0x40,
 	0x03,
 	0x10,
 	0x41,
 	0x00,
 	0x80,
 	0x00,
 };
 const struct IrCode code_eu003Code PROGMEM = {
 	freq_to_timerval(38462),
 	26,		// # of pairs
 	3,		// # of bits per index
 	code_na000Times,
 	code_eu003Codes
 };// Duplicate IR Code - same as na000
 */

const uint16_t code_eu004Times[] PROGMEM = {
  44, 45,
  44, 131,
  44, 7462,
  346, 176,
  346, 178,
};
const uint8_t code_eu004Codes[] PROGMEM = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x48,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x49,
  0x20,
  0x80,
};
const struct IrCode code_eu004Code PROGMEM = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_eu004Times,
  code_eu004Codes
};// Duplicate IR Code? Similar to NA002

const uint16_t code_eu005Times[] PROGMEM = {
  24, 190,
  25, 80,
  25, 190,
  25, 4199,
  25, 4799,
};
const uint8_t code_eu005Codes[] PROGMEM = {
  0x04,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x53,
  0x44,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x51,
};
const struct IrCode code_eu005Code PROGMEM = {
  freq_to_timerval(38610),
  64,		// # of pairs
  3,		// # of bits per index
  code_eu005Times,
  code_eu005Codes
};
const uint16_t code_eu006Times[] PROGMEM = {
  53, 63,
  53, 172,
  53, 4472,
  54, 0,
  455, 468,
};
const uint8_t code_eu006Codes[] PROGMEM = {
  0x84,
  0x90,
  0x00,
  0x04,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x12,
  0x40,
  0x00,
  0x12,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0xB0,
};
const struct IrCode code_eu006Code PROGMEM = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu006Times,
  code_eu006Codes
};
const uint16_t code_eu007Times[] PROGMEM = {
  50, 54,
  50, 159,
  50, 2307,
  838, 422,
};
const uint8_t code_eu007Codes[] PROGMEM = {
  0xD4,
  0x00,
  0x15,
  0x10,
  0x25,
  0x00,
  0x05,
  0x44,
  0x09,
  0x40,
  0x01,
  0x51,
  0x01,
};
const struct IrCode code_eu007Code PROGMEM = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_eu007Times,
  code_eu007Codes
};// Duplicate IR Code? - Similar to NA010


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu008Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu008Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu008Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu008Codes
};


/* Duplicate timing table, same as na005 !
 const uint16_t code_eu009Times[] PROGMEM = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_eu009Codes[] PROGMEM = {
 	0x10,
 	0x92,
 	0x49,
 	0x46,
 	0x33,
 	0x09,
 	0x24,
 	0x94,
 	0x60,
 };
 const struct IrCode code_eu009Code PROGMEM = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_eu009Codes
 };// Duplicate IR Code - same as na005
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu010Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
/*
const uint8_t code_eu010Codes[] PROGMEM = {
 	0xA0,
 	0x00,
 	0x01,
 	0x04,
 	0x92,
 	0x48,
 	0x20,
 	0x80,
 	0x40,
 	0x04,
 	0x12,
 	0x09,
 	0x2B,
 	0x3D,
 	0x00,
 };
 const struct IrCode code_eu010Code PROGMEM = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_eu010Codes
 };// Duplicate IR Code - same as NA004
 */

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu011Times[] PROGMEM = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu011Codes[] PROGMEM = {
  0x84,
  0x00,
  0x48,
  0x04,
  0x02,
  0x01,
  0x04,
  0x80,
  0x09,
  0x00,
  0x12,
  0x40,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_eu011Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu011Codes
};
const uint16_t code_eu012Times[] PROGMEM = {
  46, 206,
  46, 459,
  46, 3447,
};
const uint8_t code_eu012Codes[] PROGMEM = {
  0x05,
  0x01,
  0x51,
  0x81,
  0x40,
  0x54,
  0x40,
};
const struct IrCode code_eu012Code PROGMEM = {
  freq_to_timerval(33445),
  26,		// # of pairs
  2,		// # of bits per index
  code_eu012Times,
  code_eu012Codes
};
const uint16_t code_eu013Times[] PROGMEM = {
  53, 59,
  53, 171,
  53, 2302,
  895, 449,
};
const uint8_t code_eu013Codes[] PROGMEM = {
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x56,
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x55,
};
const struct IrCode code_eu013Code PROGMEM = {
  freq_to_timerval(38462),
  88,		// # of pairs
  2,		// # of bits per index
  code_eu013Times,
  code_eu013Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_eu014Times[] PROGMEM = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
/*
const uint8_t code_eu014Codes[] PROGMEM = {
 	0x80,
 	0x10,
 	0x40,
 	0x08,
 	0x82,
 	0x08,
 	0x01,
 	0xC0,
 	0x08,
 	0x20,
 	0x04,
 	0x41,
 	0x04,
 	0x00,
 	0x00,
 };
 const struct IrCode code_eu014Code PROGMEM = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na021Times,
 	code_eu014Codes
 };// Duplicate IR Code - same as NA021
 */

const uint16_t code_eu015Times[] PROGMEM = {
  53, 54,
  53, 156,
  53, 2542,
  851, 425,
  853, 424,
};
const uint8_t code_eu015Codes[] PROGMEM = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x00,
  0x49,
  0x00,
  0x12,
  0x00,
  0x24,
  0xA8,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x10,
  0x01,
  0x24,
  0x00,
  0x48,
  0x00,
  0x92,
  0xA0,
  0x20,
  0x82,
  0x09,
  0x04,
  0x10,
  0x40,
  0x04,
  0x90,
  0x01,
  0x20,
  0x02,
  0x48,
};
const struct IrCode code_eu015Code PROGMEM = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_eu015Times,
  code_eu015Codes
};// Duplicate IR Code? - Similar to NA018

const uint16_t code_eu016Times[] PROGMEM = {
  28, 92,
  28, 213,
  28, 214,
  28, 2771,
};
const uint8_t code_eu016Codes[] PROGMEM = {
  0x68,
  0x08,
  0x20,
  0x00,
  0xEA,
  0x02,
  0x08,
  0x00,
  0x10,
};
const struct IrCode code_eu016Code PROGMEM = {
  freq_to_timerval(33333),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu016Times,
  code_eu016Codes
};
const uint16_t code_eu017Times[] PROGMEM = {
  15, 844,
  16, 557,
  16, 844,
  16, 5224,
};
const uint8_t code_eu017Codes[] PROGMEM = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_eu017Code PROGMEM = {
  freq_to_timerval(33333),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu017Times,
  code_eu017Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu018Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu018Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu018Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu018Codes
};
const uint16_t code_eu019Times[] PROGMEM = {
  50, 54,
  50, 158,
  50, 418,
  50, 2443,
  843, 418,
};
const uint8_t code_eu019Codes[] PROGMEM = {
  0x80,
  0x80,
  0x00,
  0x08,
  0x12,
  0x40,
  0x01,
  0xC0,
  0x40,
  0x00,
  0x04,
  0x09,
  0x20,
  0x00,
  0x00,
};
const struct IrCode code_eu019Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_eu019Times,
  code_eu019Codes
};
const uint16_t code_eu020Times[] PROGMEM = {
  48, 301,
  48, 651,
  48, 1001,
  48, 3001,
};
const uint8_t code_eu020Codes[] PROGMEM = {
  0x22,
  0x20,
  0x00,
  0x01,
  0xC8,
  0x88,
  0x00,
  0x00,
  0x40,
};
const struct IrCode code_eu020Code PROGMEM = {
  freq_to_timerval(35714),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu020Times,
  code_eu020Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu021Times[] PROGMEM = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu021Codes[] PROGMEM = {
  0x84,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_eu021Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu021Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu022Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu022Codes[] PROGMEM = {
  0xA4,
  0x80,
  0x41,
  0x00,
  0x12,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu022Code PROGMEM = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu022Codes
};

/* Duplicate timing table, same as na022 !
 const uint16_t code_eu023Times[] PROGMEM = {
 	53, 60,
 	53, 175,
 	53, 4463,
 	53, 9453,
 	892, 450,
 	895, 225,
 };
 */
/*
const uint8_t code_eu023Codes[] PROGMEM = {
 	0x80,
 	0x02,
 	0x40,
 	0x00,
 	0x02,
 	0x40,
 	0x00,
 	0x00,
 	0x01,
 	0x24,
 	0x92,
 	0x48,
 	0x0A,
 	0xBA,
 	0x00,
 };
 const struct IrCode code_eu023Code PROGMEM = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na022Times,
 	code_eu023Codes
 };// Duplicate IR Code - Same as NA022
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu024Times[] PROGMEM = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */

 const uint8_t code_eu024Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu024Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu024Codes
};
const uint16_t code_eu025Times[] PROGMEM = {
  49, 52,
  49, 102,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_eu025Codes[] PROGMEM = {
  0x47,
  0x00,
  0x23,
  0x3C,
  0x01,
  0x59,
  0xE0,
  0x04,
};
const struct IrCode code_eu025Code PROGMEM = {
  freq_to_timerval(31250),
  21,   // # of pairs
  3,    // # of bits per index
  code_eu025Times,
  code_eu025Codes
};
const uint16_t code_eu026Times[] PROGMEM = {
  14, 491,
  14, 743,
  14, 4926,
};
const uint8_t code_eu026Codes[] PROGMEM = {
  0x55,
  0x40,
  0x42,
  0x55,
  0x40,
  0x41,
};
const struct IrCode code_eu026Code PROGMEM = {
  freq_to_timerval(38462),
  24,   // # of pairs
  2,    // # of bits per index
  code_eu026Times,
  code_eu026Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu027Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
const uint8_t code_eu027Codes[] PROGMEM = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x10,
  0x01,
  0x20,
  0x82,
  0x48,
  0x0B,
  0x3D,
  0x00,
};
const struct IrCode code_eu027Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu027Codes
};
const uint16_t code_eu028Times[] PROGMEM = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
};
const uint8_t code_eu028Codes[] PROGMEM = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x72,
  0x24,
  0x9A,
  0xD1,
  0xC8,
  0x92,
  0x48,
};
const struct IrCode code_eu028Code PROGMEM = {
  freq_to_timerval(30303),
  31,   // # of pairs
  3,    // # of bits per index
  code_eu028Times,
  code_eu028Codes
};
const uint16_t code_eu029Times[] PROGMEM = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1445,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_eu029Codes[] PROGMEM = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x04,
  0x64,
  0x62,
  0x00,
  0xE0,
  0x00,
  0x2B,
  0x23,
  0x10,
  0x07,
  0x00,
  0x00,
  0x80,
};
const struct IrCode code_eu029Code PROGMEM = {
  freq_to_timerval(34483),
  46,   // # of pairs
  3,    // # of bits per index
  code_eu029Times,
  code_eu029Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu030Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
const uint8_t code_eu030Codes[] PROGMEM = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu030Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu030Codes
};// Duplicate IR Code? - Smilar to NA020

const uint16_t code_eu031Times[] PROGMEM = {
  53, 53,
  53, 160,
  53, 1697,
  838, 422,
};
const uint8_t code_eu031Codes[] PROGMEM = {
  0xD5,
  0x50,
  0x15,
  0x11,
  0x65,
  0x54,
  0x05,
  0x44,
  0x59,
  0x55,
  0x01,
  0x51,
  0x15,
};
const struct IrCode code_eu031Code PROGMEM = {
  freq_to_timerval(38462),
  52,   // # of pairs
  2,    // # of bits per index
  code_eu031Times,
  code_eu031Codes
};
const uint16_t code_eu032Times[] PROGMEM = {
  49, 205,
  49, 206,
  49, 456,
  49, 3690,
};
const uint8_t code_eu032Codes[] PROGMEM = {
  0x1A,
  0x56,
  0xA5,
  0xD6,
  0x95,
  0xA9,
  0x40,
};
const struct IrCode code_eu032Code PROGMEM = {
  freq_to_timerval(33333),
  26,   // # of pairs
  2,    // # of bits per index
  code_eu032Times,
  code_eu032Codes
};
const uint16_t code_eu033Times[] PROGMEM = {
  48, 150,
  50, 149,
  50, 347,
  50, 2936,
};
const uint8_t code_eu033Codes[] PROGMEM = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_eu033Code PROGMEM = {
  freq_to_timerval(38462),
  14,   // # of pairs
  2,    // # of bits per index
  code_eu033Times,
  code_eu033Codes
};


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu034Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
const uint8_t code_eu034Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu034Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu034Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_eu035Times[] PROGMEM = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
 };
 */
/*
const uint8_t code_eu035Codes[] PROGMEM = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
 };
 const struct IrCode code_eu035Code PROGMEM = {
  freq_to_timerval(35714),
  24,   // # of pairs
  3,    // # of bits per index
  code_na005Times,
  code_eu035Codes
 };// Duplicate IR Code - same as eu009!
 */

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu036Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
const uint8_t code_eu036Codes[] PROGMEM = {
  0xA4,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu036Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu036Codes
};
const uint16_t code_eu037Times[] PROGMEM = {
  14, 491,
  14, 743,
  14, 5178,
};
const uint8_t code_eu037Codes[] PROGMEM = {
  0x45,
  0x50,
  0x02,
  0x45,
  0x50,
  0x01,
};
const struct IrCode code_eu037Code PROGMEM = {
  freq_to_timerval(38462),
  24,   // # of pairs
  2,    // # of bits per index
  code_eu037Times,
  code_eu037Codes
};
const uint16_t code_eu038Times[] PROGMEM = {
  3, 1002,
  3, 1495,
  3, 3059,
};
const uint8_t code_eu038Codes[] PROGMEM = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_eu038Code PROGMEM = {
  0,              // Non-pulsed code
  11,   // # of pairs
  2,    // # of bits per index
  code_eu038Times,
  code_eu038Codes
};
const uint16_t code_eu039Times[] PROGMEM = {
  13, 445,
  13, 674,
  13, 675,
  13, 4583,
};
const uint8_t code_eu039Codes[] PROGMEM = {
  0x6A,
  0x82,
  0x83,
  0xAA,
  0x82,
  0x81,
};
const struct IrCode code_eu039Code PROGMEM = {
  freq_to_timerval(40161),
  24,   // # of pairs
  2,    // # of bits per index
  code_eu039Times,
  code_eu039Codes
};
const uint16_t code_eu040Times[] PROGMEM = {
  85, 89,
  85, 264,
  85, 3402,
  347, 350,
  348, 350,
};
const uint8_t code_eu040Codes[] PROGMEM = {
  0x60,
  0x90,
  0x40,
  0x20,
  0x80,
  0x40,
  0x20,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x41,
  0x00,
  0x82,
  0x01,
  0x00,
  0x82,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_eu040Code PROGMEM = {
  freq_to_timerval(35714),
  52,   // # of pairs
  3,    // # of bits per index
  code_eu040Times,
  code_eu040Codes
};
const uint16_t code_eu041Times[] PROGMEM = {
  46, 300,
  49, 298,
  49, 648,
  49, 997,
  49, 3056,
};
const uint8_t code_eu041Codes[] PROGMEM = {
  0x0C,
  0xB2,
  0xCA,
  0x49,
  0x13,
  0x0B,
  0x2C,
  0xB2,
  0x92,
  0x44,
  0xB0,
};
const struct IrCode code_eu041Code PROGMEM = {
  freq_to_timerval(33333),
  28,   // # of pairs
  3,    // # of bits per index
  code_eu041Times,
  code_eu041Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu042Times[] PROGMEM = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
 };
 */
const uint8_t code_eu042Codes[] PROGMEM = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x92,
  0x09,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_eu042Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na009Times,
  code_eu042Codes
};
const uint16_t code_eu043Times[] PROGMEM = {
  1037, 4216,
  1040, 0,
};
const uint8_t code_eu043Codes[] PROGMEM = {
  0x10,
};
const struct IrCode code_eu043Code PROGMEM = {
  freq_to_timerval(41667),
  2,    // # of pairs
  2,    // # of bits per index
  code_eu043Times,
  code_eu043Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu044Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
const uint8_t code_eu044Codes[] PROGMEM = {
  0xA0,
  0x02,
  0x01,
  0x04,
  0x90,
  0x48,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_eu044Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu044Codes
};
const uint16_t code_eu045Times[] PROGMEM = {
  152, 471,
  154, 156,
  154, 469,
  154, 2947,
};
const uint8_t code_eu045Codes[] PROGMEM = {
  0x16,
  0xE5,
  0x90,
};
const struct IrCode code_eu045Code PROGMEM = {
  freq_to_timerval(41667),
  10,   // # of pairs
  2,    // # of bits per index
  code_eu045Times,
  code_eu045Codes
};
const uint16_t code_eu046Times[] PROGMEM = {
  15, 493,
  16, 493,
  16, 698,
  16, 1414,
};
const uint8_t code_eu046Codes[] PROGMEM = {
  0x16,
  0xAB,
  0x56,
  0xA9,
};
const struct IrCode code_eu046Code PROGMEM = {
  freq_to_timerval(34602),
  16,   // # of pairs
  2,    // # of bits per index
  code_eu046Times,
  code_eu046Codes
};
const uint16_t code_eu047Times[] PROGMEM = {
  3, 496,
  3, 745,
  3, 1488,
};
const uint8_t code_eu047Codes[] PROGMEM = {
  0x41,
  0x24,
  0x12,
  0x41,
  0x00,
};
const struct IrCode code_eu047Code PROGMEM = {
  0,              // Non-pulsed code
  17,   // # of pairs
  2,    // # of bits per index
  code_eu047Times,
  code_eu047Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu048Times[] PROGMEM = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
 };
 */
const uint8_t code_eu048Codes[] PROGMEM = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x82,
  0x49,
  0x04,
  0x80,
  0x40,
  0x00,
  0x12,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_eu048Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na009Times,
  code_eu048Codes
};
const uint16_t code_eu049Times[] PROGMEM = {
  55, 55,
  55, 167,
  55, 4577,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_eu049Codes[] PROGMEM = {
  0x80,
  0x92,
  0x00,
  0x00,
  0x92,
  0x00,
  0x00,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_eu049Code PROGMEM = {
  freq_to_timerval(38462),
  40,   // # of pairs
  3,    // # of bits per index
  code_eu049Times,
  code_eu049Codes
};
const uint16_t code_eu050Times[] PROGMEM = {
  91, 88,
  91, 267,
  91, 3621,
  361, 358,
  361, 359,
};
const uint8_t code_eu050Codes[] PROGMEM = {
  0x60,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x42,
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x40,
};
const struct IrCode code_eu050Code PROGMEM = {
  freq_to_timerval(33333),
  48,   // # of pairs
  3,    // # of bits per index
  code_eu050Times,
  code_eu050Codes
};
const uint16_t code_eu051Times[] PROGMEM = {
  84, 88,
  84, 261,
  84, 3360,
  347, 347,
  347, 348,
};
const uint8_t code_eu051Codes[] PROGMEM = {
  0x60,
  0x82,
  0x00,
  0x20,
  0x80,
  0x41,
  0x04,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x00,
  0x82,
  0x01,
  0x04,
  0x12,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_eu051Code PROGMEM = {
  freq_to_timerval(38462),
  52,   // # of pairs
  3,    // # of bits per index
  code_eu051Times,
  code_eu051Codes
};// Duplicate IR Code? - Similar to NA115

const uint16_t code_eu052Times[] PROGMEM = {
  16, 838,
  17, 558,
  17, 839,
  17, 6328,
};
const uint8_t code_eu052Codes[] PROGMEM = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_eu052Code PROGMEM = {
  freq_to_timerval(31250),
  24,   // # of pairs
  2,    // # of bits per index
  code_eu052Times,
  code_eu052Codes
};// Duplicate IR Code? -  Similar to EU017


/* Duplicate timing table, same as eu046 !
 const uint16_t code_eu053Times[] PROGMEM = {
  15, 493,
  16, 493,
  16, 698,
  16, 1414,
 };
 */
const uint8_t code_eu053Codes[] PROGMEM = {
  0x26,
  0xAB,
  0x66,
  0xAA,
};
const struct IrCode code_eu053Code PROGMEM = {
  freq_to_timerval(34483),
  16,   // # of pairs
  2,    // # of bits per index
  code_eu046Times,
  code_eu053Codes
};
const uint16_t code_eu054Times[] PROGMEM = {
  49, 53,
  49, 104,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_eu054Codes[] PROGMEM = {
  0x40,
  0x1A,
  0x23,
  0x00,
  0xD0,
  0x80,
};
const struct IrCode code_eu054Code PROGMEM = {
  freq_to_timerval(31250),
  14,   // # of pairs
  3,    // # of bits per index
  code_eu054Times,
  code_eu054Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu055Times[] PROGMEM = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
 };
 */
const uint8_t code_eu055Codes[] PROGMEM = {
  0x80,
  0x00,
  0x00,
  0x20,
  0x92,
  0x49,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_eu055Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na009Times,
  code_eu055Codes
};
const uint16_t code_eu056Times[] PROGMEM = {
  112, 107,
  113, 107,
  677, 2766,
};
const uint8_t code_eu056Codes[] PROGMEM = {
  0x26,
};
const struct IrCode code_eu056Code PROGMEM = {
  freq_to_timerval(38462),
  4,    // # of pairs
  2,    // # of bits per index
  code_eu056Times,
  code_eu056Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu057Times[] PROGMEM = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
 };
 */
/*
const uint8_t code_eu057Codes[] PROGMEM = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
 };
 const struct IrCode code_eu057Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na004Times,
  code_eu057Codes
 }; // Duplicate IR code - same as EU008
 */
/* Duplicate timing table, same as na009 !
 const uint16_t code_eu058Times[] PROGMEM = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
 };
 */
const uint8_t code_eu058Codes[] PROGMEM = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x10,
  0x49,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_eu058Code PROGMEM = {
  freq_to_timerval(38462),
  38,   // # of pairs
  3,    // # of bits per index
  code_na009Times,
  code_eu058Codes
};
const uint16_t code_eu059Times[] PROGMEM = {
  310, 613,
  310, 614,
  622, 8312,
};
const uint8_t code_eu059Codes[] PROGMEM = {
  0x26,
};
const struct IrCode code_eu059Code PROGMEM = {
  freq_to_timerval(41667),
  4,    // # of pairs
  2,    // # of bits per index
  code_eu059Times,
  code_eu059Codes
};// Duplicate IR Code? - Similar to EU056

const uint16_t code_eu060Times[] PROGMEM = {
  50, 158,
  53, 51,
  53, 156,
  53, 2180,
};
const uint8_t code_eu060Codes[] PROGMEM = {
  0x25,
  0x59,
  0x9A,
  0x5A,
  0xE9,
  0x56,
  0x66,
  0x96,
  0xA0,
};
const struct IrCode code_eu060Code PROGMEM = {
  freq_to_timerval(38462),
  34,   // # of pairs
  2,    // # of bits per index
  code_eu060Times,
  code_eu060Codes
};


////////////////////////////////////////////////////////////////

//const PROGMEM array (called "NApowerCodes") of const pointers to IrCode structs
//-otherwise stated: "declare NApowerCodes as PROGMEM array of const pointers to const IrCode structs"
//-to confirm this, go to http://cdecl.org/ and paste "const int* const NApowerCodes[]", and you'll 
// see it means "declare NApowerCodes as array of const pointer to const int"
const IrCode* const NApowerCodes[] PROGMEM = {
  &code_na000Code,
  &code_na001Code,
  &code_na002Code,
  &code_na003Code,
  &code_na004Code,
  &code_na005Code,
  &code_na006Code,
  &code_na007Code,
  &code_na008Code,
  &code_na009Code,
  &code_na010Code,
  &code_na011Code,
  &code_na012Code,
  &code_na013Code,
  &code_na014Code,
  &code_na015Code,
  &code_na016Code,
  &code_na017Code,
  &code_na018Code,
  &code_na019Code,
  &code_na020Code,
  &code_na021Code,
  &code_na022Code,
  &code_na023Code,
  &code_na024Code,
  &code_na025Code,
  &code_na026Code,
  &code_na027Code,
  &code_na028Code,
  &code_na029Code,
  &code_na030Code,
  &code_na031Code,
  &code_na032Code,
  &code_na033Code,
  &code_na034Code,
  &code_na035Code,
  &code_na036Code,
  &code_na037Code,
  &code_na038Code,
  &code_na039Code,
  &code_na040Code,
  &code_na041Code,
  &code_na042Code,
  &code_na043Code,
  &code_na044Code,
  &code_na045Code,
  &code_na046Code,
  &code_na047Code,
  &code_na048Code,
  &code_na049Code,
  &code_na050Code,
  &code_na051Code,
  &code_na052Code,
  &code_na053Code,
  &code_na054Code,
  &code_na055Code,
  &code_na056Code,
  &code_na057Code,
  &code_na058Code,
  &code_na059Code,
  &code_na060Code,
  &code_na061Code,
  &code_na062Code,
  &code_na063Code,
  &code_na064Code,
  &code_na065Code,
  &code_na066Code,
  &code_na067Code,
  &code_na068Code,
  &code_na069Code,
  &code_na070Code,

  

};

const IrCode* const EUpowerCodes[] PROGMEM = {
  &code_eu000Code,
  &code_eu001Code,
  &code_eu002Code,
  &code_na000Code, // same as &code_eu003Code
  &code_eu004Code,
  &code_eu005Code,
  &code_eu006Code,
  &code_eu007Code,
  &code_eu008Code,
  &code_na005Code, // same as &code_eu009Code
  &code_na004Code, // same as &code_eu010Code
  &code_eu011Code,
  &code_eu012Code,
  &code_eu013Code,
  &code_na021Code, // same as &code_eu014Code
  &code_eu015Code,
  &code_eu016Code,
  &code_eu017Code,
  &code_eu018Code,
  &code_eu019Code,
  &code_eu020Code,
  &code_eu021Code,
  &code_eu022Code,
  &code_na022Code, // same as &code_eu023Code
  &code_eu024Code,
  &code_eu025Code,
  &code_eu026Code,
  &code_eu027Code,
  &code_eu028Code,
  &code_eu029Code,
  &code_eu030Code,
  &code_eu031Code,
  &code_eu032Code,
  &code_eu033Code,
  &code_eu034Code,
  //&code_eu035Code, same as eu009
  &code_eu036Code,
  &code_eu037Code,
  &code_eu038Code,
  &code_eu039Code,
  &code_eu040Code,
  &code_eu041Code,
  &code_eu042Code,
  &code_eu043Code,
  &code_eu044Code,
  &code_eu045Code,
  &code_eu046Code,
  &code_eu047Code,
  &code_eu048Code,
  &code_eu049Code,
  &code_eu050Code,
  &code_eu051Code,
  &code_eu052Code,
  &code_eu053Code,
  &code_eu054Code,
  &code_eu055Code,
  &code_eu056Code,
  //&code_eu057Code, same as eu008
  &code_eu058Code,
  &code_eu059Code,
  &code_eu060Code,
 
};

uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
uint8_t num_EUcodes = NUM_ELEM(EUpowerCodes);
