/*
 * 7_segment.c
 *
 * Created: 02-02-2026 15:38:03
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(a_dir,0xff);
	while(1)
	{
	for(uint8_t i=0;i<10;i++)
    {
		for(uint8_t j=0;j<10;j++)
		{
					int n=0;
					while (n<10)
					{
						port_write(a_dat,0x01);
						segment_7(k_dat,j);
						delay(0.05);
						port_write(a_dat,0x02);
						segment_7(k_dat,i);
						delay(0.05);
						n++;
					}
		}
	}
    }
}