/*
 * button_read.c
 *
 * Created: 04-02-2026 11:41:06
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(a_dir,0xff);
	port_write(b_dir,0x00);
	port_write(b_dat,0xff);
    while (1) 
    {
		if(port_read(b_pin)==0xf7)
		port_write(a_dat,0xff);
		else
		port_write(b_dat,0x00);
    }
}