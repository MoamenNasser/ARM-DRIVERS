/*
 * EXTI_program.c
 *
 *  Created on: Aug 28, 2022
 *      Author: naser
 */

#include "STD_TYPES.h"
#include"BIT_MATH.h"

#include "EXTI_Interface.h"
#include "EXTI_private.h"
#include "EXTI_CNF.h"
#include <stddef.h>

/*********************************************************************
 * 				Global variable of pointer to function
 *******************************************************************/
static void (* EXTI0_CallBack) (void) = NULL;
static void (* EXTI1_CallBack) (void) = NULL;
static void (* EXTI2_CallBack) (void) = NULL;
static void (* EXTI3_CallBack) (void) = NULL;
static void (* EXTI4_CallBack) (void) = NULL;
static void (* EXTI5_CallBack) (void) = NULL;
static void (* EXTI6_CallBack) (void) = NULL;
static void (* EXTI7_CallBack) (void) = NULL;
static void (* EXTI8_CallBack) (void) = NULL;
static void (* EXTI9_CallBack) (void) = NULL;
static void (* EXTI10_CallBack) (void) = NULL;
static void (* EXTI11_CallBack) (void) = NULL;
static void (* EXTI12_CallBack) (void) = NULL;
static void (* EXTI13_CallBack) (void) = NULL;
static void (* EXTI14_CallBack) (void) = NULL;
static void (* EXTI15_CallBack) (void) = NULL;

/****************************************************************
 * 				Function to initialize the external interrupt by putting on
 * 				1 on the pin RTSR on the EXTI register
 *****************************************************************/
void MEXTI_voidInit(void)
{
	/******************************************************
	 * 				Checking for the external interrupt line
	 *****************************************************/
	#if EXTI_LINE == LINE0
		SET_BIT(EXTI -> IMR , LINE0);
	#elif EXTI_LINE == LINE1
		SET_BIT(EXTI -> IMR , LINE1);
	#elif EXTI_LINE == LINE2
		SET_BIT(EXTI -> IMR , LINE2);
	#elif EXTI_LINE == LINE3
		SET_BIT(EXTI -> IMR , LINE3);
	#elif EXTI_LINE == LINE4
		SET_BIT(EXTI -> IMR , LINE4);
	#elif EXTI_LINE == LINE5
		SET_BIT(EXTI -> IMR , LINE5);
	#elif EXTI_LINE == LINE6
		SET_BIT(EXTI -> IMR , LINE6);
	#elif EXTI_LINE == LINE7
		SET_BIT(EXTI -> IMR , LINE7);
	#elif EXTI_LINE == LINE8
		SET_BIT(EXTI -> IMR , LINE8);
	#elif EXTI_LINE == LINE9
		SET_BIT(EXTI -> IMR , LINE9);
	#elif EXTI_LINE == LINE10
		SET_BIT(EXTI -> IMR , LINE10);
	#elif EXTI_LINE == LINE11
		SET_BIT(EXTI -> IMR , LINE11);
	#elif EXTI_LINE == LINE12
		SET_BIT(EXTI -> IMR , LINE12);
	#elif EXTI_LINE == LINE13
		SET_BIT(EXTI -> IMR , LINE13);
	#elif EXTI_LINE == LINE14
		SET_BIT(EXTI -> IMR , LINE14);
	#elif EXTI_LINE == LINE15
		SET_BIT(EXTI -> IMR , LINE15);
	#else
		#error("Wrong LINE")
	#endif
	/**********************************************************************
	 * 				Checking for the mode of operation
	 *********************************************************************/
	#if EXTI_MODE == RISING
		SET_BIT(EXTI -> RTSR , EXTI_LINE);
	#elif EXTI_MODE == FALLING
		SET_BIT(EXTI -> FTSR, EXTI_LINE);
	#elif EXTI_MODE == ON_CHANGE
		SET_BIT(EXTI -> RTSR, EXTI_LINE);
		SET_BIT(EXTI -> FTSR, EXTI_LINE);
	#else
		#error("WRONG MODE AND LINE CHOISE")
	#endif
	/*			After the initialization we could disable all interrupts*/
	CLR_BIT(EXTI -> IMR, EXTI_LINE);

}
/*****************************************************************
 * 		Function to enable the external interrupt by putting on
 * 		1 on the pin IMR on the EXTI register
 *****************************************************************/
void MEXTI_voidEnableExternalInterrupt(u8 Copy_u8Line)
{
	SET_BIT(EXTI -> IMR, Copy_u8Line);
}


/*****************************************************************
 * 		Function to disable the external interrupt by putting on
 * 		0 on the pin IMR on the EXTI register
 *****************************************************************/
void MEXTI_voidDisableExternalInterrupt(u8 Copy_u8Line)
{
	CLR_BIT(EXTI -> IMR, Copy_u8Line);

}


/*****************************************************************
 * 		Function to software trigger the external interrupt by putting on
 * 		1 on the pin SWIER on the EXTI register
 *****************************************************************/
void MEXTI_voidSwTrigger(u8 Copy_u8Line)
{
	SET_BIT(EXTI -> SWIER, Copy_u8Line);

}

/*****************************************************************
 * 		Function to set the signal latch of the external interrupt by putting on
 * 		1 on the pin RTSR on the EXTI register due to its mode
 *****************************************************************/
void MEXTI_voidSetSignalLatch(u8 Copy_u8Line, u8 Copy_u8Mode)
{
	 switch(Copy_u8Mode)
	 {
	 case RISING	:		SET_BIT(EXTI -> RTSR, EXTI_LINE); break;
	 case FALLING	:		SET_BIT(EXTI -> FTSR, EXTI_LINE); break;
	 case ON_CHANGE	:		SET_BIT(EXTI -> RTSR, EXTI_LINE);
	 	 	 	 	 	 	SET_BIT(EXTI -> RTSR, EXTI_LINE); break;
	 }
	 SET_BIT(EXTI -> IMR, Copy_u8Line);
}

/*************************************************************************
 *
 *
 ***************************************************************************/
void MAFIO_voidSetEXTIConfiguration(u8 Copy_u8Line, u8 Copy_u8PortMap)
{
	u8 Local_u8RegisterIndex = 0;

	if(Copy_u8Line <= 3)
	{
		Local_u8RegisterIndex = 0;
	}

	else if(Copy_u8Line <= 7)
	{
		Local_u8RegisterIndex = 1;
		Copy_u8Line -= 4;

	}

	else if(Copy_u8Line <= 11)
	{
		Local_u8RegisterIndex = 2;
		Copy_u8Line -= 8;

	}

	else if(Copy_u8Line <= 15)
	{
		Local_u8RegisterIndex = 3;
		Copy_u8Line -= 12;

	}

	AFIO -> AFIO_EXTICR[Local_u8RegisterIndex] &= ~((0b1111) << (Copy_u8Line * 4));

	AFIO -> AFIO_EXTICR[Local_u8RegisterIndex]  |= ((Copy_u8PortMap) << (Copy_u8Line * 4));

}


/*************************************************************************
 *
 *
 ***************************************************************************/

void MEXTI_voidSetCallBack(void (*ptr) (void))
{
	/**/
	EXTI0_CallBack = ptr;
}

void MEXTI0_IRQHandler(void)
{
	EXTI0_CallBack();
	SET_BIT(EXTI -> PR, 0);
}


