/*
 * portA_blink.c
 *
 * Created: 31-01-2026 20:20:00
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
   ddr_a(0xff);
    while (1) 
    {
		port_a(0xff);
		delay(1);
		port_a(0x00);
		delay(1);
    }
}

