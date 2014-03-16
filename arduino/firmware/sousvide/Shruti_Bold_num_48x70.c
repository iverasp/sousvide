#if defined(__AVR__)
	#include <avr/pgmspace.h>
	#define fontdatatype uint8_t
#else
	#define PROGMEM
	#define fontdatatype const unsigned char
#endif

// Shruti_Bold_num_48x70.c
// Font type    : Numeric (10 characters)
// Font size    : 48x70 pixels
// Memory usage : 4204 bytes


fontdatatype Shruti_Bold_num_48x70[4204] PROGMEM={
0x30,0x46,0x30,0x0A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x03,0xFF,0xFF,0x80,0x00,0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xFF,0xF0,0x00,0x00,0x3F,0xFF,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xFF,0xFC,0x00,0x00,0xFF,0xFF,0xFF,0xFE,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x03,0xFF,0xF8,0x1F,0xFF,0x80,0x03,0xFF,0xC0,0x07,0xFF,0x80,0x07,0xFF,0x80,0x03,0xFF,0xC0,0x07,0xFF,0x00,0x01,0xFF,0xC0,0x0F,0xFF,0x00,0x00,0xFF,0xE0,0x0F,0xFE,0x00,0x00,0xFF,0xE0,0x0F,0xFE,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x1F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF0,0x00,0x00,0x1F,0xFC,0x3F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x7F,0xF0,0x00,0x00,0x1F,0xFC,0x3F,0xF0,0x00,0x00,0x1F,0xFC,0x3F,0xF0,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x1F,0xF8,0x00,0x00,0x3F,0xF8,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x0F,0xFE,0x00,0x00,0x7F,0xF0,0x0F,0xFE,0x00,0x00,0xFF,0xE0,0x0F,0xFF,0x00,0x00,0xFF,0xE0,0x07,0xFF,0x00,0x01,0xFF,0xC0,0x07,0xFF,0x80,0x03,0xFF,0xC0,0x03,0xFF,0xC0,0x07,0xFF,0x80,0x01,0xFF,0xF8,0x3F,0xFF,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x7F,0xFF,0xFF,0xFC,0x00,0x00,0x3F,0xFF,0xFF,0xF8,0x00,0x00,0x1F,0xFF,0xFF,0xF0,0x00,0x00,0x07,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x07,0xFF,0xE0,0x00,0x00,0x00,0x0F,0xFF,0xE0,0x00,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0xFF,0xFC,0xFF,0xE0,0x00,0x00,0xFF,0xE0,0xFF,0xE0,0x00,0x00,0xFE,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x07,0xFF,0xFF,0xF8,0x00,0x00,0x1F,0xFF,0xFF,0xFE,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0x80,0x00,0xFF,0xFF,0xFF,0xFF,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xE0,0x03,0xFF,0xF8,0x0F,0xFF,0xF0,0x07,0xFF,0xE0,0x01,0xFF,0xF0,0x07,0xFF,0x80,0x00,0xFF,0xF8,0x0F,0xFF,0x00,0x00,0x7F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xFC,0x1F,0xFC,0x00,0x00,0x1F,0xFC,0x1F,0xFC,0x00,0x00,0x1F,0xFC,0x1F,0xFC,0x00,0x00,0x1F,0xFC,0x1F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x00,0x0F,0xFF,0x80,0x00,0x00,0x00,0x1F,0xFF,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x01,0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,0x00,0x00,0x00,0x07,0xFF,0xE0,0x00,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x00,0x3F,0xFF,0x80,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x00,0x07,0xFF,0xF0,0x00,0x00,0x00,0x0F,0xFF,0xE0,0x00,0x00,0x00,0x1F,0xFF,0x80,0x00,0x00,0x00,0x3F,0xFF,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x01,0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x07,0xFF,0xC0,0x00,0x00,0x00,0x0F,0xFF,0x80,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x7F,0xFF,0xFF,0xFE,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0x80,0x03,0xFF,0xF0,0x1F,0xFF,0xC0,0x07,0xFF,0xC0,0x03,0xFF,0xE0,0x07,0xFF,0x00,0x01,0xFF,0xE0,0x0F,0xFF,0x00,0x00,0xFF,0xF0,0x0F,0xFE,0x00,0x00,0xFF,0xF0,0x0F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xF8,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x00,0x7F,0xFF,0x00,0x00,0x00,0x0F,0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x0F,0xFF,0xF0,0x00,0x00,0x00,0x0F,0xFF,0xF8,0x00,0x00,0x00,0x0F,0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x0F,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0xFF,0xF8,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x3F,0xF0,0x00,0x00,0x07,0xFF,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x1F,0xFE,0x1F,0xFC,0x00,0x00,0x1F,0xFE,0x1F,0xFE,0x00,0x00,0x3F,0xFC,0x1F,0xFE,0x00,0x00,0x7F,0xFC,0x0F,0xFF,0x80,0x00,0xFF,0xF8,0x07,0xFF,0xC0,0x03,0xFF,0xF8,0x07,0xFF,0xF8,0x0F,0xFF,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x3F,0xFF,0xFF,0xFE,0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x00,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x00,0x00,0x03,0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xFE,0x00,0x00,0x00,0x1F,0xFF,0xFE,0x00,0x00,0x00,0x1F,0xF7,0xFE,0x00,0x00,0x00,0x3F,0xE7,0xFE,0x00,0x00,0x00,0x7F,0xE7,0xFE,0x00,0x00,0x00,0x7F,0xC7,0xFE,0x00,0x00,0x00,0xFF,0x87,0xFE,0x00,0x00,0x01,0xFF,0x07,0xFE,0x00,0x00,0x01,0xFF,0x07,0xFE,0x00,0x00,0x03,0xFE,0x07,0xFE,0x00,0x00,0x07,0xFC,0x07,0xFE,0x00,0x00,0x07,0xFC,0x07,0xFE,0x00,0x00,0x0F,0xF8,0x07,0xFE,0x00,0x00,0x1F,0xF0,0x07,0xFE,0x00,0x00,0x3F,0xF0,0x07,0xFE,0x00,0x00,0x3F,0xE0,0x07,0xFE,0x00,0x00,0x7F,0xC0,0x07,0xFE,0x00,0x00,0xFF,0xC0,0x07,0xFE,0x00,0x00,0xFF,0x80,0x07,0xFE,0x00,0x01,0xFF,0x00,0x07,0xFE,0x00,0x03,0xFF,0x00,0x07,0xFE,0x00,0x03,0xFE,0x00,0x07,0xFE,0x00,0x07,0xFC,0x00,0x07,0xFE,0x00,0x0F,0xFC,0x00,0x07,0xFE,0x00,0x0F,0xF8,0x00,0x07,0xFE,0x00,0x1F,0xF0,0x00,0x07,0xFE,0x00,0x3F,0xF0,0x00,0x07,0xFE,0x00,0x3F,0xE0,0x00,0x07,0xFE,0x00,0x7F,0xC0,0x00,0x07,0xFE,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x07,0xFE,0x03,0xFF,0x00,0x00,0x07,0xFE,0x3F,0xFF,0xE0,0x00,0x07,0xFE,0xFF,0xFF,0xF8,0x00,0x07,0xFF,0xFF,0xFF,0xFE,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0x80,0x07,0xFF,0xFF,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xE0,0x07,0xFF,0xF8,0x07,0xFF,0x00,0x01,0xFF,0xF8,0x0F,0xFE,0x00,0x00,0xFF,0xFC,0x0F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFE,0x3F,0xF0,0x00,0x00,0x0F,0xFE,0x3F,0xF0,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x1F,0xFE,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x1F,0xFC,0x00,0x00,0x3F,0xFC,0x1F,0xFE,0x00,0x00,0x3F,0xFC,0x1F,0xFE,0x00,0x00,0x7F,0xF8,0x0F,0xFF,0x80,0x01,0xFF,0xF8,0x0F,0xFF,0xC0,0x03,0xFF,0xF0,0x07,0xFF,0xF8,0x1F,0xFF,0xE0,0x03,0xFF,0xFF,0xFF,0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x7F,0xFF,0xFF,0xFE,0x00,0x00,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x80,0x00,0x00,0x00,0x7F,0xFF,0xF0,0x00,0x00,0x01,0xFF,0xFF,0xFC,0x00,0x00,0x07,0xFF,0xFF,0xFE,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0x80,0x00,0x3F,0xFF,0xFF,0xFF,0xC0,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0xFF,0xFE,0x07,0xFF,0xE0,0x00,0xFF,0xF8,0x01,0xFF,0xF0,0x01,0xFF,0xE0,0x00,0x7F,0xF0,0x03,0xFF,0xC0,0x00,0x3F,0xF8,0x03,0xFF,0xC0,0x00,0x3F,0xF8,0x03,0xFF,0x80,0x00,0x1F,0xF8,0x07,0xFF,0x00,0x00,0x1F,0xFC,0x07,0xFF,0x00,0x00,0x1F,0xFC,0x0F,0xFF,0x00,0x00,0x1F,0xFC,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xF8,0x03,0xFF,0x80,0x00,0x1F,0xF8,0x0F,0xFF,0xF0,0x00,0x3F,0xF8,0x3F,0xFF,0xFC,0x00,0x3F,0xF8,0xFF,0xFF,0xFF,0x00,0x3F,0xF9,0xFF,0xFF,0xFF,0x80,0x3F,0xFB,0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,0xFF,0xFF,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFC,0x0F,0xFF,0xF0,0x3F,0xFF,0xE0,0x01,0xFF,0xF8,0x3F,0xFF,0x80,0x00,0xFF,0xF8,0x3F,0xFF,0x00,0x00,0x7F,0xFC,0x3F,0xFE,0x00,0x00,0x3F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x07,0xFF,0x1F,0xF8,0x00,0x00,0x07,0xFF,0x1F,0xF8,0x00,0x00,0x07,0xFF,0x1F,0xF8,0x00,0x00,0x07,0xFF,0x1F,0xFC,0x00,0x00,0x07,0xFF,0x1F,0xFC,0x00,0x00,0x07,0xFE,0x1F,0xFC,0x00,0x00,0x0F,0xFE,0x0F,0xFE,0x00,0x00,0x0F,0xFE,0x0F,0xFE,0x00,0x00,0x0F,0xFE,0x0F,0xFE,0x00,0x00,0x0F,0xFE,0x07,0xFF,0x00,0x00,0x1F,0xFC,0x07,0xFF,0x00,0x00,0x1F,0xFC,0x03,0xFF,0x80,0x00,0x3F,0xFC,0x03,0xFF,0xC0,0x00,0x7F,0xF8,0x01,0xFF,0xE0,0x00,0xFF,0xF8,0x01,0xFF,0xF0,0x01,0xFF,0xF0,0x00,0xFF,0xFE,0x0F,0xFF,0xE0,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x07,0xFF,0xFF,0xFC,0x00,0x00,0x03,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x01,0xFF,0x80,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x07,0xFF,0xFF,0xF8,0x00,0x00,0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0x80,0x00,0xFF,0xFF,0xFF,0xFF,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xC0,0x03,0xFF,0xF0,0x07,0xFF,0xE0,0x03,0xFF,0xC0,0x01,0xFF,0xE0,0x07,0xFF,0x80,0x00,0xFF,0xF0,0x07,0xFF,0x00,0x00,0x7F,0xF0,0x07,0xFF,0x00,0x00,0x3F,0xF8,0x07,0xFE,0x00,0x00,0x3F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xF8,0x0F,0xFE,0x00,0x00,0x3F,0xF8,0x07,0xFE,0x00,0x00,0x3F,0xF8,0x07,0xFE,0x00,0x00,0x3F,0xF8,0x07,0xFF,0x00,0x00,0x3F,0xF0,0x07,0xFF,0x00,0x00,0x7F,0xF0,0x03,0xFF,0x80,0x00,0xFF,0xF0,0x03,0xFF,0xC0,0x01,0xFF,0xE0,0x01,0xFF,0xE0,0x03,0xFF,0xE0,0x01,0xFF,0xF0,0x07,0xFF,0xC0,0x00,0xFF,0xFC,0x0F,0xFF,0x80,0x00,0x7F,0xFE,0x3F,0xFF,0x00,0x00,0x3F,0xFF,0xFF,0xFE,0x00,0x00,0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x07,0xFF,0xFF,0xF0,0x00,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x07,0xFF,0xFF,0xF0,0x00,0x00,0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x80,0x01,0xFF,0xFE,0x3F,0xFF,0xC0,0x03,0xFF,0xF8,0x0F,0xFF,0xE0,0x07,0xFF,0xE0,0x03,0xFF,0xF0,0x0F,0xFF,0xC0,0x00,0xFF,0xF8,0x0F,0xFF,0x80,0x00,0x7F,0xF8,0x1F,0xFE,0x00,0x00,0x3F,0xFC,0x1F,0xFE,0x00,0x00,0x1F,0xFC,0x1F,0xFC,0x00,0x00,0x1F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFF,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xFC,0x00,0x00,0x0F,0xFE,0x3F,0xFC,0x00,0x00,0x1F,0xFE,0x1F,0xFE,0x00,0x00,0x1F,0xFE,0x1F,0xFE,0x00,0x00,0x3F,0xFC,0x0F,0xFF,0x00,0x00,0x7F,0xFC,0x0F,0xFF,0xC0,0x01,0xFF,0xF8,0x07,0xFF,0xF0,0x07,0xFF,0xF8,0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x7F,0xFF,0xFF,0xFF,0x80,0x00,0x3F,0xFF,0xFF,0xFE,0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x00,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x03,0xFF,0xFF,0x80,0x00,0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xFF,0xFC,0x00,0x00,0xFF,0xFF,0xFF,0xFE,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x80,0x03,0xFF,0xF0,0x1F,0xFF,0xC0,0x07,0xFF,0xC0,0x07,0xFF,0xC0,0x07,0xFF,0x80,0x01,0xFF,0xE0,0x0F,0xFF,0x00,0x00,0xFF,0xE0,0x0F,0xFE,0x00,0x00,0xFF,0xF0,0x1F,0xFE,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x1F,0xFC,0x3F,0xF8,0x00,0x00,0x0F,0xFC,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x0F,0xFE,0x3F,0xF8,0x00,0x00,0x07,0xFE,0x3F,0xFC,0x00,0x00,0x07,0xFE,0x1F,0xFC,0x00,0x00,0x07,0xFE,0x1F,0xFE,0x00,0x00,0x0F,0xFE,0x1F,0xFE,0x00,0x00,0x3F,0xFE,0x0F,0xFF,0x00,0x00,0x7F,0xFE,0x0F,0xFF,0x80,0x00,0xFF,0xFE,0x07,0xFF,0xE0,0x07,0xFF,0xFE,0x07,0xFF,0xFC,0x3F,0xFF,0xFE,0x03,0xFF,0xFF,0xFF,0xFF,0xFE,0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xEF,0xFE,0x00,0x7F,0xFF,0xFF,0xCF,0xFE,0x00,0x3F,0xFF,0xFF,0x8F,0xFE,0x00,0x0F,0xFF,0xFE,0x0F,0xFE,0x00,0x03,0xFF,0xF8,0x0F,0xFE,0x00,0x00,0x7F,0xC0,0x0F,0xFE,0x00,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x3F,0xF8,0x1F,0xF8,0x00,0x00,0x3F,0xF8,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0x7F,0xF0,0x1F,0xFC,0x00,0x00,0xFF,0xF0,0x1F,0xFE,0x00,0x01,0xFF,0xE0,0x0F,0xFE,0x00,0x01,0xFF,0xE0,0x0F,0xFF,0x00,0x07,0xFF,0xC0,0x07,0xFF,0x80,0x0F,0xFF,0xC0,0x07,0xFF,0xF0,0x3F,0xFF,0x80,0x03,0xFF,0xFF,0xFF,0xFF,0x00,0x01,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x7F,0xFF,0xFF,0xF8,0x00,0x00,0x3F,0xFF,0xFF,0xF0,0x00,0x00,0x0F,0xFF,0xFF,0xC0,0x00,0x00,0x03,0xFF,0xFF,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 9
};