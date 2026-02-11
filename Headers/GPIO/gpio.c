#include "gpio.h"

/**arguments explanation 
  x-->PORT name (A to L except I)
  
  value-->use INPUT or (0x00) for configuring port as input
          use OUTPUT or (0xff) for configuring port as output
		  for custom configuration use custom value you want
		  use HIGH or (1) for configuring pin as output 
		  use LOW or (0) for configuring pin as input
		  
  i-->pin number (1 to 8) **/

/*****function for configure a PORT as INPUT or OUTPUT*****/

void port_config(uint8_t x,uint8_t value)
{
	*ddr[x]=value; 
}

/*****function for configure a PIN as INPUT or OUTPUT*****/

void pin_config(uint8_t x,uint8_t i,uint8_t value) 
{
	i--;
	if(value==1)         
	*ddr[x]|=(1<<i);
	if(value==0)
	*ddr[x]&=(~(1<<i));
}

/*****function for write a given value in PORT register*****/

void port_write(uint8_t x,uint8_t value)
{
	*port[x]=value;
}

/*****function for write a given value in a particular bit in a PORT register*****/

void pin_write(uint8_t x,uint8_t i,uint8_t value)
{
	i--;
	if(value==1)
	*port[x]|=(1<<i);
	if(value==0)
	*port[x]&=(~(1<<i));
}

/*****function for read a given PIN register*****/

uint8_t port_read(uint8_t x)
{
	return *pin[x];
}

/*****function for read a particular given pin in a given PIN register*****/

uint8_t pin_read(uint8_t x,uint8_t i)
{
	i--;
	if(*pin[x]&(1<<i))return 1;
	return 0;
}

/*****function for delay*****/

void delay(float a)
{
	for(volatile float i=0;i<a*1000;i++)
	{
		
	}
}