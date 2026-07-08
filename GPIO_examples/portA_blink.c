/*
 * portA_blink.c
 *
 * Created: 31-01-2026 20:20:00
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
   port_config(A,0xff);
    while (1) 
    {
		port_write(A,0xff);
		delay(1);
		port_write(A,0x00);
		delay(1);
    }
}