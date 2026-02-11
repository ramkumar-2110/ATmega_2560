#ifndef KEYPAD_H //To exclude multiple includes of keypad.h 
#define KEYPAD_H //Include keypad.h when it still not included

#include "define.h" //To use keypad.h in main.c file must include define.h as well
#include "gpio.h" //To use keypad.h in main.c file must include gpio.h as well

char keypad_scan(uint8_t x); //declaration of function

#endif //end the if