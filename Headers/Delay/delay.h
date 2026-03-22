#ifndef DELAY_H
#define DELAY_H

#include <stdint.h>

/* Timer0 Registers */
#define TCCR0A (*(volatile uint8_t *)0x44)
#define TCCR0B (*(volatile uint8_t *)0x45)
#define TCNT0  (*(volatile uint8_t *)0x46)
#define TIFR0  (*(volatile uint8_t *)0x35)

/* Bit Definitions */
#define TOV0   0   // Timer0 Overflow Flag

/* Function Prototype */
void delay_ms(uint32_t a);

#endif