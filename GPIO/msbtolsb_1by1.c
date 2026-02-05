/*
 * msbtolsb_1by1.c
 *
 * Created: 01-02-2026 11:02:57
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(c_dir,0xff);
	
	while (1)
	{
		int i=0x80;
		port_write(c_dat,0x00);
		delay(1);
		for(int j=6;j>=-1;j--)
		{
			port_write(c_dat,i);
			delay(1);
			i+=(1<<j);
		}
	}
}