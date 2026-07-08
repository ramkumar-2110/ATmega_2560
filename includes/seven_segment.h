#ifndef SEVEN_SEGMENT_H //To exclude multiple includes of seven_segment.h
#define SEVEN_SEGMENT_H //Include seven_segment.h when it still not included

#include "define.h"
#include "delay.h"

/*****declaration of functions*****/

void segment7_1(port_index_t x,uint64_t i);
void segment7_2(port_index_t x,port_index_t y,uint64_t i);
void segment7_3(port_index_t x,port_index_t y,uint64_t i);
void segment7_4(port_index_t x,port_index_t y,uint64_t i);
void segment_dot(port_index_t x,uint8_t i);
void segment_symbol(port_index_t x,uint8_t i);

#endif //end the if