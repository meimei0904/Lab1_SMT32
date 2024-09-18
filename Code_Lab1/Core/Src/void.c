/*
 * void.c
 *
 *  Created on: Sep 17, 2024
 *      Author: MY LE
 */

#ifndef SRC_VOID_C_
#define SRC_VOID_C_
#include "void.h"
//------------------------------hien thuc ham-------------------------------

void clearAllClock()
{
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_RESET);
}

void setNumberOnClock(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	}
	if (num == 10)
	{
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	}
	if (num == 11)
	{
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	}
}

void clearLed(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
	}
	if (num == 10)
	{
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
	}
	if (num == 11)
	{
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
	}
}



#endif /* SRC_VOID_C_ */
