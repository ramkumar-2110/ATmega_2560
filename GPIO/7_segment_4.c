/*
 * 7_segment_4.c
 *
 * Created: 02-02-2026 22:48:22
 * Author : RAMKUMAR
 */ 

#include "F:\Atmega\HEADERS\gpio.h"


int main(void)
{
	port_write(a_dir,0xff);
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
						port_write(a_dat,0x0e);
						segment_7(k_dat,x);
						delay(0.03);
						port_write(a_dat,0x0d);
						segment_7(k_dat,y);
						delay(0.03);
						port_write(a_dat,0x0b);
						segment_7(k_dat,j);
						delay(0.03);
						port_write(a_dat,0x07);
						segment_dot(k_dat,k);
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
						port_write(a_dat,0x0e);
						segment_7(k_dat,x);
						delay(0.03);
						if(a==2)
						{
							port_write(a_dat,0x0d);
							segment_dot(k_dat,y);
						}
						else{
							port_write(a_dat,0x0d);
							segment_7(k_dat,y);
						}
						delay(0.03);
						if(a==1)
						{
							port_write(a_dat,0x0b);
							segment_dot(k_dat,j);
						}
						else{
							port_write(a_dat,0x0b);
							segment_7(k_dat,j);
						}
						delay(0.03);
						port_write(a_dat,0x07);
						segment_7(k_dat,k);
						delay(0.03);
						n++;
					}
				}
			}			
		}
		
	}
}