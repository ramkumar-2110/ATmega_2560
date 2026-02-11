#ifndef DEFINE_H //To exclude multiple includes of define.h 
#define DEFINE_H //Include define.h when it still not included

#include<stdint.h>

/*****extern declares a variable without allocating a memory to it*****/

extern volatile uint8_t *port[11]; //defining of PORT register pointer array
extern volatile uint8_t *ddr[11];  //defining of DDR register pointer array
extern volatile uint8_t *pin[11];  //defining of PIN register pointer array

#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define H 7
#define J 8
#define K 9
#define L 10
#define HIGH 1
#define LOW 0
#define OUTPUT 0xff
#define INPUT 0x00

#endif //end the started if