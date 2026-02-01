/*
 * led_random.c
 *
 * Created: 01-02-2026 17:56:17
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_h(0xff);
    while (1) 
    {
		int r[]={0x01,0x04,0x02,0x08,0x10,0x40,0x20,0x80};
		for(int i=0;i<8;i++)
		{
			port_h(r[i]);
			delay(1);
		}
    }
}

