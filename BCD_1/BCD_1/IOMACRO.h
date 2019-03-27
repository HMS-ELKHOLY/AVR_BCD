#ifndef IOMACRO_H_
#define IOMACRO_H_
#include <stdint.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#define  DELAY_AMOUNT 1000
#define	 PORT PORTD
#define	 REG DDRD

	
void bcdCounter(volatile uint8_t * port,uint8_t limit );
#endif