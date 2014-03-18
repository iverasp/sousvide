/*
  UTFT.cpp - Arduino/chipKit library support for Color TFT LCD Boards
  Copyright (C)2010-2014 Henning Karlsen. All right reserved
  
  This library is the continuation of my ITDB02_Graph, ITDB02_Graph16
  and RGB_GLCD libraries for Arduino and chipKit. As the number of 
  supported display modules and controllers started to increase I felt 
  it was time to make a single, universal library as it will be much 
  easier to maintain in the future.

  Basic functionality of this library was origianlly based on the 
  demo-code provided by ITead studio (for the ITDB02 modules) and 
  NKC Electronics (for the RGB GLCD module/shield).

  This library supports a number of 8bit, 16bit and serial graphic 
  displays, and will work with both Arduino and chipKit boards. For a 
  full list of tested display modules and controllers, see the 
  document UTFT_Supported_display_modules_&_controllers.pdf.

  When using 8bit and 16bit display modules there are some 
  requirements you must adhere to. These requirements can be found 
  in the document UTFT_Requirements.pdf.
  There are no special requirements when using serial displays.

  You can always find the latest version of the library at 
  http://electronics.henningkarlsen.com/

  If you make any modifications or improvements to the code, I would 
  appreciate that you share the code with me so that I might include 
  it in the next release. I can be contacted through 
  http://electronics.henningkarlsen.com/contact.php.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the CC BY-NC-SA 3.0 license.
  Please see the included documents for further information.
*/

#include "UTFT.h"
#include <pins_arduino.h>

// Include hardware-specific functions for the correct MCU
#include <avr/pgmspace.h>
#include "hardware/avr/HW_AVR.h"
#include "hardware/avr/HW_ATmega328P.h"

UTFT::UTFT()
{
}

UTFT::UTFT(byte model, int RS, int WR, int RST, int SER)
{ 
	word	dsx[] = {239, 239, 239, 239, 239, 239, 175, 175, 239, 127, 127, 239, 271, 479, 239, 239, 239, 239, 239, 239, 479, 319, 239, 175, 127, 239, 239, 319, 319, 799};
	word	dsy[] = {319, 399, 319, 319, 319, 319, 219, 219, 399, 159, 127, 319, 479, 799, 319, 319, 319, 319, 319, 319, 799, 479, 319, 219, 159, 319, 319, 479, 479, 479};
	byte	dtm[] = {16, 16, 16, 8, 8, 16, 8, SERIAL_4PIN, 16, SERIAL_5PIN, SERIAL_5PIN, 16, 16, 16, 8, 16, LATCHED_16, 8, 16, 8, 16, 16, 16, 8, SERIAL_5PIN, SERIAL_5PIN, SERIAL_4PIN, 16, 16, 16};

	disp_x_size =			dsx[model];
	disp_y_size =			dsy[model];
	display_transfer_mode =	dtm[model];
	display_model =			model;

	__p1 = RS;
	__p2 = WR;
	__p4 = RST;
	__p5 = SER;


		P_RS	= portOutputRegister(digitalPinToPort(RS));
		B_RS	= digitalPinToBitMask(RS);
		P_WR	= portOutputRegister(digitalPinToPort(WR));
		B_WR	= digitalPinToBitMask(WR);
		P_RST	= portOutputRegister(digitalPinToPort(RST));
		B_RST	= digitalPinToBitMask(RST);

}

void UTFT::LCD_Write_COM(char VL)  
{   

		cbi(P_RS, B_RS);
		LCD_Writ_Bus(0x00,VL,display_transfer_mode);

}

void UTFT::LCD_Write_DATA(char VH,char VL)
{

		sbi(P_RS, B_RS);
		LCD_Writ_Bus(VH,VL,display_transfer_mode);

}

void UTFT::LCD_Write_DATA(char VL)
{

		sbi(P_RS, B_RS);
		LCD_Writ_Bus(0x00,VL,display_transfer_mode);

}

void UTFT::LCD_Write_COM_DATA(char com1,int dat1)
{
     LCD_Write_COM(com1);
     LCD_Write_DATA(dat1>>8,dat1);
}

