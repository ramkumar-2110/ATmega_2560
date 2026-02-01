/*
 * 8_led's_one_by_one.c
 *
 * Created: 31-01-2026 21:12:35
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
    ddr_h(0xff);
	
    while (1) 
    {
		int i=0;
		for(int j=0;j<=8;j++)
		{
			port_h(i);
			delay(1);
			i=(i<<1)+1;
		}
		
    }
}

