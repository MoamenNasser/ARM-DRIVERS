/*
 * main.c
 *
 *  Created on: Oct 14, 2022
 *      Author: naser
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "RCC_Interface.h"
#include "Systick_Interface.h"
#include "LED_Matrix_Interface.h"


u8 DataArray[8] = {0, 0, 159, 153, 153, 249, 0, 0};

void main(void)
{
	/*				RCC initialization			*/
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,2);
	RCC_voidEnableClock(RCC_APB2,3);

	/*				Systick Initialization			*/
	MSTK_voidInit();

	/*				LED_MRX initialization			*/
	HLEDMRX_voidInit();

	/**/
	HLEDMRX_voidDisplay(DataArray);

}