void UTFT::InitLCD(byte orientation)
{
	pinMode(__p1,OUTPUT);
	pinMode(__p2,OUTPUT);
	pinMode(__p3,OUTPUT);
	pinMode(__p4,OUTPUT);
		_set_direction_registers(display_transfer_mode);

	orient=orientation;
	_hw_special_init();

	sbi(P_RST, B_RST);
	delay(5); 
	cbi(P_RST, B_RST);
	delay(15);
	sbi(P_RST, B_RST);
	delay(15);

	switch(display_model)
	{
	#include "tft_drivers/ili9325c/initlcd.h"
	}

	setColor(255, 255, 255);
	setBackColor(0, 0, 0);
	cfont.font=0;
	_transparent = false;
}

void UTFT::setXY(word x1, word y1, word x2, word y2)
{
	if (orient==LANDSCAPE)
	{
		swap(word, x1, y1);
		swap(word, x2, y2)
		y1=disp_y_size-y1;
		y2=disp_y_size-y2;
		swap(word, y1, y2)
	}

	switch(display_model)
	{
	#include "tft_drivers/ili9325c/setxy.h"
	}
}

void UTFT::clrXY()
{
	if (orient==PORTRAIT)
		setXY(0,0,disp_x_size,disp_y_size);
	else
		setXY(0,0,disp_y_size,disp_x_size);
}

void UTFT::clrScr()
{
	long i;
	
	clrXY();
	sbi(P_RS, B_RS);
}

void UTFT::fillScr(byte r, byte g, byte b)
{
	word color = ((r&248)<<8 | (g&252)<<3 | (b&248)>>3);
	fillScr(color);
}

void UTFT::fillScr(word color)
{
	long i;
	char ch, cl;
	
	ch=byte(color>>8);
	cl=byte(color & 0xFF);

	clrXY();
		sbi(P_RS, B_RS);
		for (i=0; i<((disp_x_size+1)*(disp_y_size+1)); i++)
		{
			if (display_transfer_mode!=1)
				LCD_Writ_Bus(ch,cl,display_transfer_mode);
			else
			{
				LCD_Writ_Bus(1,ch,display_transfer_mode);
				LCD_Writ_Bus(1,cl,display_transfer_mode);
			}
		}
	
}

void UTFT::setColor(byte r, byte g, byte b)
{
	fch=((r&248)|g>>5);
	fcl=((g&28)<<3|b>>3);
}

void UTFT::setColor(word color)
{
	fch=byte(color>>8);
	fcl=byte(color & 0xFF);
}
/*
word UTFT::getColor()
{
	return (fch<<8) | fcl;
}
*/
void UTFT::setBackColor(byte r, byte g, byte b)
{
	bch=((r&248)|g>>5);
	bcl=((g&28)<<3|b>>3);
	_transparent=false;
}

void UTFT::setBackColor(uint32_t color)
{
	if (color==VGA_TRANSPARENT)
		_transparent=true;
	else
	{
		bch=byte(color>>8);
		bcl=byte(color & 0xFF);
		_transparent=false;
	}
}
/*
word UTFT::getBackColor()
{
	return (bch<<8) | bcl;
}
*/
void UTFT::setPixel(word color)
{
	LCD_Write_DATA((color>>8),(color&0xFF));	// rrrrrggggggbbbbb
}

void UTFT::drawPixel(int x, int y)
{
	setXY(x, y, x, y);
	setPixel((fch<<8)|fcl);
	clrXY();
}

void UTFT::drawHLine(int x, int y, int l)
{
	if (l<0)
	{
		l = -l;
		x -= l;
	}
	setXY(x, y, x+l, y);

		for (int i=0; i<l+1; i++)
		{
			LCD_Write_DATA(fch, fcl);
		}
	
	clrXY();
}

void UTFT::drawVLine(int x, int y, int l)
{
	if (l<0)
	{
		l = -l;
		y -= l;
	}
	setXY(x, y, x, y+l);

		for (int i=0; i<l+1; i++)
		{
			LCD_Write_DATA(fch, fcl);
		}

	clrXY();
}

