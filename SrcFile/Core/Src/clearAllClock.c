/*
 * clearAllClock.c
 *
 *  Created on: Oct 3, 2023
 *      Author: 84334
 */

#include"clearAllClock.h"
void clearAllClock(){
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,0);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,0);
}
