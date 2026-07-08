/*
 * INC_order_glow.c
 *
 * Created: 01-02-2026 18:23:57
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
	
	port_config(B,0xff);
	
	while (1)
	{
		int j=1;
		while(j!=0x1ff)
		{
			for(int i=0;i<=j;i=(i<<1)+1)
			{
				port_write(B,i);
				delay(1);
			}
			j=(j<<1)+1;
		}
	}
}
/*while(i!=0xff)
		{
			port_write(B,0x00);
			delay(1);
			port_write(B,i);
			delay(1);
			i=(i<<1)+1;
		}
		port_write(B,0x00);
		delay(1);
		port_write(B,i);
		delay(1);*/