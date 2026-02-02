/*
 * 7_segment.c
 *
 * Created: 02-02-2026 15:38:03
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_l(0xff);
	while(1)
	{
	for(int i=0;i<10;i++)
    {
		for(int j=0;j<10;j++)
		{
			int n=0;
			while (n<25)
			{
				port_l(0x02);
				segment_7(j);
				delay(0.05);
				port_l(0x01);
				segment_7(i);
				delay(0.05);
				n++;
			}
		}
	}
    }
}

