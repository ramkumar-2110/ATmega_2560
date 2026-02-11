/*
 * 7_segment.c
 *
 * Created: 02-02-2026 15:38:03
 * Author : RAMKUMAR
 */ 

#include "gpio.h"
#include "seven_segment.h"

int main(void)
{
	port_config(K,OUTPUT);
	port_config(A,OUTPUT);
	while(1)
	{
	for(uint8_t i=0;i<10;i++)
    {
		for(uint8_t j=0;j<10;j++)
		{
					int n=0;
					while (n<10)
					{
						port_write(A,0x01);
						segment7_1(K,j);
						delay(0.05);
						port_write(A,0x02);
						segment7_1(K,i);
						delay(0.05);
						n++;
					}
		}
	}
    }
}