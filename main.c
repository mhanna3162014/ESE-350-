/*
 * GccApplication2.c
 *
 * Created: 2/23/2017 3:41:21 PM
 * Author : Matthew
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <util/delay.h>
#include <util/atomic.h>

//TIM1_COMPA_vect is used when writing the interrupt for the toggle routine. 
ISR (TIM1_COMPA_vect) {
	
}
int main(void)
{
	//The next commands regarding TI
	DDRB |= (1 << PB1);//sets pin 9 to be output, based on output port PB1
	TIMSK1 |= (1 << TOIE0); //enables the overflow interrupt, to be used later
	TIMSK1 |= (1 << OCIE1A); //
    /* Replace with your application code */
    while (1) 
    {
    }
}

