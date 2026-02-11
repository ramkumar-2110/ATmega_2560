#include "seven_segment.h"
#include "gpio.h"

/**argument explanation 
 x-->seven segment connected port name
 i-->value(0 to 9)
 y-->port for use as select**/


/*****function for single seven segment*****/

void segment7_1(uint8_t x,uint64_t i)
{
	char ss[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	*port[x]=ss[i];
}

/*****function for 2 seven segment*****/

void segment7_2(uint8_t x,uint8_t y,uint64_t i)
{
	char ss[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	*port[y]=0xff;
	int n=0;
	while(n<200)
	{
		*port[y]=0xfe;
		*port[x]=ss[i%10];
		delay(0.03);
		*port[y]=0xfd;
		*port[x]=ss[i/10];
		delay(0.03);
		n++;
	}
}

/*****function for 3 seven segment*****/

void segment7_3(uint8_t x,uint8_t y,uint64_t i)
{
	char ss[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	*port[y]=0xff;
	uint64_t n=0,a,b,c;
	a=i%10;
	i/=10;
	b=i%10;
	i/=10;
	c=i%10;
	while(n<200)
	{
		*port[y]=0xfe;
		*port[x]=ss[a];
		delay(0.01);
		*port[y]=0xfd;
		*port[x]=ss[b];
		delay(0.01);
		*port[y]=0xfb;
		*port[x]=ss[c];
		delay(0.01);
		n++;
	}
}

/*****function for 4 seven segment*****/

void segment7_4(uint8_t x,uint8_t y,uint64_t i)
{
	char ss[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	*port[y]=0xff;
	uint64_t n=0,a,b,c,d;
	a=i%10;
	i/=10;
	b=i%10;
	i/=10;
	c=i%10;
	i/=10;
	d=i%10;
	while(n<100)
	{
		*port[y]=0xfe;
		*port[x]=ss[a];
		delay(0.01);
		*port[y]=0xfd;
		*port[x]=ss[b];
		delay(0.01);
		*port[y]=0xfb;
		*port[x]=ss[c];
		delay(0.01);
		*port[y]=0xf7;
		*port[x]=ss[d];
		delay(0.01);
		n++;
	}
}

/*****function for single seven segment with dot*****/

void segment_dot(uint8_t x,uint8_t i)
{
	char ss[]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};
	*port[x]=ss[i];
}

/*****function for single seven segment for symbols*****/

void segment_symbol(uint8_t x,uint8_t i)
{
	char ss[]={0x73,0x40,0x76,0x49};
	if(i == '+')*port[x]=ss[0];
	if(i == '-')*port[x]=ss[1];
	if(i == '*')*port[x]=ss[2];
	if(i == '/')*port[x]=ss[3];
}