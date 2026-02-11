/*
 * msbtolsb_1then1.c
 *
 * Created: 01-02-2026 11:46:40
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	port_config(E,0xff);
	while(1)
	{
    char i=0x80;
	for(int j=0;j<8;j++)
	{
		port_write(E,i);
		delay(1);
		i=(i>>1);
	}
	port_write(E,0x00);
	delay(1);
	}
}