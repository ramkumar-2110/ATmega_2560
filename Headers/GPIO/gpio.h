#ifndef GPIO_H
#define GPIO_H

#include "define.h"

void port_config(uint8_t x,uint8_t value);
void pin_config(uint8_t x,uint8_t i,uint8_t value);

void port_write(uint8_t x,uint8_t value);
void pin_write(uint8_t x,uint8_t i,uint8_t value);

uint8_t port_read(uint8_t x);
uint8_t pin_read(uint8_t x,uint8_t i);

void delay(float a);

#endif
