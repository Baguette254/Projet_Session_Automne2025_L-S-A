#include "adc_reader.h"
#include "stdio.h"

/* hadc1 est défini dans main.c */
extern ADC_HandleTypeDef hadc1;

/* ---------- LECTURE + RENVOI DU SEUIL ---------- */
const char* ADC_Read_Seuils(void)
{
    uint32_t adc_value = 0;

    /* Lancer conversion */
    HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1, 10);

    adc_value = HAL_ADC_GetValue(&hadc1);

    /* Seuils (1V / 2V / 3V) */
    const uint32_t TH1 = 1241;
    const uint32_t TH2 = 2482;
    const uint32_t TH3 = 3723;

    if (adc_value < TH1)
        return "<1V";

    else if (adc_value < TH2)
        return "1-2V";

    else if (adc_value < TH3)
        return "2-3V";

    else
        return ">3V";
}
