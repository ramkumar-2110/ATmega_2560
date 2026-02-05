/*
 * 8_led_chaser.c
 *
 * Created: 31-01-2026 21:54:49
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
    
    port_write(d_dir,0xff);
    
    while (1)
    {
	    uint8_t i=1;
	    for(int j=0;j<8;j++)
	    {
		    port_write(d_dat,i);
		    delay(1);
		    i=(i<<1);
	    }
	    
    }
}