/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "void.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  clearP0A();
  clearP0B();
  clearSegdu();
  int count = 0;
  int state = 0;
  while (1)
  {
	 count ++;
	 switch(state)
	 {
	 	 case 0:
	 		 if(count == 1)
	  		 {

	 			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	 			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	 			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	 			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	 			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	 			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	 			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	 			 setSeg(6);
//	 			 clearSeg(0); clearSeg(1); clearSeg(2); clearSeg(3); clearSeg(4); clearSeg(5);
	 			 count = 0;
	 			 state = 1;
	  		 }
	 	 break;

	 	 case 1:
	 		 if(count == 1)
	  		 {
	 			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//	  			 setSeg(6); setSeg(0); setSeg(3); setSeg(4); setSeg(5);
//	  			 clearSeg(1); clearSeg(2);
	  			 count = 0;
	  			 state = 2;
	  		 }
	 	 break;

	  	 case 2:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//	  			 setSeg(2); setSeg(5);
//	  			 clearSeg(6); clearSeg(0); clearSeg(1); clearSeg(3); clearSeg(4);
	  			 count = 0;
	  			 state = 3;
	  		 }
	  	 break;

	  	 case 3:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//	  			 setSeg(4); setSeg(5);
//	  			 clearSeg(0); clearSeg(1); clearSeg(2); clearSeg(3); clearSeg(6);
	  			 count = 0;
	  			 state = 4;
	  		 }
	  	 break;

	  	 case 4:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	  			 setSeg(0); setSeg(3); setSeg(4);
//	  			 clearSeg(1); clearSeg(2); clearSeg(5); clearSeg(6);
	  			 count = 0;
	  			 state = 5;
	  		 }
	     break;

	  	 case 5:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	  			 setSeg(1); setSeg(4);
//	  			 clearSeg(0); clearSeg(2); clearSeg(3); clearSeg(5); clearSeg(6);
	  			 count = 0;
	  			 state = 6;
	  		 }
	     break;

	  	 case 6:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	  			 setSeg(1);
//	  			 clearSeg(0); clearSeg(2); clearSeg(3); clearSeg(4); clearSeg(5); clearSeg(6);
	  			 count = 0;
	  			 state = 7;
	  		 }
	  	 break;

	  	 case 7:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
//	  			 setSeg(3); setSeg(4); setSeg(5); setSeg(6);
//	  			 clearSeg(0); clearSeg(1); clearSeg(2);
	  			 count = 0;
	  			 state = 8;
	  		 }
	  	 break;

	  	 case 8:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	  			 clearSeg(0); clearSeg(1); clearSeg(2); clearSeg(3); clearSeg(4); clearSeg(5); clearSeg(6);
	  			 count = 0;
	  			 state = 9;
	  		 }
	     break;

	  	 case 9:
	  		 if(count == 1)
	  		 {
	  			 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
	  			 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	  			 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
//	  			 setSeg(4);
//	  			 clearSeg(0); clearSeg(1); clearSeg(2); clearSeg(3); clearSeg(5); clearSeg(6);
	  			 count = 0;
	  			 state = 0;
	  		 }
	     break;
	  }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}


/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG_00_Pin|SEG_0_Pin|SEG_1_Pin|SEG_2_Pin
                          |SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin
                          |SEG_11_Pin|SEG_22_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_11_Pin
                          |LED_12_Pin|SEG_33_Pin|SEG_44_Pin|SEG_55_Pin
                          |SEG_66_Pin|LED_4_Pin|LED_5_Pin|LED_6_Pin
                          |LED_7_Pin|LED_8_Pin|LED_9_Pin|LED_10_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG_00_Pin SEG_0_Pin SEG_1_Pin SEG_2_Pin
                           SEG_3_Pin SEG_4_Pin SEG_5_Pin SEG_6_Pin
                           SEG_11_Pin SEG_22_Pin */
  GPIO_InitStruct.Pin = SEG_00_Pin|SEG_0_Pin|SEG_1_Pin|SEG_2_Pin
                          |SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin
                          |SEG_11_Pin|SEG_22_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_3_Pin LED_11_Pin
                           LED_12_Pin SEG_33_Pin SEG_44_Pin SEG_55_Pin
                           SEG_66_Pin LED_4_Pin LED_5_Pin LED_6_Pin
                           LED_7_Pin LED_8_Pin LED_9_Pin LED_10_Pin */
  GPIO_InitStruct.Pin = LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_11_Pin
                          |LED_12_Pin|SEG_33_Pin|SEG_44_Pin|SEG_55_Pin
                          |SEG_66_Pin|LED_4_Pin|LED_5_Pin|LED_6_Pin
                          |LED_7_Pin|LED_8_Pin|LED_9_Pin|LED_10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
