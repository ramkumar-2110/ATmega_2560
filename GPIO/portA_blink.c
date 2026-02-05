/*
 * portA_blink.c
 *
 * Created: 31-01-2026 20:20:00
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
   port_write(a_dir,0xff);
    while (1) 
    {
		port_write(a_dat,0xff);
		delay(1);
		port_write(a_dat,0x00);
		delay(1);
    }
}