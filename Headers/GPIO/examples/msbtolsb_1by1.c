/*
 * msbtolsb_1by1.c
 *
 * Created: 01-02-2026 11:02:57
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	port_config(C,0xff);
	
	while (1)
	{
		int i=0x80;
		port_write(C,0x00);
		delay(1);
		for(int j=6;j>=-1;j--)
		{
			port_write(C,i);
			delay(1);
			i+=(1<<j);
		}
	}
}