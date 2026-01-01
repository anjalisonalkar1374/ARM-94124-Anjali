/*
 * MQ2.h
 *
 *  Created on: Dec 31, 2025
 *      Author: anjal
 */

#ifndef INC_MQ2_H_
#define INC_MQ2_H_

#include "stm32f4xx_hal.h"
void MQ2_Init(ADC_HandleTypeDef hadc1);
uint16_t MQ2_Read();

#endif /* INC_MQ2_H_ */
