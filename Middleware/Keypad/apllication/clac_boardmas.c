/*
 * clac_boardmas.c
 *
 * Created: 10-02-2026 08:47:51
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
		volatile char a,o[100];
		volatile long long s[100];
		long long o1=0,s1=0,n=0,f=0;
			while(s1<100)
			{
				n=0;
				while(1){
				a=keypad_scan(K);
				segment7_1(H,a);
				delay(1);
				port_write(H,0x00);
				if(a=='+'||a=='-'||a=='*'||a=='/'||a=='=')
				{
					segment_symbol(H,a);
					delay(0.5);
					port_write(H,0x00);
					break;
				   }
					n*=10;
					n+=a;
				}
				s[s1]=n;
				s1++;
				if(a=='+'||a=='-'||a=='*'||a=='/'){o[o1]=a;
					o1++;}
				if(a=='=')
					break;
			}
			while(o1>0)
			{
				f=0;
				for(int i=0;i<o1;i++)
				{
					if(o[i]=='/'||o[i]=='*')
					{
						if(o[i]=='/') s[i]=s[i]/s[i+1];
						else s[i]=s[i]*s[i+1];
						for(int j=i+1;j<s1-1;j++)
						{
							s[j]=s[j+1];
						}
						for(int j=i;j<o1-1;j++)
						{
							o[j]=o[j+1];
						}
						o1--;
						s1--;
						if(1){
							f=1;
						break;}
					}
				}
				if(f==1){
				continue;}
				for(int i=0;i<o1;i++)
				{
					if(o[i]=='+'||o[i]=='-')
					{
						if(o[i]=='+') s[i]=s[i]+s[i+1];
						else s[i]=s[i]-s[i+1];
						for(int j=i+1;j<s1-1;j++)
						{
							s[j]=s[j+1];
						}
						for(int j=i;j<o1-1;j++)
						{
							o[j]=o[j+1];
						}
						o1--;
						s1--;
						break;
					}
				}
			}
	segment7_4(H,J,s[0]);
	}
}