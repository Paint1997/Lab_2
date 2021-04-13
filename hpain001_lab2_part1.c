
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
        DDRA = 0x00; PORTA = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;
    /* Insert your solution below */

        unsigned char tmpB = 0x00;
        unsigned char tmpA = 0x00;
         while (1) {
        tmpA = PINA & 0x01;
        tmpB = PINA & 0x02;

        if (tmpB == 0x02 && tmpA == 0x01){
        PORTB = 0x01;
}
             else
                  PORTB = 0x00;

    }
    return 0;
}
