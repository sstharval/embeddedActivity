/**
 * @file activity2.h
 * @author Shubham T.
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_2_H
#define __ACTIVITY_2_H
/**
 * @brief Register to store the value of ADC input
 * 
 */

/**
 * @brief Activity 2
 * ADC is set up.
 * For Temp35 part, we have used a potentiometer to simulate the values similar to TMP35
 * ADC Value(Temp Sensor)|Output PWM | Temperature Indication
0-200                       20%         - 20 °C
210-500                     40%         - 25 °C 
510-700                     70%         - 29 °C
710-1024                    95%         - 33 °C
 */
void activity2(void) ;
/**
 * @brief Function to Intializing the ADC Sensor
 * 
 */
void Init_ADC(void);
/**
 * @brief readADC fucntion
 * converts the applied values into digital value with resolution 32
 * @param ch 
 * @return uint16_t 
 */



#endif /*__ACTIVITY_H*/