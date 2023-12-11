/*
 * Systick_program.c
 *
 *  Created on: Sep 5, 2022
 *      Author: naser
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Systick_Interface.h"
#include "Systick_private.h"
#include "Systick_CNF.h"


/**/
void ( * MSTK_CallBack ) ( void );


/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidSetCallBack(void (*ptr)(void))
{
	MSTK_CallBack = ptr;
}

/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidInit(void)
{
	/******************************************************
	 *
	 * 			Choose the clock
	 * 			0: AHB/8					CLR
	 			1: Processor clock (AHB)  	SET
	 *
	 *********************************************************/
	SET_BIT(STK_CTRL, CLKSOURCE);
	/*			Enable SysTick initialize PIN			*/
	SET_BIT(STK_CTRL, TICK_INT);

}


/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	/*			Enable SysTick			*/
	MSTK_voidStartCounting( Copy_u32Ticks * 1000 );
	/*			Wait Flag Polling			*/
	while(GET_BIT(STK_CTRL, COUNTFLAG) == 0);

}

/*********************************************************************************************/
/*
 * 				void (*ptr) (void)  ===  pointer to function
 *
 ********************************************************************************************/
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*Copy_ptr) (void))
{
	/*				Disable timer						*/
	CLR_BIT(STK_CTRL, 0);
	STK_VAL = 0;

	/*				Load ticks into register			*/
	STK_LOAD = Copy_u32Ticks;
	/*				Start timer							*/
	SET_BIT(STK_CTRL, 0);
	/*				Save callback						*/
	MSTK_CallBack = Copy_ptr;
	/*				Set mode to single					*/
	//MSTK_u8ModeOfInterval = MSTK_SINGLE_INTERVAL;

	/*			Enable of interrupt and enable SysTick				*/
	//Callback = ptr;
}

/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidStartCounting(u32 Copy_u32PreLoadValue)
{
	/******************************************************************
	 * 		AHB = EXT clock = 8MHz and Clock of SysTick we choose AHB / 8
	 * 		so the count is 8 / 8 = 1 Micro for each one count
	 *****************************************************/
	/*
	 * 		Load reload value
	 * 		To generate a multi-shot timer with a period of N processor clock cycles,
	 * 		use a RELOAD value of N-1. For example,
	 * 		if the SysTick interrupt is required every 100 clock pulses,
	 * 		set RELOAD to 99
	 * 		*/
	STK_LOAD = Copy_u32PreLoadValue - 1;
	/*				Clear Val register			*/
	STK_VAL = 0;
	/*				Enable SysTick				*/
	SET_BIT(STK_CTRL, ENABLE);
}

/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks, void (*Copy_ptr) (void))
{

}


/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
void MSTK_voidStopTimer()
{
	/*			Write any value to the STK_VAL			*/
	STK_VAL = 10;

}


/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
u32 MSTK_u32GetElapsedTime()
{

}


/*********************************************************************************************
 *
 *
 *
 *********************************************************************************************/
u32 MSTK_u32GetRemainingTime()
{

}


/*********************************************************************************************
 *
 *						This function takes the systick status interrupt
 *
 *********************************************************************************************/
void MSTK_voidInterruptStatus(u8 Copy_u8Status)
{
	/*				Clear Bit			*/
	STK_CTRL &= ~(1 << 1);
	/*				SET bit				*/
	STK_CTRL |= (Copy_u8Status << 1);
}
