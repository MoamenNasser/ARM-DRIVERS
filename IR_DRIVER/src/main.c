/*
 * main.c
 *
 *  Created on: Sep 5, 2022
 *      Author: naser
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_Interface.h"
#include "DIO_interface.h"
#include "EXTI_Interface.h"
#include "Systick_Interface.h"
#include "NVIC_Interface.h"
#include "LED_Matrix_Interface.h"
#include "IR_Interface.h"




/*				main code application				*/
void main(void)
{
	/*				RCC initialization				*/
	RCC_voidInitSysClock();
	/*				GPIOA enable clock				*/
	RCC_voidEnableClock(RCC_APB2, 2);
	/*				A0 input floating				*/
	MGPIO_voidSetPinDirection(GPIOA, 0, 0b0100);
	/*				OUTPUT	PP	"RED"				*/
	MGPIO_voidSetPinDirection(GPIOA, 1, 0b0010);
	/*				OUTPUT PP "green"				*/
	MGPIO_voidSetPinDirection(GPIOA, 2, 0b0010);
	/*				OUTPUT PP "BLUE"				*/
	MGPIO_voidSetPinDirection(GPIOA, 3, 0b0010);

	/**/
	MEXTI_voidSetCallBack(HIR_voidGetIRFrame);
	/*				EXTI initialization				*/
	MEXTI_voidInit();

	/*				Enable EXTI0 from NVIC			*/
	MNVIC_voidInit();
	MNVIC_voidEnableInterrupt(6);

	/*				SysTick initialization			*/
	/*				Enable SysTick AHB/8 = 1MHz		*/
	MSTK_voidInit();

	while(1)
	{

	}


}


/**/
void SysTick_Handler(void)
{
	MSTK_CallBack();
}
