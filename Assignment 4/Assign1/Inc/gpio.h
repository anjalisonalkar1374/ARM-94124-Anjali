/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: anjal
 */

#ifndef GPIO_H_
#define GPIO_H_



#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

#define BV(n) (1 << (n))

#define GREEN_LED     12

#define LED_PORT GPIOD


void led_init(void);
void led_on(void);
void led_off(void);




#endif /* GPIO_H_ */
