/*
 * LedCount.c
 *
 *  Created on: Oct 3, 2023
 *      Author: 84334
 */

#include "LedCount.h"

void LedCount(int num){
	switch(num){
	case 0:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4,1);
		break;
	case 1:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,1);
		break;
	case 2:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6,1);
		break;
	case 3:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7,1);
		break;
	case 4:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,1);
		break;
	case 5:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,1);
		break;
	case 6:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
		break;
	case 7:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11,1);
		break;
	case 8:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,1);
		break;
	case 9:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,1);
		break;
	case 10:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,1);
		break;
	case 11:
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,0);
	 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,1);
		break;
	default:
		break;
	}
}
