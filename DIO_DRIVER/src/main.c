/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: naser
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "RCC_Interface.h"



void main(void)
{
	RCC_voidInitSysClock();
	/**/
	RCC_voidEnableClock(RCC_APB2, 2);
	/**/
	RCC_voidEnableClock(RCC_APB2, 3);
	/**/
	RCC_voidEnableClock(RCC_APB2, 4);
	/**/

	/**/
	MGPIO_voidSetPinDirection(GPIOA, PIN0, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN3, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN4, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN5, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN6, OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA, PIN7, OUTPUT_SPEED_10MHZ_PP);

	/**/





	u16 w = 500;
	while(1)
	{



		MGPIO_voidSetPinValue(GPIOA, PIN0, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN1, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN2, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN3, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN4, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN5, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN6, GPIO_HIGH);
		MGPIO_voidSetPinValue(GPIOA, PIN7, GPIO_HIGH);

		/*				Calling the function to set the whole port to high			*/
		MGPIO_voidSetPortValue(GPIOA, GPIO_HIGH);
		/**/
		MGPIO_voidSetPinValue(GPIOA, PIN0, GPIO_HIGH);
		/*				Delay				*/
		for(u16 i = 0; i < w; i++)
		{
			for(u16 j=0; j < w;j++)
			{
				asm("NOP");
			}
		}

		/**/
		MGPIO_voidSetPinValue(GPIOA, PIN0, GPIO_LOW);
		/*				Delay				*/
		for(u16 i = 0; i < w; i++)
		{
			for(u16 j=0; j < w;j++)
			{
				asm("NOP");
			}
		}

		if(MGPIO_u8GetPinValue(GPIOA, PIN0) == GPIO_LOW)
		{
			MGPIO_voidSetPinValue(GPIOA, PIN1, GPIO_HIGH);
		}
		else
		{
			MGPIO_voidSetPinValue(GPIOA, PIN1, GPIO_LOW);

		}

	}





}

