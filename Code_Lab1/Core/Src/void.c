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
void clearP0A()
{
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
}

void clearP0B()
{
	 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_RESET);
}

void clearSegdu()
{
	HAL_GPIO_WritePin(SEG_33_GPIO_Port, SEG_33_Pin, SET);
	HAL_GPIO_WritePin(SEG_44_GPIO_Port, SEG_44_Pin, SET);
	HAL_GPIO_WritePin(SEG_55_GPIO_Port, SEG_55_Pin, SET);
	HAL_GPIO_WritePin(SEG_66_GPIO_Port, SEG_66_Pin, SET);
}

void setLed(int num)
{
	if (num == 12)
	{
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
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

void setSeg(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	}
	if (num == 00)
	{
		HAL_GPIO_WritePin(SEG_00_GPIO_Port, SEG_00_Pin, SET);
	}
	if (num == 11)
	{
		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
	}
	if (num == 22)
	{
		HAL_GPIO_WritePin(SEG_22_GPIO_Port, SEG_22_Pin, SET);
	}
	if (num == 33)
	{
		HAL_GPIO_WritePin(SEG_33_GPIO_Port, SEG_33_Pin, SET);
	}
	if (num == 44)
	{
		HAL_GPIO_WritePin(SEG_44_GPIO_Port, SEG_44_Pin, SET);
	}
	if (num == 55)
	{
		HAL_GPIO_WritePin(SEG_55_GPIO_Port, SEG_55_Pin, SET);
	}
	if (num == 66)
	{
		HAL_GPIO_WritePin(SEG_66_GPIO_Port, SEG_66_Pin, SET);
	}
}

void clearLed(int num)
{
	if (num == 12)
	{
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
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

void clearSeg(int led)
{
	if (led == 0)
		{
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		}
	if (led == 1)
	{
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	}
	if (led == 2)
	{
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	}
	if (led == 3)
	{
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	}
	if (led == 4)
	{
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	}
	if (led == 5)
	{
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (led == 6)
	{
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	}
	if (led == 00)
	{
		HAL_GPIO_WritePin(SEG_00_GPIO_Port, SEG_00_Pin, RESET);
	}
	if (led == 11)
	{
		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
	}
	if (led == 22)
	{
		HAL_GPIO_WritePin(SEG_22_GPIO_Port, SEG_22_Pin, RESET);
	}
	if (led == 33)
	{
		HAL_GPIO_WritePin(SEG_33_GPIO_Port, SEG_33_Pin, RESET);
	}
	if (led == 44)
	{
		HAL_GPIO_WritePin(SEG_44_GPIO_Port, SEG_44_Pin, RESET);
	}
	if (led == 55)
	{
		HAL_GPIO_WritePin(SEG_55_GPIO_Port, SEG_55_Pin, RESET);
	}
	if (led == 66)
	{
		HAL_GPIO_WritePin(SEG_66_GPIO_Port, SEG_66_Pin, RESET);
	}
}


#endif /* SRC_VOID_C_ */
