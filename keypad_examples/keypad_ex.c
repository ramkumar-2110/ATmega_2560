/*
 * keypad_ex.c
 *
 * Created: 06-02-2026 14:15:28
 * Author : RAMKUMAR
 */ 

#include "gpio.h"
#include "seven_segment.h"
#include "keypad.h"

int main()
{
	port_config(H,0xff);
	port_config(K,0xf0);
	port_write(H,0x00);
	volatile char a;
    while (1) 
	{
			a=keypad_scan(K);
			segment_7(H,a);
			segment_symbol(H,a);
			delay(2);
			port_write(H,0x00);
	}
}