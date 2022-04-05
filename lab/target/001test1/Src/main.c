


#include <stdint.h>
#include "led.h"
#include "button.h"
#include <buzzer.h>
#include <melody.h>
#include "lightsensor.h"

void Led_sensor(unsigned int lux);

void delay_ms(uint32_t milsecond)
{
	for(uint32_t i=0; i < milsecond; i++)
	{
		for(uint32_t j=0; j < 5000; j++);
	}
}

int main(void)
{
	LedControl_Init();
	Button_Init();
	BuzzerControl_Init();
	uint8_t status = 0;
	unsigned int lux;
	LightSensor_Init(ADC_READ_MODE_DMA);
    /* Loop forever */
	while(1)
	{
		lux = LightSensor_MeasureUseDMAMode();

//		if (Button_GetLogicInputPin(BUTTON_BOARD_ID) == 0)
//		{
//			for(uint32_t volatile i=0;i<500000/2;i++);
//			status = status ^ 1;
//
//		}
		if(lux >= 1500)
		{
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 100);
			BuzzerControl_SetMelody(pbeep);
			delay_ms(1000);
			BuzzerControl_SetMelody(0);
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 5);
			delay_ms(1000);
//			if (Button_GetLogicInputPin(BUTTON_BOARD_ID) == 0)
//			{continue;}

		}
		else
		{
			// Điều khiển led trên Board STM32 NUCLEO sáng ở cường độ 100%.
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 0);
			BuzzerControl_SetMelody(0);
		}
	}
}



void Led_sensor(unsigned int lux)
{
	if(lux < 1800){
		LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 10);
	}
	else if(lux > 1800 && lux <2000){
		LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 15);
	}
	else if(lux > 2000 && lux <2200){
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 30);
		}
	else if(lux > 2200 && lux <2400){
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 50);
		}
	else if(lux > 2400 && lux <2600){
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 70);
		}
	else if(lux > 2600 && lux <3000){
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 90);
		}
	else {
			LedControl_SetColorGeneral(LED_KIT_ID0, LED_COLOR_GREEN, 00);
		}
}
