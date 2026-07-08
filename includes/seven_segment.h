#ifndef SEVEN_SEGMENT_H //To exclude multiple includes of seven_segment.h
#define SEVEN_SEGMENT_H //Include seven_segment.h when it still not included

#include "define.h" //To use seven_segment.h in main.c file must include define.h as well
                    //To use seven_segment.h in main.c file must include gpio.h as well

/*****declaration of functions*****/

void segment7_1(uint8_t x,uint64_t i);
void segment7_2(uint8_t x,uint8_t y,uint64_t i);
void segment7_3(uint8_t x,uint8_t y,uint64_t i);
void segment7_4(uint8_t x,uint8_t y,uint64_t i);
void segment_dot(uint8_t x,uint8_t i);
void segment_symbol(uint8_t x,uint8_t i);

#endif //end the if