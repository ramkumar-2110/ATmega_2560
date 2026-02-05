/*
 * blink_2_rows.c
 *
 * Created: 01-02-2026 20:22:34
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(k_dir,0xff);
	port_write(f_dir,0xff);
    while (1) 
    {
		port_write(k_dat,0xff);
		port_write(f_dat,0x00);
		delay(1);
		port_write(k_dat,0x00);
		port_write(f_dat,0xff);
		delay(1);
    }
}