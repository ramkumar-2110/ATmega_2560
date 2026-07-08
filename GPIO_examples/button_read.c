/*
 * button_read.c
 *
 * Created: 04-02-2026 11:41:06
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	port_config(A,0xff);
	port_config(B,0x00);
	port_write(B,0xff);
    while (1) 
    {
		if(port_read(B)==0xf7)
		port_write(A,0xff);
		else
		port_write(A,0x00);
    }
}