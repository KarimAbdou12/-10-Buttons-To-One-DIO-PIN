

#include "StdTypes.h"
#include "MOTOR_Int.h"
#include "MOTOR_Cfg.h"
#include "ECU_Int.h"

void MOVE_Init(void)
{
	
}



void FORWARD(void)
{
	MOTOR_CW(M1);
	MOTOR_CW(M2);
	MOTOR_CCW(M3);
	MOTOR_CCW(M4);
}

void BACK(void)
{
	MOTOR_CCW(M1);
	MOTOR_CCW(M2);
	MOTOR_CW(M3);
	MOTOR_CW(M4);
}

void RIGHT(void)
{
	MOTOR_CCW(M3);
	MOTOR_CCW(M4);
	
	MOTOR_Stop(M1);
	MOTOR_Stop(M2);
	
}

void LEFT(void)
{
	MOTOR_CW(M1);
	MOTOR_CW(M2);
	
	MOTOR_Stop(M3);
	MOTOR_Stop(M4);
}

void CYCLE_RIGHT(void)
{
	MOTOR_CCW(M1);
	MOTOR_CCW(M2);
	MOTOR_CCW(M3);
	MOTOR_CCW(M4);
}

void CYCLE_LEFT(void)
{
	MOTOR_CW(M1);
	MOTOR_CW(M2);
	MOTOR_CW(M3);
	MOTOR_CW(M4);
}


void MOVE_Runnable(void)
{
	while(DIO_ReadPin(BMF)==0)
	{
		FORWARD();
	}
	while(DIO_ReadPin(BMB)==0)
	{
		BACK();
	}
	while(DIO_ReadPin(BMR)==0)
	{
		RIGHT();
	}
	while(DIO_ReadPin(BML)==0)
	{
		LEFT();
	}
	MOTOR_Stop(M1);
	MOTOR_Stop(M2);
	MOTOR_Stop(M3);
	MOTOR_Stop(M4);
}
