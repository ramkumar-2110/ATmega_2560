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