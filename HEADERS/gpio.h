#include "define.h"

void ddr_a(int a)
{
	porta_dir=a;
}
void port_a(int a)
{
	porta_dat=a;
}
void ddr_b(int a)
{
	portb_dir=a;
}
void port_b(int a)
{
	portb_dat=a;
}
void ddr_c(int a)
{
	portc_dir=a;
}
void port_c(int a)
{
	portc_dat=a;
}
void ddr_d(int a)
{
	portd_dir=a;
}
void port_d(int a)
{
	portd_dat=a;
}
void ddr_e(int a)
{
	porte_dir=a;
}
void port_e(int a)
{
	porte_dat=a;
}
void ddr_f(int a)
{
	portf_dir=a;
}
void port_f(int a)
{
	portf_dat=a;
}
void ddr_g(int a)
{
	portg_dir=a;
}
void port_g(int a)
{
	portg_dat=a;
}
void ddr_h(int a)
{
	porth_dir=a;
}
void port_h(int a)
{
	porth_dat=a;
}
void ddr_j(int a)
{
	portj_dir=a;
}
void port_j(int a)
{
	portj_dat=a;
}
void ddr_k(int a)
{
	portk_dir=a;
}
void port_k(int a)
{
	portk_dat=a;
}
void ddr_l(int a)
{
	portl_dir=a;
}
void port_l(int a)
{
	portl_dat=a;
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
			portk_dat=ss[i];
}
void segment_dot(uint8_t i)
{
	char ss[]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};
	portk_dat=ss[i];
}