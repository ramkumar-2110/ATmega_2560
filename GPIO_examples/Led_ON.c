/*
 * Led_ON.c
 *
 * Created: 29-01-2026 16:12:34
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
    port_config(J,0xff);
    while (1) 
    {
		port_write(J,0x55);
    }
}