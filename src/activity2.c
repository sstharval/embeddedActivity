#define F_CPU 16000000UL 	 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include "../inc/activity1.h"
#include "../inc/activity2.h"
#include "../inc/activity3.h"
#include "../inc/activity4.h"


void Init_ADC(void){
ADMUX = (1<<REFS0); //For Aref = AVcc
ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}

uint16_t readADC(uint8_t ch)
{
    ADMUX &= 0xf8;
    ch = ch&0b00000111;
    ADMUX |= ch;
    //Start Single Conversion
    ADCSRA |= (1<<ADSC);
    //Wait for Conversion to complete
    while(!(ADCSRA & (1<<ADIF) ));
    //clearing ADIF
    ADCSRA |= (1<<ADIF);
    return(ADC);
}

void activity2(void){
    Init_ADC();
    uint16_t tempValue;
    tempValue = readADC(1);
    _delay_ms(200);
}

