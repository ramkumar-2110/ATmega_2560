/*
 * msbtolsb_1then1.c
 *
 * Created: 01-02-2026 11:46:40
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(e_dir,0xff);
	while(1)
	{
    char i=0x80;
	for(int j=0;j<8;j++)
	{
		port_write(e_dat,i);
		delay(1);
		i=(i>>1);
	}
	port_write(e_dat,0x00);
	delay(1);
	}
}