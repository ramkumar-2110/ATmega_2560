/*
 * LED blink.c
 *
 * Created: 31-01-2026 14:36:54
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(k_dir,0xff);
    while (1) 
    {
		port_write(k_dat,0x01);
		delay(1);
		port_write(k_dat,0x00);
		delay(1);
		
    }
}