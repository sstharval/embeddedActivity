#define F_CPU 16000000UL 	 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
/**
 * @brief This is directly adopted from ATMEGA datasheet where how to establish a communication channel is explained
 * 
 * @param valueUBBR 
 */
void USARTINIT(uint16_t value_ubbr){
    UBRR0L = value_ubbr;
    UBRR0H = (value_ubbr>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); //Enabled Receiving and Transmitting
}

char USARTReadChar(){
    while(!(UCSR0A & (1<<RXC0))){  //waiting util data is available
    ;} //void loops to do nothing
    return UDR0;
}
void USARTWriteChar( uint16_t data){
    while(!(UCSR0A & (1<<UDRE0))){  ///waiting till transmitter is available
        ; //void loop
    }
    UDR0 = data; 
}


void activity4(int temperature_read){
    USARTWriteChar(temperature_read);
}
