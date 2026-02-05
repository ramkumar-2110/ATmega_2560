/*
 * more_than_1_switch.c
 *
 * Created: 05-02-2026 09:24:50
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\define.h"


int main(void)
{
    port_write(a_dir,0xff);
	port_write(b_dir,0x00);
	port_write(b_dat,0xff);
    while (1) 
    {
		volatile int n=0;
		while(1)
		{
			if(port_read(b_pin)==0xfe)
			{
				break;
			}
		}
			while(n<100000)
			{
			if(port_read(b_pin)==0xfd)
			{
				port_write(a_dat,0xff);
				delay(2);
				port_write(a_dat,0x00);
				break;
			}
			n++;
			}
    }
}

