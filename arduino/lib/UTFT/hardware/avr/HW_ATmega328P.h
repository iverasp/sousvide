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
}

void UTFT::_set_direction_registers(byte mode)
{
	//DDRD = 0xFF;
    DDRB = 0xFF; // using all pins on port B
    // additionally use these two pins on port D
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
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
