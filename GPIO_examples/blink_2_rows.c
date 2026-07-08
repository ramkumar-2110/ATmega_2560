/*
 * blink_2_rows.c
 *
 * Created: 01-02-2026 20:22:34
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	port_config(K,0xff);
	port_config(F,0xff);
    while (1) 
    {
		port_write(K,0xff);
		port_write(F,0x00);
		delay(1);
		port_write(K,0x00);
		port_write(F,0xff);
		delay(1);
    }
}