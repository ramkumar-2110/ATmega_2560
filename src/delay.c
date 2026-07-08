#include"delay.h"

void delay_ms(uint32_t ms)
{
    /* Normal mode */
    TCCR0A = 0x00;

    /* Prescaler = 64 */
    TCCR0B = (1 << T0_CS00) | (1 << T0_CS01);

    while(ms--)
    {
		TIFR0 |= (1 << TOV0);  // clear first
        TCNT0 = 6;  // calculated value

        while(!(TIFR0 & (1 << TOV0)));  // wait for overflow
    }
}

void delay_us(uint32_t us)
{
    /* Normal mode */
    TCCR1A = 0x00;

    /* Prescaler = 8 */
    TCCR1B = (1 << T1_CS01);

    while(us--)
    {
		TIFR1 |= (1 << TOV1);  // clear first
        TCNT1H = 254;

        while(!(TIFR1 & (1 << TOV1)));
    }
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
// asm("nop");
}