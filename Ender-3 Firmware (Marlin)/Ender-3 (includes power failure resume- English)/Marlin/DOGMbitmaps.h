#define START_BMPWIDTH 	128	//Width in pixels
#define START_BMPHEIGHT 	64	//Height in pixels
#define START_BMPBYTEWIDTH 	16	//Width in bytes
const unsigned char start_bmp[] PROGMEM = { //AVR-GCC, WinAVR
/*0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x80,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x0F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFE,0x00,0x07,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF8,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0x83,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xF0,
0x80,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xF0,
0x88,0x7F,0xFF,0xFE,0x23,0xFF,0xFF,0xF0,
0x8C,0x70,0x38,0x0E,0x71,0x81,0xC0,0x70,
0x8C,0x60,0x38,0x0E,0x63,0x80,0xC0,0x30,
0x80,0xE3,0x19,0xC6,0x07,0xF8,0xC7,0x30,
0x80,0xE0,0x19,0xC6,0x03,0x80,0xC7,0x10,
0x8C,0x62,0x79,0xC6,0x63,0x9C,0xC7,0x30,
0x8C,0x63,0xF8,0xC6,0x71,0x18,0xC6,0x30,
0x8E,0x30,0x18,0x0E,0x71,0x80,0xC0,0x30,
0x9E,0x38,0x39,0x1E,0x79,0xC4,0xC4,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0


//3D printer
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0x03,0xFC,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0xFE,0x03,0xFF,0x00,0x00,0xFF,0x80,0x01,0x80,0x00,0x03,0x00,0x00,0x00,0x00,
0x03,0x07,0x06,0x07,0x80,0x01,0x81,0xC0,0x01,0x80,0x00,0x03,0x00,0x00,0x00,0x00,
0x00,0x03,0x06,0x01,0x80,0x01,0x80,0xC0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,
0x00,0x03,0x06,0x01,0xC0,0x01,0x80,0xC0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,
0x00,0x06,0x06,0x00,0xC0,0x01,0x80,0xC6,0x71,0x83,0x7E,0x0F,0xE0,0xF8,0x0C,0xE0,
0x00,0x0E,0x06,0x00,0xC0,0x01,0x80,0xC7,0xF1,0x83,0xFF,0x1F,0xE3,0xFC,0x0F,0xE0,
0x00,0xF8,0x0C,0x00,0xC0,0x03,0x01,0x8F,0x03,0x07,0x87,0x06,0x07,0x0E,0x1E,0x00,
0x00,0xF8,0x0C,0x00,0xC0,0x03,0x07,0x0C,0x03,0x06,0x03,0x0C,0x0C,0x06,0x18,0x00,
0x00,0x0C,0x0C,0x00,0xC0,0x03,0xFE,0x0C,0x03,0x06,0x03,0x0C,0x0C,0x06,0x18,0x00,
0x00,0x06,0x0C,0x01,0x80,0x03,0xF8,0x0C,0x03,0x06,0x03,0x0C,0x1F,0xFE,0x18,0x00,
0x00,0x06,0x18,0x01,0x80,0x06,0x00,0x18,0x06,0x0C,0x06,0x0C,0x1F,0xFE,0x30,0x00,
0x00,0x06,0x18,0x01,0x80,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x00,0x06,0x18,0x03,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x00,0x0C,0x18,0x06,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x18,0x1C,0x18,0x1C,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x1C,0x0C,0x30,0x00,
0x1F,0xF8,0x3F,0xF8,0x00,0x0C,0x00,0x30,0x0C,0x18,0x0C,0x1F,0x8F,0xFC,0x60,0x00,
0x0F,0xE0,0x3F,0xE0,0x00,0x0C,0x00,0x30,0x0C,0x18,0x0C,0x0F,0x83,0xF0,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
*/
  // chuangxiang 3D
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x60,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0x06,0x01,0x80,0x18,0x00,0x00,0x00,0x0E,0x1F,0x00,0x00,0x00,
0x00,0x00,0x00,0xF8,0x06,0x01,0x87,0xF8,0x00,0x00,0x70,0x0C,0x39,0x80,0x00,0x00,
0x00,0x00,0x00,0xCE,0x06,0x01,0xB6,0x18,0x0F,0xFF,0xC0,0x0C,0x30,0x00,0x00,0x00,
0x00,0x00,0x01,0x86,0x66,0x0F,0xE6,0x18,0x00,0x00,0x00,0x19,0xBF,0xF0,0x00,0x00,
0x00,0x00,0x01,0x80,0x66,0x03,0x87,0xF8,0x00,0x00,0x00,0x1B,0xB3,0x00,0x00,0x00,
0x00,0x00,0x03,0x00,0x66,0x03,0xC6,0x18,0x00,0x00,0x00,0x33,0x73,0x00,0x00,0x00,
0x00,0x00,0x07,0xFC,0x66,0x07,0xF7,0xF8,0x00,0x00,0x00,0x7E,0xF3,0x00,0x00,0x00,
0x00,0x00,0x0D,0x8C,0x66,0x07,0xB6,0x18,0x00,0x00,0xC0,0x36,0xFF,0xF0,0x00,0x00,
0x00,0x00,0x01,0x8C,0x66,0x0D,0x86,0x18,0x00,0x01,0xE0,0x0D,0xB3,0x00,0x00,0x00,
0x00,0x00,0x01,0x8C,0x66,0x19,0x87,0xF8,0x03,0xFF,0x00,0x0C,0x33,0x00,0x00,0x00,
0x00,0x00,0x01,0x9C,0x66,0x01,0x86,0x18,0x00,0x00,0x00,0x1B,0xB3,0x00,0x00,0x00,
0x00,0x00,0x01,0xF8,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3F,0xF0,0x00,0x00,
0x00,0x00,0x01,0xB8,0x06,0x00,0x6C,0x38,0x00,0x00,0x00,0x00,0x33,0x00,0x00,0x00,
0x00,0x00,0x01,0x83,0x06,0x00,0x66,0x1C,0x00,0x00,0x00,0x01,0xB3,0x00,0x00,0x00,
0x00,0x00,0x01,0x83,0x06,0x06,0x67,0xCE,0x00,0x00,0x18,0x0F,0x33,0x00,0x00,0x00,
0x00,0x00,0x01,0x83,0x06,0x0E,0x60,0xC0,0x1F,0xFF,0xFC,0x38,0x33,0x38,0x00,0x00,
0x00,0x00,0x01,0xFF,0x3E,0x0C,0x7F,0xE0,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x7E,0x00,0x00,0x00,0x0F,0x03,0x80,0x00,0x00,0x00,0x3E,0x7E,0x00,0x00,
0x00,0x00,0xC6,0x00,0x00,0x00,0x03,0x03,0x80,0x00,0x00,0x00,0x63,0x33,0x00,0x00,
0x00,0x00,0xC6,0x00,0x00,0x00,0x03,0x00,0x00,0xC0,0x00,0x00,0x63,0x31,0x80,0x00,
0x00,0x01,0x80,0x00,0x00,0x00,0x03,0x00,0x00,0xC0,0x00,0x00,0x06,0x31,0x80,0x00,
0x00,0x01,0x80,0xFF,0x1F,0x0F,0x83,0x07,0x83,0xF3,0xDE,0x00,0x1C,0x31,0x80,0x00,
0x00,0x01,0x80,0x3B,0x31,0x98,0xC3,0x01,0x80,0xC1,0x8C,0x00,0x06,0x31,0x80,0x00,
0x00,0x01,0x80,0x30,0x3F,0x87,0xC3,0x01,0x80,0xC0,0xD8,0x00,0x03,0x31,0x80,0x00,
0x00,0x01,0x80,0x30,0x30,0x0C,0xC3,0x01,0x80,0xC0,0xD8,0x00,0x03,0x31,0x80,0x00,
0x00,0x00,0xC6,0x30,0x30,0x18,0xC3,0x01,0x80,0xC0,0xF0,0x00,0x63,0x31,0x80,0x00,
0x00,0x00,0xCC,0x30,0x31,0x98,0xC3,0x01,0x80,0xC0,0x70,0x00,0x66,0x33,0x00,0x00,
0x00,0x00,0x78,0xFC,0x1F,0x0F,0xEF,0xC7,0xE0,0x70,0x60,0x00,0x3C,0x7E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
*/

//Creality 3d
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,
0x01,0xFC,0x00,0x00,0x00,0x00,0x7C,0x03,0x80,0x00,0x00,0x00,0x00,0xC6,0x3F,0x80,
0x03,0x1C,0x00,0x00,0x00,0x00,0x0C,0x03,0x80,0x30,0x00,0x00,0x00,0xC3,0x18,0xC0,
0x06,0x0C,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x30,0x00,0x00,0x00,0xC3,0x18,0x60,
0x06,0x0C,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x30,0x00,0x00,0x00,0x03,0x18,0x30,
0x0C,0x00,0xF7,0x87,0xC1,0xF8,0x0C,0x07,0x80,0xFE,0x3D,0xE0,0x00,0x06,0x18,0x30,
0x0C,0x00,0x3D,0x8C,0x63,0x0C,0x0C,0x01,0x80,0x30,0x18,0xC0,0x00,0x1E,0x18,0x30,
0x0C,0x00,0x38,0x18,0x33,0x0C,0x0C,0x01,0x80,0x30,0x0D,0x80,0x00,0x03,0x18,0x30,
0x0C,0x00,0x30,0x18,0x30,0x3C,0x0C,0x01,0x80,0x30,0x0D,0x80,0x00,0x01,0x98,0x30,
0x0C,0x00,0x30,0x1F,0xF1,0xEC,0x0C,0x01,0x80,0x30,0x0D,0x80,0x00,0x01,0x98,0x30,
0x0C,0x0C,0x30,0x18,0x03,0x0C,0x0C,0x01,0x80,0x30,0x07,0x80,0x00,0xC1,0x98,0x30,
0x06,0x0C,0x30,0x18,0x33,0x0C,0x0C,0x01,0x80,0x30,0x07,0x00,0x00,0xC1,0x98,0x60,
0x07,0x18,0x30,0x0C,0x63,0x1F,0x0C,0x01,0x80,0x33,0x03,0x00,0x00,0xC3,0x18,0xC0,
0x01,0xF0,0xFC,0x07,0xC1,0xFF,0x7F,0x87,0xE0,0x1E,0x03,0x00,0x00,0x7E,0x3F,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
*/

// ENDER
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xE1,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x78,0x00,0x00,0x03,0xDD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0x80,0x7E,0x00,0x01,0xEE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x7D,0xCF,0xFC,0x00,0x00,0xF7,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x8E,0x06,0x00,0x00,0x00,0x7B,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x7D,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x3E,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x03,0x1F,0x73,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x01,0x8F,0x81,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x83,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFC,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x07,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x07,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8E,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x7F,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x7F,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC3,0xFC,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC3,0xFC,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x87,0xFD,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x87,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x0F,0xE7,0xF3,0x0F,0xFC,0x23,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x0F,0xEF,0x80,0x07,0xF0,0x03,0xF0,0x1E,0x00,0x7F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x1F,0xCF,0x81,0x87,0xC7,0x87,0xC7,0x0C,0x00,0x7F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x00,0x1F,0xC7,0xC7,0x8F,0xC7,0x9F,0x0F,0x0C,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x00,0x1F,0x87,0x8F,0x1F,0x8F,0x1F,0x0F,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x3F,0x9F,0x8F,0x8F,0x1F,0x8E,0x00,0x1E,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x7F,0x3F,0x0F,0x1E,0x3F,0x1E,0x3F,0xFE,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0x1F,0x1C,0x3F,0x1C,0x7F,0xFC,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0x1E,0x1C,0x7E,0x1C,0x7F,0xFC,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF0,0xFF,0xCE,0x3E,0x3C,0x7E,0x3C,0x7F,0xB8,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF0,0xFF,0x9E,0x3C,0x38,0x7C,0x38,0x7E,0x78,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xE1,0xFF,0x3C,0x7C,0x78,0x7C,0x78,0x3C,0xF1,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xE1,0xF8,0x38,0x78,0x78,0x10,0x18,0x01,0xF1,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x00,0x60,0x20,0x3C,0x00,0x7C,0x07,0x80,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

};

