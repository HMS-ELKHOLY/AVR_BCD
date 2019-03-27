/*
 * IOMACRO.c
 *
 * Created: 3/27/2019 5:11:58 PM
 *  Author: hussien
 */ 

#include "IOMACRO.h"
void bcdCounter(volatile uint8_t *port,uint8_t limit )//port passed as pointer 
//must configure reg before using method
{
	for (int i=0;i<=limit;i++)
	{
		*port=i;
		_delay_ms(DELAY_AMOUNT);
	}
}