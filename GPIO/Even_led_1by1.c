/*
 * Even_led_1by1.c
 *
 * Created: 01-02-2026 09:57:27
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
    ddr_f(0xff);
    
    while (1)
    {
	    int i=0;
	    for(int j=0;j<=4;j++)
	    {
		    port_f(i);
		    delay(1);
		    i=(i<<2)+2;
	    }
	    
    }
}