#define STATUS_SCREENWIDTH 		125	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	16	//Width in bytes
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
//chuangxiang
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x80,0x81,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0xC0,0x81,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x01,0x20,0x81,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x02,0x14,0x8F,0xDF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x04,0x04,0x81,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0x0B,0xE4,0x83,0x9F,0x80,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x02,0x24,0x85,0x50,0x80,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x02,0x24,0x89,0x1F,0x80,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x02,0x24,0x81,0x10,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x02,0xC4,0x80,0xA1,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x02,0x00,0x82,0x90,0x80,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x02,0x10,0x82,0x8A,0x40,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x02,0x12,0x84,0x82,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x01,0xF1,0x00,0x7E,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/

// 3D
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x00,0x3E,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x00,0x1F,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x18,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x3E,0x0F,0xF0,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/

// ENDER-3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0xF8,0x01,0x80,0x00,0x0C,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x48,0x00,0x80,0x00,0x12,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x43,0xC3,0x8C,0xD0,0x02,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x71,0x24,0x92,0x67,0xCC,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x41,0x24,0x9E,0x40,0x02,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x49,0x24,0x90,0x40,0x12,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0xFB,0xB3,0xCE,0xE0,0x0C,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,

};

#define STATUS_SCREENWIDTH 		125	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	16	//Width in bytes
const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
//chuangxiang
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0, 
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x80,0x81,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0xC0,0x81,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x01,0x20,0x81,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x02,0x14,0x8F,0xDF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x04,0x04,0x81,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0x0B,0xE4,0x83,0x9F,0x80,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x02,0x24,0x85,0x50,0x80,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x02,0x24,0x89,0x1F,0x80,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x02,0x24,0x81,0x10,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x02,0xC4,0x80,0xA1,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x02,0x00,0x82,0x90,0x80,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0x02,0x10,0x82,0x8A,0x40,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x02,0x12,0x84,0x82,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x01,0xF1,0x00,0x7E,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/

// 3D
/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x00,0x3E,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x00,0xC1,0x86,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x00,0xC1,0x86,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x00,0x1F,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0x00,0xC1,0x86,0x18,0x00,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x00,0x3E,0x0F,0xF0,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/

// ENDER-3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0xF8,0x01,0x80,0x00,0x0C,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x48,0x00,0x80,0x00,0x12,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x43,0xC3,0x8C,0xD0,0x02,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x71,0x24,0x92,0x67,0xCC,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x41,0x24,0x9E,0x40,0x02,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x49,0x24,0x90,0x40,0x12,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0xFB,0xB3,0xCE,0xE0,0x0C,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,

};


