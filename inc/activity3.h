/**
 * @file activity3.h
 * @author Shubham T.
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY_3_H
#define __ACTIVITY_3_H
/**
 * @brief The Timer Function is initialized
 * 
 */
void timerElement(void);
/**
 * @brief Activity 3 PWM Generation
 * For Temp35 part, we have used a potentiometer to simulate the values similar to TMP35
 * ADC Value(Temp Sensor)|Output PWM | Temperature Indication
0-200                       20%         - 20 °C
210-500                     40%         - 25 °C 
510-700                     70%         - 29 °C
710-1024                    95%         - 33 °C
 */
void activity3() ;

#endif /*__ACTIVITY_H*/