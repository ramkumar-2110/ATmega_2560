#ifndef DELAY_H
#define DELAY_H

#include <stdint.h>

#define uF_CPU 16000000UL

#define TCCR0A (*(volatile uint8_t *)0x44)
#define TCCR0B (*(volatile uint8_t *)0x45)
#define TCCR1A (*(volatile uint8_t *)0x80)
#define TCCR1B (*(volatile uint8_t *)0x81)
#define TCCR1C (*(volatile uint8_t *)0x82)
#define TCNT0 (*(volatile uint8_t *)0x46)
#define TIFR0 (*(volatile uint8_t *)0x35)
#define TCNT1H (*(volatile uint8_t *)0x84)
#define TCNT1L (*(volatile uint8_t *)0x85)
#define TIFR1 (*(volatile uint8_t *)0x36)

#define T0_CS00 0
#define T0_CS01 1
#define T0_CS02 2
#define T1_CS00 0
#define T1_CS01 1
#define T1_CS02 2


#define TOV0 0
#define TOV1 0

void delay_ms(uint32_t a);
void delay_us(uint32_t us);

#endif