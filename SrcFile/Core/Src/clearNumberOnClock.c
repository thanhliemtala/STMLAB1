/*
 * clearNumberOnClock.c
 *
 *  Created on: Oct 4, 2023
 *      Author: 84334
 */


#include "clearNumberOnCLock.h"

void clearNumberOnClock(int num){
	switch(num){
		case 0:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4,0);
			break;
		case 1:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,0);
			break;
		case 2:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6,0);
			break;
		case 3:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7,0);
			break;
		case 4:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,0);
			break;
		case 5:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,0);
			break;
		case 6:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
			break;
		case 7:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11,0);
			break;
		case 8:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,0);
			break;
		case 9:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,0);
			break;
		case 10:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,0);
			break;
		case 11:
		 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,0);
			break;
		default:
			break;
		}
}
