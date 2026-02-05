/*
 * 8led's_up_down.c
 *
 * Created: 01-02-2026 15:11:57
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(c_dir,0xff);
	while(1)
	{
    char i=0;
	for(int j=0;j<=8;j++)
	{
		port_write(c_dat,i);
		delay(1);
		i=(1<<j);
	}
	port_write(c_dat,0x00);
	delay(1);
	for(int j=7;j>=-1;j--)
	{
		port_write(c_dat,i);
		delay(1);
		i=(1<<j);
	}
	}
}