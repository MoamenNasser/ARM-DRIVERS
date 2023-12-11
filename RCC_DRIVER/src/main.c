/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: naser
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"RCC_Interface.h"
#include"RCC_CNF.h"
#include"RCC_Private.h"

void main(void)
{
	/*		Initialize clock system		*/
	RCC_voidInitSysClock();

	/**/
	RCC_voidEnableClock(RCC_APB2, 2);

	/**/
	PORTA_CRL = 0x00000002;

	/**/
	PORTA_ODR = 0x00000001;

	while(1)
	{

	}
}

