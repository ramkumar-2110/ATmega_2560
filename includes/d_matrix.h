#ifndef D_MATRIX_H
#define D_MATRIX_H

#include "gpio.h"
#include "delay.h"

void dot_matrix_config(port_index_t a,port_index_t b);
void display_char(uint8_t index);

#endif