#include "F:\Atmega\Headers\GPIO\define.h"



/* DDR */
volatile uint8_t* const ddr[11] = {
    (uint8_t*)0x21,(uint8_t*)0x24,(uint8_t*)0x27,
    (uint8_t*)0x2A,(uint8_t*)0x2D,(uint8_t*)0x30,
    (uint8_t*)0x33,(uint8_t*)0x101,(uint8_t*)0x104,
    (uint8_t*)0x107,(uint8_t*)0x10A
};

/* PORT */
volatile uint8_t* const port[11] = {
    (uint8_t*)0x22,(uint8_t*)0x25,(uint8_t*)0x28,
    (uint8_t*)0x2B,(uint8_t*)0x2E,(uint8_t*)0x31,
    (uint8_t*)0x34,(uint8_t*)0x102,(uint8_t*)0x105,
    (uint8_t*)0x108,(uint8_t*)0x10B
};

/* PIN */
volatile uint8_t* const pin[11] = {
    (uint8_t*)0x20,(uint8_t*)0x23,(uint8_t*)0x26,
    (uint8_t*)0x29,(uint8_t*)0x2C,(uint8_t*)0x2F,
    (uint8_t*)0x32,(uint8_t*)0x100,(uint8_t*)0x103,
    (uint8_t*)0x106,(uint8_t*)0x109
};