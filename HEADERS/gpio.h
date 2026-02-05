#include "define.h"

void port_write(volatile uint8_t* address,uint8_t value)
{
	*address=value;
}
char port_read(volatile uint8_t* address)
{
	return *address;
}
void delay(float a)
{
	for(volatile float i=0;i<a*1000;i++)
	{
		
	}
}
void segment_7(uint8_t i)
{
	char ss[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
			*k_dat=ss[i];
}
void segment_dot(uint8_t i)
{
	char ss[]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};
	*k_dat=ss[i];
}