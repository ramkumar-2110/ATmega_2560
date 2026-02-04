/*
 * 7_segment_4.c
 *
 * Created: 02-02-2026 22:48:22
 * Author : RAMKUMAR
 */ 

#include "gpio.h"


int main(void)
{
	ddr_a(0xff);
	while(1)
	{
		for(int a=0;a<3;a++)
		{
			if(a==0)
			{
				for(int i=0;i<10000;i++)
				{
					int x,y,j,k,m;
					m=i;
					x=m%10;
					m/=10;
					y=m%10;
					m/=10;
					j=m%10;
					m/=10;
					k=m%10;
					int n=0;
					while (n<1)
					{
						port_a(0x0e);
						segment_7(x);
						delay(0.03);
						port_a(0x0d);
						segment_7(y);
						delay(0.03);
						port_a(0x0b);
						segment_7(j);
						delay(0.03);
						port_a(0x07);
						segment_dot(k);
						delay(0.03);
						n++;
					}
				}
			}
			if(a>0)
			{
				for(int i=1000;i<10000;i++)
				{
					int x,y,j,k,m;
					m=i;
					x=m%10;
					m/=10;
					y=m%10;
					m/=10;
					j=m%10;
					m/=10;
					k=m%10;
					int n=0;
					while (n<10)
					{
						port_a(0x0e);
						segment_7(x);
						delay(0.03);
						if(a==2)
						{
							port_a(0x0d);
							segment_dot(y);
						}
						else{
							port_a(0x0d);
							segment_7(y);
						}
						delay(0.03);
						if(a==1)
						{
							port_a(0x0b);
							segment_dot(j);
						}
						else{
							port_a(0x0b);
							segment_7(j);
						}
						delay(0.03);
						port_a(0x07);
						segment_7(k);
						delay(0.03);
						n++;
					}
				}
			}			
		}
		
	}
}