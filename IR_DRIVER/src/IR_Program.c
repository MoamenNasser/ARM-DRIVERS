/*
 * IR_Program.c
 *
 *  Created on: Oct 17, 2022
 *      Author: naser
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "IR_Interface.h"
#include "IR_CNF.h"
#include "IR_Private.h"


/*****************************************************************************************************
 *
 *
 *
 *****************************************************************************************************/
volatile u8 Copy_u8StartFlag = 0;
volatile u32 Copy_u32FrameData[50] = {0};
volatile u8 Copy_u8EdgeCounter = 0;
volatile u8 Copy_u8Data = 0;




/*****************************************************************************************************
 *
 *
 *
 *****************************************************************************************************/
void voidTakeAction(void)
{
	//asm("NOP");
	Copy_u8Data = 0;
	u8 Copy_u8Counter = 0;

	if((Copy_u32FrameData[0] >= 10000)&&(Copy_u32FrameData[0] <= 14000))
	{
	for(Copy_u8Counter = 0 ; Copy_u8Counter < 8 ; Copy_u8Counter++)
	{
		if((Copy_u32FrameData[17 + Copy_u8Counter] >= 2000)&&(Copy_u32FrameData[17 + Copy_u8Counter] <= 2300))
		{
			SET_BIT(Copy_u8Data, Copy_u8Counter);
		}

		else
		{
			CLR_BIT(Copy_u8Data, Copy_u8Counter);
		}
	}
	HIR_voidPlay();
	}
	else
	{
		/*			Invalid Frame			*/

	}

	Copy_u8StartFlag = 0;
	Copy_u32FrameData[0] = 0;
	Copy_u8EdgeCounter = 0;

}
/*****************************************************************************************************
 *
 *					This function gets the frame of the IR
 *
 *****************************************************************************************************/
void HIR_voidGetIRFrame(void)
{
	/**/
	//asm("NOP");

	if(Copy_u8StartFlag == 0)
	{
		/*			Start timer				*/
		MSTK_voidSetIntervalSingle(1000000, voidTakeAction);
		Copy_u8StartFlag = 1;

	}

	else
	{
		Copy_u32FrameData[Copy_u8EdgeCounter] = MSTK_u32GetElapsedTime();

		MSTK_voidSetIntervalSingle(1000000, voidTakeAction);

		Copy_u8EdgeCounter++;
	}


}



/*****************************************************************************************************
 *
 *
 *
 *****************************************************************************************************/
void HIR_voidPlay(void)
{
	switch(Copy_u8Data)
	{
					case 70: MGPIO_voidSetPinValue(GPIOA, 1, GPIO_HIGH); break;
					case 69: MGPIO_voidSetPinValue(GPIOA, 1, GPIO_LOW); break;
					default: break;
	}
}






/*****************************************************************************************************
 *
 *
 *
 *****************************************************************************************************/
