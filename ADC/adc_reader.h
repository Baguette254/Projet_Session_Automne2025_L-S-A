/*
 * adc_reader.h
 *
 *  Created on: Dec 2, 2025
 *      Author: 2447509
 */

#ifndef INC_ADC_READER_H_
#define INC_ADC_READER_H_

#include "main.h"              // contient stm32f1xx_hal.h

extern ADC_HandleTypeDef hadc1;

/*uint16_t ADC_ReadSingle(uint32_t channel);*/
uint16_t Read_ADC(void);

/* Définitions des seuils */
#define SEUIL_BAS     1000
#define SEUIL_MOYEN   2000
#define SEUIL_HAUT    3000

#endif /* INC_ADC_READER_H_ */