void UTFT::printChar(byte c, int x, int y)
{
	byte i,ch;
	word j;
	word temp; 

  
	if (!_transparent)
	{

			temp=((c-cfont.offset)*((cfont.x_size/8)*cfont.y_size))+4;

			for(j=0;j<((cfont.x_size/8)*cfont.y_size);j+=(cfont.x_size/8))
			{
				setXY(x,y+(j/(cfont.x_size/8)),x+cfont.x_size-1,y+(j/(cfont.x_size/8)));
				for (int zz=(cfont.x_size/8)-1; zz>=0; zz--)
				{
					ch=pgm_read_byte(&cfont.font[temp+zz]);
					for(i=0;i<8;i++)
					{   
						if((ch&(1<<i))!=0)   
						{
							setPixel((fch<<8)|fcl);
						} 
						else
						{
							setPixel((bch<<8)|bcl);
						}   
					}
				}
				temp+=(cfont.x_size/8);
			}
		
	}
	else
	{
		temp=((c-cfont.offset)*((cfont.x_size/8)*cfont.y_size))+4;
		for(j=0;j<cfont.y_size;j++) 
		{
			for (int zz=0; zz<(cfont.x_size/8); zz++)
			{
				ch=pgm_read_byte(&cfont.font[temp+zz]); 
				for(i=0;i<8;i++)
				{   
					setXY(x+i+(zz*8),y+j,x+i+(zz*8)+1,y+j+1);
				
					if((ch&(1<<(7-i)))!=0)   
					{
						setPixel((fch<<8)|fcl);
					} 
				}
			}
			temp+=(cfont.x_size/8);
		}
	}

	clrXY();
}

void UTFT::print(char *st, int x, int y, int deg)
{
	int stl, i;

	stl = strlen(st);

	if (x==RIGHT)
		x=(disp_x_size+1)-(stl*cfont.x_size);
	if (x==CENTER)
		x=((disp_x_size+1)-(stl*cfont.x_size))/2;
	

	for (i=0; i<stl; i++)
			printChar(*st++, x + (i*(cfont.x_size)), y);

}

void UTFT::print(String st, int x, int y, int deg)
{
	char buf[st.length()+1];

	st.toCharArray(buf, st.length()+1);
	print(buf, x, y, deg);
}

void UTFT::printNumI(long num, int x, int y, int length, char filler)
{
	char buf[25];
	char st[27];
	boolean neg=false;
	int c=0, f=0;
  
	if (num==0)
	{
		if (length!=0)
		{
			for (c=0; c<(length-1); c++)
				st[c]=filler;
			st[c]=48;
			st[c+1]=0;
		}
		else
		{
			st[0]=48;
			st[1]=0;
		}
	}
	else
	{
		if (num<0)
		{
			neg=true;
			num=-num;
		}
	  
		while (num>0)
		{
			buf[c]=48+(num % 10);
			c++;
			num=(num-(num % 10))/10;
		}
		buf[c]=0;
	  
		if (neg)
		{
			st[0]=45;
		}
	  
		if (length>(c+neg))
		{
			for (int i=0; i<(length-c-neg); i++)
			{
				st[i+neg]=filler;
				f++;
			}
		}

		for (int i=0; i<c; i++)
		{
			st[i+neg+f]=buf[c-i-1];
		}
		st[c+neg+f]=0;

	}

	print(st,x,y);
}

void UTFT::printNumF(double num, byte dec, int x, int y, char divider, int length, char filler)
{
	char st[27];
	boolean neg=false;

	if (dec<1)
		dec=1;
	else if (dec>5)
		dec=5;

	if (num<0)
		neg = true;

	_convert_float(st, num, length, dec);

	if (divider != '.')
	{
		for (int i=0; i<sizeof(st); i++)
			if (st[i]=='.')
				st[i]=divider;
	}

	if (filler != ' ')
	{
		if (neg)
		{
			st[0]='-';
			for (int i=1; i<sizeof(st); i++)
				if ((st[i]==' ') || (st[i]=='-'))
					st[i]=filler;
		}
		else
		{
			for (int i=0; i<sizeof(st); i++)
				if (st[i]==' ')
					st[i]=filler;
		}
	}

	print(st,x,y);
}

void UTFT::setFont(uint8_t* font)
{
	cfont.font=font;
	cfont.x_size=fontbyte(0);
	cfont.y_size=fontbyte(1);
	cfont.offset=fontbyte(2);
	cfont.numchars=fontbyte(3);
}

uint8_t* UTFT::getFont()
{
	return cfont.font;
}

uint8_t UTFT::getFontXsize()
{
	return cfont.x_size;
}

uint8_t UTFT::getFontYsize()
{
	return cfont.y_size;
}

int UTFT::getDisplayXSize()
{
	if (orient==PORTRAIT)
		return disp_x_size+1;
	else
		return disp_y_size+1;
}

int UTFT::getDisplayYSize()
{
	if (orient==PORTRAIT)
		return disp_y_size+1;
	else
		return disp_x_size+1;
}

