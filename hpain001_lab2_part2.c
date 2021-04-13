/*	Author: hpain001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0x0F;
	DDRB = 0xFF; PORTB = 0x00; // PA0 1 means door open
	DDRC = 0xFF; PORTC = 0x00;			  // PA1 means light is sensed
				  // PB0 is LED if PA0 && PA1 are true we turn on PB0 
    /* Insert your solution below */
   	unsigned char cntavail = 0x00;	
	unsigned char a = 0x00;
	unsigned char b = 0x00;
	unsigned char c = 0x00;
	unsigned char d = 0x00;
	 while (1) {
	a =( PINA & 0x08) >> 3;
	b = (PINA & 0x04) >> 2;
	c = (PINA & 0x02) >> 1;
	d =  PINA & 0x01;
	cntavail = 4 - ( a + b + c + d);
		
	
 	PORTC = cntavail;
   }
    return 0;
}
