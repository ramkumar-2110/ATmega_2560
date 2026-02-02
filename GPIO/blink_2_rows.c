/*
 * blink_2_rows.c
 *
 * Created: 01-02-2026 20:22:34
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_k(0xff);
	ddr_f(0xff);
    while (1) 
    {
		port_f(0xff);
		port_k(0x00);
		delay(10);
		port_f(0x00);
		port_k(0xff);
		delay(10);
    }
}