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
void MSTK_voidInit(void)
{
	/*			Choose the clock			*/
	SET_BIT(STK_CTRL, CLKSOURCE);
	/**/

}

/**/
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	//Load_Reg = Copy_u32Ticks;
	/*			Enable Systick			*/
	//while(Flag == 0);
}

/**/
/*
 * 				void (*ptr) (void)  ===  pointer to function
 *
 * 								*/
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*Copy_ptr) (void))
{
	//Load_Reg = Copy_u32Ticks;
	/*			Enable of interrupt and enable systick				*/
	//Callback = ptr;
}

/**/
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks, void (*Copy_ptr) (void))
{

}

/**/
void MSTK_voidStopTimer()
{

}

/**/
u32 MSTK_u32GetElapsedTime()
{

}

/**/
u32 MSTK_u32GetRemainingTime()
{

}


