/*
 * LED blink.c
 *
 * Created: 31-01-2026 14:36:54
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_k(0xff);
    while (1) 
    {
		port_k(0x01);
		delay(1);
		port_k(0x00);
		delay(1);
		
    }
}

