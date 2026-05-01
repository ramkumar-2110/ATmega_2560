#ifndef LCD_H
#define LCD_H

#include "F:\Atmega\Headers\GPIO\gpio.h"
#include "F:\Atmega\Headers\Delay\delay.h"

#define EN 1
#define RS 2
#define disp_left_shift 0x18
#define disp_right_shift 0x1c
#define row_1 0x80
#define row_2 0xc0
#define clear_disp 0x01
#define return_home 0x02


void lcd_config(uint8_t a,uint8_t b);//cofiguring lcd
void enable();//gives enable pulse
void lcd_init();//initializing
void lcd_command(uint8_t a);//external command lcd other than initializing
void lcd_string(char *s);//lcd data string
void lcd_data(uint8_t a);//lcd data
void lcd_create_char(uint8_t location, uint8_t *pattern);//creating emoji patterns

#endif