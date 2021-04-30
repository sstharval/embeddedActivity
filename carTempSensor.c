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
#define F_CPU 16000000UL 	 	/**< Clock Frequency of MCU is 16 MHz */

#include "utils_act.h"
#include "inc/activity1.h"
#include "inc/activity2.h"
#include "inc/activity3.h"
#include "inc/activity4.h"



#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void setUp(void);
int main(void)
{
    setUp();
    activity1();// Activity 1 called
    activity2();// Activity 2 called
    activity3();// Activity 3 called
    activity4(0);// Activity 4 called // have initialized this zero for causing no error

    return 0;
}
/**
 * @brief Set the Up object
 * helps in setting up the initial pins
 */
void setUp(void){
    DDRB |= (1<<PB0); //Led indicating Passenger is seated
    DDRB |= (1<<PB1); //Led Indication Heater is ON and also output to CRO
    DDRD &= ~(1<<PD0); //Input switch taking from seat sensor
    DDRD &= ~(1<<PD2); //Input for Switching on the Heater.
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD2);
    DDRC&=~(1<<PC1);
    PORTC|=(1<<PC1);    //ADC Channel0
}