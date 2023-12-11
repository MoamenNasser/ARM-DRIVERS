/*
 * main.c
 *
 *  Created on: Sep 5, 2022
 *      Author: naser
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Systick_Interface.h"
#include "DIO_interface.h"
#include "RCC_Interface.h"
#include "NVIC_Interface.h"


void func(void);
void func1(void);
void func2(void);

/*				main code application				*/
void main(void)
{
	/**/
	MSTK_voidSetIntervalSingle(1000, func);
	/**/
	MSTK_voidSetIntervalSingle(2000, func1);
	/**/
	MSTK_voidSetIntervalSingle(3000, func2);
}

void func(void)
{
	/*			something			*/


}

/**/
void func1(void)
{
	/*			something			*/


}

/**/
void func2(void)
{
	/*			something			*/


}

/**/
void SysTick_Handler(void)
{
	MSTK_CallBack();
}
