#ifndef LCD_H
#define LCD_H

#include "gpio.h"
#include "delay.h"

#define EN 0
#define RS 1
#define disp_left_shift 0x18
#define disp_right_shift 0x1c
#define row_1 0x80
#define row_2 0xc0
#define clear_disp 0x01
#define return_home 0x02


void lcd_config(volatile port_index_t a,volatile port_index_t b);
void enable();
void lcd_init();
void lcd_command(volatile uint8_t a);
void lcd_string(volatile char *s);
void lcd_data(volatile uint8_t a);
void lcd_create_char(volatile uint8_t location,volatile uint8_t *pattern);

#endif