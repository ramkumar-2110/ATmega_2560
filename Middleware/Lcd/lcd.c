#include "F:\Atmega\Middleware\Lcd\lcd.h"

static uint8_t data_port;
static uint8_t selection_port;

void lcd_config(uint8_t a,uint8_t b)//a-->data_port  ,  b-->selection_port
{
	data_port=a;
	selection_port=b;
	port_config(data_port,OUTPUT);
	pin_config(selection_port,EN,1);
	pin_config(selection_port,RS,1);
    delay_ms(15);
}
void enable()
{
	pin_write(selection_port,EN,1);
	delay_ms(1);
	pin_write(selection_port,EN,0);
}

void lcd_init()
{
	pin_write(selection_port,RS,0);
    delay_ms(1);
	port_write(data_port,0x38);
	enable();
	port_write(data_port,0x0c);
	enable();
	port_write(data_port,0x04);
	enable();
	port_write(data_port,0x01);
	enable();
}
void lcd_command(uint8_t a)//a-->lcd command
{
	pin_write(selection_port,RS,0);
	delay_ms(1);
	port_write(data_port,a);
	enable();
}
void lcd_string(char *s)//s-->lcd string
{
	pin_write(selection_port,RS,1);
	delay_ms(1);
	while(*s!='\0')
	{
	port_write(data_port,*s++);
	enable();
	}
}
void lcd_data(uint8_t a)//a--> lcd data
{
	pin_write(selection_port,RS,1);
	delay_ms(2);
	port_write(data_port,a);
	enable();
}
void lcd_create_char(uint8_t location, uint8_t *pattern)//location--> index  , pattern-->emoji patterns 
{
	location &= 0x07;

	lcd_command(0x40 + (location * 8));

	pin_write(PORT_K,RS,1);

	for(int i=0;i<8;i++)
	{
		port_write(PORT_F,pattern[i]);
		enable();
	}

	lcd_command(0x80);
}
// 	pin_write(PORT_K,RS,0);
// 	while(1)
// {
//     lcd_command(disp_right_shift);
//     delay_ms(300);
// } for display shift