/*
 * ODD_led_1by1.c
 *
 * Created: 01-02-2026 10:30:13
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
    port_write(l_dir,0xff);
    
    while (1)
    {
	    uint8_t i=0;
	    for(int j=0;j<=4;j++)
	    {
		    port_write(l_dat,i);
		    delay(1);
		    i=(i<<2)+1;
	    }
	    
    }
}