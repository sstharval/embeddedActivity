/**
 * @file carTempSensor.c
 * @author Shubham Tharval
 * @brief LTTS StepIN Mini Project
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL
#include "utils_act.h"
#include "activity.h"

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void setUp();
void activity1();

int main(void)
{
    setUp();
    activity1();
    activity2();


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
void setUp(){
    DDRB |= (1<<PB0); //Led indicating Passenger is seated
    DDRB |= (1<<PB1); //Led Indication Heater is ON
    DDRD &= ~(1<<PD0); //Input switch taking from seat sensor
    DDRD &= ~(1<<PD2); //Input for Switching on the Heater.
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD2);
    DDRC&=~(1<<PC0);
    PORTC|=(1<<PC0);
    EICRA |= (1<<ISC01); //enabling external code.
    EIMSK |= (1<<INT0);
    sei();
}
void activity1(){
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
        if(!(PIND & (1<<PD2))){
            PORTB |= (1<<PB1);
            _delay_ms(5);
        }

        else{
            PORTB &= ~(1<<PB1);
        }
    }
}