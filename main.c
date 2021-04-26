/*

@Author - Shubham
Activity 1




*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB |= (1<<PB0); //Led indicating Passenger is seated
DDRB |= (1<<PB1); //Led Indication Heater is ON
DDRD &= ~(1<<PD0); //Input switch taking from seat sensor
PORTD |= (1<<PD0);
DDRC&=~(1<<PC0);
PORTC|=(1<<PC0);

    // Insert code

    while(1)
    {
        if(!(PIND & (1<<PD0))){
            PORTB |= (1<<PB0);
        }
        else{
            PORTB &= ~(1<<PB0);
        }
        if(!(PINC & (1<<PC0))){
            PORTB |= (1<<PB1);
        }
        else{
            PORTB &= ~(1<<PB1);
        }
    }

    return 0;
}
