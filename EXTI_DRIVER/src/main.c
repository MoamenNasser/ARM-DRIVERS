/*
 * main.c
 *
 *  Created on: Aug 28, 2022
 *      Author: naser
 */

#include"STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_Interface.h"
#include "DIO_interface.h"
#include "NVIC_Interface.h"
#include "Systick_Interface.h"
#include "EXTI_Interface.h"
#include "EXTI_private.h"
#include "EXTI_CNF.h"


void main(void)
{
	/*
	 * 			Initialize RCC
	 *
	 * */
	RCC_voidInitSysClock();
	/*
	 * 			RCC AFIO
	 *
	 * */
	RCC_voidEnableClock(RCC_APB2, GPIOA);
	//MEXTI_voidSetCallBack(ahmed);

	/**			GPIO Direction		*/
	/*			A8 == input >>> PULL UP Resistor			*/
	MGPIO_voidSetPinDirection(GPIOA, PIN0, INPUT_PULL_UP_DOWN );
	MGPIO_voidSetPinValue(GPIOA, PIN0, GPIO_HIGH);
	/*			A2 == output >>> PULL UP Resistor			*/
	MGPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_SPEED_2MHZ_PP );

	MEXTI_voidInit();
	MEXTI_voidSetSignalLatch(LINE0, EXTI_MODE);

	//MNVIC_voidSetPriority(6, 2);
	MNVIC_voidEnableInterrupt(6);

	/**/
	//MNVIC_voidSetPendingFlag(6);
	while(1);

}

void ahmed(void)
{

}
