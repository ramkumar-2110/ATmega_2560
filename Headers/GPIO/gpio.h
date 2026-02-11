#ifndef GPIO_H //To exclude multiple includes of gpio.h 
#define GPIO_H //Include gpio.h when it still not included

#include "define.h" //To use gpio.h in main.c file must include define.h as well

/*****declaration of functions*****/

void port_config(uint8_t x,uint8_t value); 
void pin_config(uint8_t x,uint8_t i,uint8_t value);

void port_write(uint8_t x,uint8_t value);
void pin_write(uint8_t x,uint8_t i,uint8_t value);

uint8_t port_read(uint8_t x);
uint8_t pin_read(uint8_t x,uint8_t i);

void delay(float a);

#endif //end the if
