/*
 * NVIC_program.c
 *
 *  Created on: Aug 27, 2022
 *      Author: naser
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_Interface.h"
#include "NVIC_private.h"
#include "NVIC_CNF.h"

/*				Function to enable the interrupt			*/
void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber <= 31)
	{
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ISER0 = (1 << Copy_u8IntNumber);

	}
	else if(Copy_u8IntNumber >= 32 && Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ISER1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/*				Return Error			*/

	}


}


/*				Function to disable the interrupt		*/
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber <= 31)
	{
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ICER0 = (1 << Copy_u8IntNumber);

	}
	else if(Copy_u8IntNumber >= 32 && Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ICER1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/*				Return Error			*/

	}


}

/**/
void MNVIC_voidSetPendingFlag(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber <= 31)
	{
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ISPR0 = (1 << Copy_u8IntNumber);

	}
	else if(Copy_u8IntNumber >= 32 && Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ISPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/*				Return Error			*/

	}

}

/**/
void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber <= 31)
	{
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ICPR0 = (1 << Copy_u8IntNumber);

	}
	else if(Copy_u8IntNumber >= 32 && Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		// Writing 1 has no effect so we can write on the register directly
		NVIC_ICPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/*				Return Error			*/

	}

}

/**/
u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber)
{
	u8 Local_u8Result;
	if(Copy_u8IntNumber <= 31)
	{
		Local_u8Result = GET_BIT(NVIC_IABR0, Copy_u8IntNumber);

	}
	else if(Copy_u8IntNumber >= 32 && Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;

		Local_u8Result = GET_BIT(NVIC_IABR1, Copy_u8IntNumber);
	}
	else
	{
		/*				Return Error			*/

	}
	return Local_u8Result;
}

/**/
void MNVIC_voidSetPriority(s8 Copy_s8InterruptID, u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority, u32 Copy_u32GroupNumber)
{
	/*				Here we make the equation priority automatic							*/
	u8 Local_u8Priority = (Copy_u8SubGroupPriority|(Copy_u8GroupPriority<<((Copy_u32GroupNumber - 0x05FA0300) / 256)));
	/*				First we check if we are core peripheral or external peripheral			*/

	/*				Core peripheral		*/

	/*				External Peripheral				*/

	if(Copy_s8InterruptID >= 0)
	{

		NVIC_IPR[Copy_s8InterruptID] = Local_u8Priority << 4;

	}
	SCB_AIRCR = Copy_u32GroupNumber;
}











