#ifndef DEFINE_H 
#define DEFINE_H 

#include <stdint.h>

typedef enum {
    PORT_A, PORT_B, PORT_C, PORT_D, PORT_E,
    PORT_F, PORT_G, PORT_H, PORT_J, PORT_K, PORT_L
} port_index_t;

/*****extern declares a variable without allocating a memory to it*****/

extern volatile uint8_t* const port[11]; 
extern volatile uint8_t* const ddr[11];  
extern volatile uint8_t* const pin[11];  

#define HIGH 1
#define LOW 0
#define OUTPUT 0xff
#define INPUT 0x00

#endif 