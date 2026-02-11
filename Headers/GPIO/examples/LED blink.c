/*
 * LED blink.c
 *
 * Created: 31-01-2026 14:36:54
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	port_config(K,0xff);
    while (1) 
    {
		port_write(K,0x01);
		delay(1);
		port_write(K,0x00);
		delay(1);
		
    }
}