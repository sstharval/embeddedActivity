#define F_CPU 16000000UL 	 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

unsigned volatile temperatureSensed; 
void timerElement(){
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);//// Selecting FAST mode for PWM for atMEGA 328
    TCCR1B |=(1<<WGM12)|(1<<CS11)|(1<<CS10); //64 Prescalar
    //OutputBit is already set in setUp block
}

void activity3(){
    //We initiate this by calling TIMER Element
    timerElement();
    OCR1A = ADC;//Giving value of ADCregister1 to OCR1A
    if(ADC > 0 && ADC <= 200)
    {
        temperatureSensed = 20;
        activity4(temperatureSensed);
    }
    else if(ADC > 200 && ADC <= 500)
    {
        temperatureSensed = 25;
        activity4(temperatureSensed);
    }
    else if(ADC>500 && ADC<710)
    {
        temperatureSensed =29;
        activity4(temperatureSensed);
    }
    else if(ADC>710 && ADC<1024)
    {
        temperatureSensed = 33;
        activity4(temperatureSensed);
    }
    _delay_ms(1000);
   
 /*  
    switch (ADC)
    {
    case (ADC > 0 && ADC <= 200):
        temperatureSensed = 20;
        activity4(temperatureSensed);
        break;
    case (ADC > 200 && ADC <= 500):
        temperatureSensed = 25;
        activity4(temperatureSensed);
    case (ADC>500 && ADC<710):
        temperatureSensed =29;
        activity4(temperatureSensed);
    case (ADC>710 && ADC<1024):
        temperatureSensed = 33;
        activity4(temperatureSensed);
    default:
        break;
    }
*/
}