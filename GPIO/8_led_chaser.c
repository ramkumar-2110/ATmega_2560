/*
 * 8_led_chaser.c
 *
 * Created: 31-01-2026 21:54:49
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
    
    ddr_d(0xff);
    
    while (1)
    {
	    uint8_t i=1;
	    for(int j=0;j<8;j++)
	    {
		    port_d(i);
		    delay(1);
		    i=(i<<1);
	    }
	    
    }
}

