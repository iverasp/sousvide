// *** Hardwarespecific functions ***
/* Modified by Iver Egge to work with different pins
on the MCU. The connection to the LCD becomes as follows:
DB0 -> pin 13
DB1 -> pin 12
DB2 -> pin 11
DB3 -> pin 10
DB4 -> pin 9
DB5 -> pin 8
DB6 -> pin 7
DB7 -> pin 6
*/

void UTFT::_hw_special_init()
{
}

void UTFT::LCD_Writ_Bus(char VH,char VL, byte mode)
{   
	switch (mode)
	{
	case 1:
		if (display_serial_mode==SERIAL_4PIN)
		{
		if (VH==1)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		}
		else
		{
		if (VH==1)
			sbi(P_RS, B_RS);
		else
			cbi(P_RS, B_RS);
		}

		if (VL & 0x80)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x40)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x20)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x10)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x08)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x04)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x02)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		if (VL & 0x01)
			sbi(P_SDA, B_SDA);
		else
			cbi(P_SDA, B_SDA);
		pulse_low(P_SCL, B_SCL);
		break;
	case 8:
		//PORTD = VH;
        if (VH & 0x01)
            PORTB |= (1<<5);
        else
            PORTB &= ~(1<<5);
        if (VH & 0x02)
            PORTB |= (1<<4);
        else
            PORTB &= ~(1<<4);
        if (VH & 0x04)
            PORTB |= (1<<3);
        else
            PORTB &= ~(1<<3);
        if (VH & 0x08)
            PORTB |= (1<<2);
        else
            PORTB &= ~(1<<2);
        if (VH & 0x10)
            PORTB |= (1<<1);
        else
            PORTB &= ~(1<<1);
        if (VH & 0x20)
            PORTB |= (1<<0);
        else
            PORTB &= ~(1<<0);
        if (VH & 0x40)
            PORTD |= (1<<7);
        else
            PORTD &= ~(1<<7);
        if (VH & 0x80)
            PORTD |= (1<<6);
        else
            PORTD &= ~(1<<6);
         
		pulse_low(P_WR, B_WR);

		//PORTD = VL;
        if (VL & 0x01)
            PORTB |= (1<<5);
        else
            PORTB &= ~(1<<5);
        if (VL & 0x02)
            PORTB |= (1<<4);
        else
            PORTB &= ~(1<<4);
        if (VL & 0x04)
            PORTB |= (1<<3);
        else
            PORTB &= ~(1<<3);
        if (VL & 0x08)
            PORTB |= (1<<2);
        else
            PORTB &= ~(1<<2);
        if (VL & 0x10)
            PORTB |= (1<<1);
        else
            PORTB &= ~(1<<1);
        if (VL & 0x20)
            PORTB |= (1<<0);
        else
            PORTB &= ~(1<<0);
        if (VL & 0x40)
            PORTD |= (1<<7);
        else
            PORTD &= ~(1<<7);
        if (VL & 0x80)
            PORTD |= (1<<6);
        else
            PORTD &= ~(1<<6); 

		pulse_low(P_WR, B_WR);
		break;
	case 16:
		PORTD = VH;
		cport(PORTC, 0xFC);
		sport(PORTC, (VL>>6) & 0x03);
		PORTB =  VL & 0x3F;
		pulse_low(P_WR, B_WR);
		break;
	case LATCHED_16:
		PORTD = VH;
		cbi(P_ALE, B_ALE);
		pulse_high(P_ALE, B_ALE);
		cbi(P_CS, B_CS);
		PORTD =  VL;
		pulse_low(P_WR, B_WR);
		sbi(P_CS, B_CS);
		break;
	}
}

void UTFT::_set_direction_registers(byte mode)
{
	//DDRD = 0xFF;
    DDRB = 0xFF; // using all pins on port B
    // additionally use these two pins on port D
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);

	if (mode==16)
	{
		DDRB |= 0x3F;
		DDRC |= 0x03;
	}

}

void UTFT::_fast_fill_16(int ch, int cl, long pix)
{
	long blocks;

	PORTD = ch;
	cport(PORTC, 0xFC);
	sport(PORTC, (cl>>6) & 0x03);
	PORTB =  cl & 0x3F;

	blocks = pix/16;
	for (int i=0; i<blocks; i++)
	{
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);
	}
	if ((pix % 16) != 0)
		for (int i=0; i<(pix % 16)+1; i++)
		{
			pulse_low(P_WR, B_WR);
		}
}

void UTFT::_fast_fill_8(int ch, long pix)
{
	long blocks;

	PORTD = ch;

	blocks = pix/16;
	for (int i=0; i<blocks; i++)
	{
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
	}
	if ((pix % 16) != 0)
		for (int i=0; i<(pix % 16)+1; i++)
		{
			pulse_low(P_WR, B_WR);pulse_low(P_WR, B_WR);
		}
}
