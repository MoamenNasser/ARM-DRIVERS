/*
 * LED_Matrix_Program.c
 *
 *  Created on: Oct 14, 2022
 *      Author: naser
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_Interface.h"
#include "DIO_Interface.h"
#include "Systick_Interface.h"
#include "LED_Matrix_Interface.h"
#include "LED_Matrix_CNF.h"
#include "LED_Matrix_Private.h"

void HLEDMRX_voidInit(void)
{
	/**/
	MGPIO_voidSetPinDirection(LEDMRX_ROW0_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW1_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW2_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW3_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW4_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW5_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW6_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_ROW7_PIN, 0b0010);

	/**/
	MGPIO_voidSetPinDirection(LEDMRX_COL0_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL1_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL2_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL3_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL4_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL5_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL6_PIN, 0b0010);
	MGPIO_voidSetPinDirection(LEDMRX_COL7_PIN, 0b0010);


}


void HLEDMRX_voidDisplay(u8 * Copy_u8Data)
{
	u8 Local_u8BIT;
	while(1)
	{
	/*				Column 0							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[0]);
	MGPIO_voidSetPinValue(LEDMRX_COL0_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 1							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[1]);
	MGPIO_voidSetPinValue(LEDMRX_COL1_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 2							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[2]);
	MGPIO_voidSetPinValue(LEDMRX_COL2_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 3							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[3]);
	MGPIO_voidSetPinValue(LEDMRX_COL3_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 4							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[4]);
	MGPIO_voidSetPinValue(LEDMRX_COL4_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 5							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[5]);
	MGPIO_voidSetPinValue(LEDMRX_COL5_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 6							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[6]);
	MGPIO_voidSetPinValue(LEDMRX_COL6_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);

	/*				Column 7							*/
	/*			Disable all columns						*/
	HLEDMRX_DisableAllColumns();
	HLEDMRX_SetRowValues(Copy_u8Data[7]);
	MGPIO_voidSetPinValue(LEDMRX_COL7_PIN, GPIO_LOW);
	MSTK_voidSetBusyWait(2500);
	}
}


/**/
void HLEDMRX_DisableAllColumns(void)
{
	/*			Disable all columns					*/
	MGPIO_voidSetPinValue(LEDMRX_COL0_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL1_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL2_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL3_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL4_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL5_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL6_PIN, GPIO_HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL7_PIN, GPIO_HIGH);

}

/**/
void HLEDMRX_SetRowValues(u8 Copy_u8Value)
{
	u8 Local_u8BIT;
	/*				Enable column 0			*/
	MGPIO_voidSetPinValue(LEDMRX_COL0_PIN, GPIO_LOW);

	Local_u8BIT = GET_BIT(Copy_u8Value, 0);
	MGPIO_voidSetPinValue(LEDMRX_ROW0_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 1);
	MGPIO_voidSetPinValue(LEDMRX_ROW1_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 2);
	MGPIO_voidSetPinValue(LEDMRX_ROW2_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 3);
	MGPIO_voidSetPinValue(LEDMRX_ROW3_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 4);
	MGPIO_voidSetPinValue(LEDMRX_ROW4_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 5);
	MGPIO_voidSetPinValue(LEDMRX_ROW5_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 6);
	MGPIO_voidSetPinValue(LEDMRX_ROW6_PIN, Local_u8BIT);

	Local_u8BIT = GET_BIT(Copy_u8Value, 7);
	MGPIO_voidSetPinValue(LEDMRX_ROW7_PIN, Local_u8BIT);

}

/**/

