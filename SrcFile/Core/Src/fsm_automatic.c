/*
 * fsm_automatic.c
 *
 *  Created on: Sep 20, 2023
 *      Author: 84334
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		status = AUTO_RED;
		setTimer1(200);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			setTimer1(200);
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		if(timer1_flag == 1){
			status = AUTO_RED;
			setTimer1(200);
		}
		break;
	default:
		break;
	}
}

