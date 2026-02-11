/*
 * 7_segment_4.c
 *
 * Created: 02-02-2026 22:48:22
 * Author : RAMKUMAR
 */ 

#include "gpio.h"
#include "seven_segment.h"


int main(void)
{
	port_config(A,0xff);
	/*pin_config(A,1,HIGH);
	pin_config(A,2,HIGH);
	pin_config(A,3,HIGH);
	pin_config(A,4,HIGH);*/
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
						port_write(A,0x0e);
						/*port_write(A,0X0F);
						pin_write(A,1,LOW);*/
						segment7_1(K,x);
						delay(0.03);
						port_write(A,0x0d);
						/*port_write(A,0X0F);
						pin_write(A,2,LOW);*/
						segment7_1(K,y);
						delay(0.03);
						port_write(A,0x0b);
						/*port_write(A,0X0F);
						pin_write(A,3,LOW);*/
						segment7_1(K,j);
						delay(0.03);
						port_write(A,0x07);
						/*port_write(A,0X0F);
						pin_write(A,4,LOW);*/
						segment_dot(K,k);
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
						port_write(A,0x0e);
						/*port_write(A,0X0F);
						pin_write(A,1,LOW);*/
						segment7_1(K,x);
						delay(0.03);
						if(a==2)
						{
							port_write(A,0x0d);
							/*port_write(A,0X0F);
							pin_write(A,2,LOW);*/
							segment_dot(K,y);
						}
						else{
							port_write(A,0x0d);
							/*port_write(A,0X0F);
							pin_write(A,2,LOW);*/
							segment7_1(K,y);
						}
						delay(0.03);
						if(a==1)
						{
							port_write(A,0x0b);
							/*port_write(A,0X0F);
							pin_write(A,3,LOW);*/
							segment_dot(K,j);
						}
						else{
							port_write(A,0x0b);
							/*port_write(A,0X0F);
							pin_write(A,3,LOW);*/
							segment7_1(K,j);
						}
						delay(0.03);
						port_write(A,0x07);
						/*port_write(A,0X0F);
						pin_write(A,4,LOW);*/
						segment7_1(K,k);
						delay(0.03);
						n++;
					}
				}
			}			
		}
		
	}
}