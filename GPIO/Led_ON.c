/*
 * Led_ON.c
 *
 * Created: 29-01-2026 16:12:34
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
    
    while (1) 
    {
		ddr_j(0xff);
		port_j(0x02);
    }
}

