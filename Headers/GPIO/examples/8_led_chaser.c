/*
 * 8_led_chaser.c
 *
 * Created: 31-01-2026 21:54:49
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\Headers\GPIO\gpio.h"


int main(void)
{
    
    port_config(D,0xff);
    
    while (1)
    {
	    uint8_t i=1;
	    for(int j=0;j<8;j++)
	    {
		    port_write(D,i);
		    delay(1);
		    i=(i<<1);
	    }
	    
    }
}