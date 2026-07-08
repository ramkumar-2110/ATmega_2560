/*
 * 8_led's_one_by_one.c
 *
 * Created: 31-01-2026 21:12:35
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
    port_config(H,0xff);
	
    while (1) 
    {
		uint8_t i=0;
		for(int j=0;j<=8;j++)
		{
			port_write(H,i);
			delay(1);
			i=(i<<1)+1;
		}
		
    }
}