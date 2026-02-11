#include "keypad.h"

char keypad_scan(uint8_t x)
{
	while(1)
	{
		uint8_t a=0;
		for(int i=0;i<4;i++)
		{
			port_write(x,(~(1<<(i+4))));
			a=(port_read(x))&(0x0f);
			if(a==0x07)
			{
				if(i==1)return i-1;
				if(i==2)return '=';
				if(i==3)return '+';
				delay(0.1);
			}
			if(a==0x0b)
			{
				if(i<3)return i+1;
				if(i==3)return '-';
				delay(0.1);
			}
			if(a==0x0d)
			{
				if(i<3)return i+4;
				if(i==3)return '*';
				delay(0.1);
			}
			if(a==0x0e)
			{
				if(i<3)return i+7;
				if(i==3)return '/';
				delay(0.1);
			}
		}
	}
}