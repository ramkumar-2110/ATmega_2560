/*
 * more_than_1_switch.c
 *
 * Created: 05-02-2026 09:24:50
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
    port_config(A,0xff);
	port_config(B,0x00);
	port_write(B,0xff);
    while (1) 
    {
		volatile int n=0;
		while(1)
		{
			if(port_read(B)==0xfe)
			{
				break;
			}
		}
			while(n<100000)
			{
			if(port_read(B)==0xfd)
			{
				port_write(A,0xff);
				delay(2);
				port_write(A,0x00);
				break;
			}
			n++;
			}
    }
}

