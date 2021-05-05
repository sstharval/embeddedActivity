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

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "inc/activity1.h"
#include "inc/activity2.h"
#include "inc/activity3.h"
#include "inc/activity4.h"




int main(void)
{
    while(1){
    activity1();// Activity 1 called
    activity2();// Activity 2 called
    activity3();// Activity 3 called
    activity4(0);// Activity 4 called // have initialized this zero for causing no error
    }
    return 0;
}



