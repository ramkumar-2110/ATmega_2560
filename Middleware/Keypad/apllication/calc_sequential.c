/*
 * calculator.c
 *
 * Created: 09-02-2026 18:35:51
 * Author : RAMKUMAR
 */ 

#include "gpio.h"
#include "seven_segment.h"
#include "keypad.h"

int main()
{
	port_config(H,0xff);
	port_config(K,0xf0);
	port_config(J,0xff);
	while (1)
	{
		port_write(H,0x00);
		port_write(J,0xfe);
		volatile char a;
		unsigned long long int n1=0,n2=0,s;//,n
		while(1)
		{
			a=keypad_scan(K);
			if(a=='+'||a=='-'||a=='*'||a=='/'||a=='='){
				segment_symbol(H,a);
				delay(0.5);
				port_write(H,0x00);
				break;}
			segment7_1(H,a);
			delay(0.5);
			port_write(H,0x00);
			n1*=10;
			n1+=a;
			delay(1);
		}
		delay(1);
		s=a;
		if(s=='=')
		{
			while(n1>0)
			{
				segment7_1(H,n1%10);
				delay(2);
				n1/=10;
			}
			continue;
		}
		while(1)
		{
			n2=0;
			while(1)
			{
				a=keypad_scan(K);
				if(a=='+'||a=='-'||a=='*'||a=='/'||a=='='){
					segment_symbol(H,a);
					delay(0.5);
					port_write(H,0x00);
				break;}
				segment7_1(H,a);
				delay(0.5);
				port_write(H,0x00);
				n2*=10;
				n2+=a;
				delay(1);
			}
			switch(s)
			{
				case '+':
				n1+=n2;
				break;
				case '-':
				n1-=n2;
				break;
				case '*':
				n1*=n2;
				break;
				case '/':
				n1/=n2;
				break;
			}
			s=a;
			if(s=='=')break;
			delay(1);
		}
		segment7_4(H,J,n1);
		}
}