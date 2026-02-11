#include "define.h"

/********pointing the DDR registers address using poiter array********/

volatile uint8_t* ddr[11] = {
	(volatile uint8_t *)0x21, /*DDR A address*/
	(volatile uint8_t *)0x24, /*DDR B address*/
	(volatile uint8_t *)0x27, /*DDR C address*/
	(volatile uint8_t *)0x2a, /*DDR D address*/
	(volatile uint8_t *)0x2d, /*DDR E address*/
	(volatile uint8_t *)0x30, /*DDR F address*/
	(volatile uint8_t *)0x33, /*DDR G address*/
	(volatile uint8_t *)0x101, /*DDR H address*/
	(volatile uint8_t *)0x104, /*DDR J address*/
	(volatile uint8_t *)0x107, /*DDR K address*/
	(volatile uint8_t *)0x10a /*DDR L address*/
};

/********pointing the PORT registers address using poiter array********/

volatile uint8_t* port[11] = {
	(volatile uint8_t *)0x22, /*PORT A address*/
	(volatile uint8_t *)0x25, /*PORT B address*/
	(volatile uint8_t *)0x28, /*PORT C address*/
	(volatile uint8_t *)0x2b, /*PORT D address*/
	(volatile uint8_t *)0x2e, /*PORT E address*/
	(volatile uint8_t *)0x31, /*PORT F address*/
	(volatile uint8_t *)0x34, /*PORT G address*/
	(volatile uint8_t *)0x102, /*PORT H address*/
	(volatile uint8_t *)0x105, /*PORT J address*/
	(volatile uint8_t *)0x108, /*PORT K address*/
	(volatile uint8_t *)0x10b /*PORT L address*/
};

/********pointing the PIN registers address using poiter array********/

volatile uint8_t* pin[11] = {
	(volatile uint8_t *)0x20, /*PIN A address*/
	(volatile uint8_t *)0x23, /*PIN B address*/
	(volatile uint8_t *)0x26, /*PIN C address*/
	(volatile uint8_t *)0x29, /*PIN D address*/
	(volatile uint8_t *)0x2c, /*PIN E address*/
	(volatile uint8_t *)0x2f, /*PIN F address*/
	(volatile uint8_t *)0x32, /*PIN G address*/
	(volatile uint8_t *)0x100, /*PIN H address*/
	(volatile uint8_t *)0x103, /*PIN J address*/
	(volatile uint8_t *)0x106, /*PIN K address*/
	(volatile uint8_t *)0x109 /*PIN L address*/
};
