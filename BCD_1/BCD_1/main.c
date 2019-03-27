/*
 * BCD_1.c
 *
 * Created: 3/27/2019 5:01:37 PM
 * Author : modern
 */ 

#include <avr/io.h>
#include "IOMACRO.h"

int main(void)
{
	DDRD=0xff;
    /* Replace with your application code */
    while (1) 
    {
		bcdCounter(&PORTD,15 );
		
		
    }
}

