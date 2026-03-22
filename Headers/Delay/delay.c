#include "F:\Atmega\Headers\Delay\delay.h"

void delay_ms(uint32_t a)
{
    TCCR0A = 0x00;      // Normal mode
    TCCR0B = 0x03;      // Prescaler = 64

    while(a)
    {
        TCNT0 = 6;      // Preload value for 1 ms delay
        while(!(TIFR0 & (1<<TOV0)));  // Wait for overflow
        TIFR0 = (1<<TOV0);            // Clear overflow flag
        a--;
    }
}