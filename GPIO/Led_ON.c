/*
 * Led_ON.c
 *
 * Created: 29-01-2026 16:12:34
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
    
    while (1) 
    {
		port_write(j_dir,0xff);
		port_write(j_dat,0x55);
    }
}