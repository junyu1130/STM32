/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GT_RST_Pin GPIO_PIN_13
#define GT_RST_GPIO_Port GPIOC
#define LED0_Pin GPIO_PIN_9
#define LED0_GPIO_Port GPIOF
#define SOFT_SPI_MISO_Pin GPIO_PIN_0
#define SOFT_SPI_MISO_GPIO_Port GPIOA
#define SOFT_SPI_CS_Pin GPIO_PIN_5
#define SOFT_SPI_CS_GPIO_Port GPIOA
#define SOFT_SPI_SCK_Pin GPIO_PIN_7
#define SOFT_SPI_SCK_GPIO_Port GPIOA
#define GATE_Pin GPIO_PIN_5
#define GATE_GPIO_Port GPIOC
#define CT_IIC_SCL_Pin GPIO_PIN_0
#define CT_IIC_SCL_GPIO_Port GPIOB
#define GT_INT_Pin GPIO_PIN_1
#define GT_INT_GPIO_Port GPIOB
#define CT_IIC_SDA_Pin GPIO_PIN_11
#define CT_IIC_SDA_GPIO_Port GPIOF
#define LCD_BL_Pin GPIO_PIN_15
#define LCD_BL_GPIO_Port GPIOB
#define MY_IIC_SCL_Pin GPIO_PIN_8
#define MY_IIC_SCL_GPIO_Port GPIOB
#define MY_IIC_SDA_Pin GPIO_PIN_9
#define MY_IIC_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
