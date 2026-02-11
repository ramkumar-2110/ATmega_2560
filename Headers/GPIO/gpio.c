#include "gpio.h"

void port_config(uint8_t x,uint8_t value)
{
	*ddr[x]=value;
}
void pin_config(uint8_t x,uint8_t i,uint8_t value)
{
	i--;
	if(value==1)
	*ddr[x]|=(1<<i);
	if(value==0)
	*ddr[x]&=(~(1<<i));
}
void port_write(uint8_t x,uint8_t value)
{
	*port[x]=value;
}
void pin_write(uint8_t x,uint8_t i,uint8_t value)
{
	i--;
	if(value==1)
	*port[x]|=(1<<i);
	if(value==0)
	*port[x]&=(~(1<<i));
}
uint8_t port_read(uint8_t x)
{
	return *pin[x];
}
uint8_t pin_read(uint8_t x,uint8_t i)
{
	i--;
	if(*pin[x]&(1<<i))return 1;
	return 0;
}
void delay(float a)
{
	for(volatile float i=0;i<a*1000;i++)
	{
		
	}
}