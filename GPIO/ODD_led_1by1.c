/*
 * ODD_led_1by1.c
 *
 * Created: 01-02-2026 10:30:13
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
    ddr_l(0xff);
    
    while (1)
    {
	    int i=0;
	    for(int j=0;j<=4;j++)
	    {
		    port_l(i);
		    delay(1);
		    i=(i<<2)+1;
	    }
	    
    }
}

