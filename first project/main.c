
#include "StdTypes.h"
#include "MemMap.h"
#include "DIO_Int.h"
#include "MOTOR_Int.h"
#include "ECU_Int.h"
#include "STEPPER_Int.h"
#include "LCD_Int.h"
#include "KEYPAD_Int.h"
#include "CALCULATOR_Int.h"
#include "ADC_Int.h"
#include "Timers.h"
#include "Sensors_Int.h"
#include "Math.h"
#include "INTERPOLATION_Int.h"
#include "FIRESYSTEM_Int.h"



#define  F_CPU   8000000
#include <util/delay.h>




int main(void)
{
	
	DIO_Init();
	
	LCD_Init();
	KEYPAD_Init();
	//MOTOR_Init();
	
	
	ADC_Init(VREF_AVCC,ADC_SCALER_16);
	u16 x;
	while (1)
	{
		x=ADC_Read(CH_0);
		LCD_SetCursor(2,1);
		LCD_WriteNumber(x);
		LCD_WriteString("      ");
		LCD_SetCursor(1,1);
		switch (x)
		{
			case 146:
			LCD_WriteString("BUTTON 1 ");
			break;
			case 256:
			LCD_WriteString("BUTTON 2 ");
			break;
			case 341:
			LCD_WriteString("BUTTON 3 ");
			break;
			case 410:
			LCD_WriteString("BUTTON 4 ");
			break;
			case 465:
			LCD_WriteString("BUTTON 5 ");
			break;
			case 512:
			LCD_WriteString("BUTTON 6 ");
			break;
			case 551:
			LCD_WriteString("BUTTON 7 ");
			break;
			case 585:
			LCD_WriteString("BUTTON 8 ");
			break;
			case 614:
			LCD_WriteString("BUTTON 9 ");
			break;
			case 788:
			LCD_WriteString("BUTTON 10 ");
			break;
			case 1023:
			LCD_WriteString("                  ");
			break;
		}
	}
	
}