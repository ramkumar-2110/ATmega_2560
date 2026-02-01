/*
 * msbtolsb_1by1.c
 *
 * Created: 01-02-2026 11:02:57
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_c(0xff);
	
	while (1)
	{
		int i=0x80;
		port_c(0x00);
		delay(1);
		for(int j=6;j>=-1;j--)
		{
			port_c(i);
			delay(1);
			i+=(1<<j);
		}
	}
}


