#define F_CPU 16000000UL 	 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"

void activity1(void){
    while(1)
    {
        //temp = readADC(0);
        _delay_ms(20);
        if(!(PIND & (1<<PD0))){
            PORTB |= (1<<PB0);
        }
        else{
            PORTB &= ~(1<<PB0);
        }
        if(!(PIND & (1<<PD2)) & !(PIND & (1<<PD0))){  ///this condition ensures that heater can be  ON when driver is seated, even if driver leaves car without switching off the heater, the heater turns off;
            PORTB |= (1<<PB1);
            _delay_ms(5);
        }

        else{
            PORTB &= ~(1<<PB1);
        }
    }
}