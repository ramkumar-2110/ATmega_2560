/*
 * INC_order_glow.c
 *
 * Created: 01-02-2026 18:23:57
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	
	port_write(b_dir,0xff);
	
	while (1)
	{
		int j=1;
		while(j!=0x1ff)
		{
			for(int i=0;i<=j;i=(i<<1)+1)
			{
				port_write(b_dat,i);
				delay(1);
			}
			j=(j<<1)+1;
		}
	}
}
/*while(i!=0xff)
		{
			port_write(b_dat,0x00);
			delay(1);
			port_write(b_dat,i);
			delay(1);
			i=(i<<1)+1;
		}
		port_write(b_dat,0x00);
		delay(1);
		port_write(b_dat,i);
		delay(1);*/