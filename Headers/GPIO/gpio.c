#include "F:\Atmega\Headers\GPIO\gpio.h"

/***** PORT CONFIG *****/
void port_config(port_index_t x,uint8_t value)
{
    *ddr[x] = value; 
}

/***** PIN CONFIG *****/
void pin_config(port_index_t x,uint8_t i,uint8_t value) 
{
    if(value)
        *ddr[x] |= (1<<i);
    else
        *ddr[x] &= ~(1<<i);
}

/***** PORT WRITE *****/
void port_write(port_index_t x,uint8_t value)
{
    *port[x] = value;
}

/***** PIN WRITE *****/
void pin_write(port_index_t x,uint8_t i,uint8_t value)
{
    if(value)
        *port[x] |= (1<<i);
    else
        *port[x] &= ~(1<<i);
}

/***** PORT READ *****/
uint8_t port_read(port_index_t x)
{
    return *pin[x];
}

/***** PIN READ *****/
uint8_t pin_read(port_index_t x,uint8_t i)
{
    return ((*pin[x] & (1<<i)) != 0);
}