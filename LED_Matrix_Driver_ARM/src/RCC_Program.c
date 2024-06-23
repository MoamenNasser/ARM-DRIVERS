/*************************************************************************************/
/*		Author: Moamen Nasser								*/
/*		Date: 13 Aug 2022 									*/
/*		Version: V1.0										*/
/************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_Interface.h"
#include "RCC_Private.h"
#include "RCC_CNF.h"

/**/
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if(Copy_u8PerId <= 31)
	{
		/**/
		switch(Copy_u8BusId)
		{
			case RCC_AHB	:	SET_BIT(RCC_AHBENR, Copy_u8PerId); break;
			case RCC_APB1	:	SET_BIT(RCC_APB1ENR, Copy_u8PerId); break;
			case RCC_APB2	:	SET_BIT(RCC_APB2ENR, Copy_u8PerId); break;
			//default			: /*Return Error*/ 
			//break;
		}
	}
	else
	{
		/*		Return Error		*/
	}
}


/**/

void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if(Copy_u8PerId <= 31)
	{
		/**/
		switch(Copy_u8BusId)
		{
			case RCC_AHB	:	CLR_BIT(RCC_AHBENR, Copy_u8PerId); break;
			case RCC_APB1	:	CLR_BIT(RCC_APB1ENR, Copy_u8PerId); break;
			case RCC_APB2	:	CLR_BIT(RCC_APB2ENR, Copy_u8PerId); break;
			//default			: /*Return Error*/ 
			//break;
		}
	}
	else
	{
		/*		Return Error		*/
	}
}

/**/
void RCC_voidInitSysClock(void)
{
	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL	
		/* Enable HSR without bypassing*/
		RCC_CR 		= 0x00010000;
		RCC_CFGR 	= 0x00000001;
		
	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
		/* Enable HSE with bypassing*/
		RCC_CR 		= 0x00040000;
		RCC_CFGR 	= 0x00000001;

	#elif RCC_CLOCK_TYPE  == RCC_HSI
		/* Enable HSI + Trimming = 0*/
		RCC_CR 		= 0x00000081;
		RCC_CFGR 	= 0x00000000;

	#elif RCC_CLOCK_TYPE == PLL
		#if RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
		
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
		
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
		
		#endif
		if(PLL_RDY == 1)
		{
			/* Enable HSI + Trimming = 0*/
			RCC_CR 	= 0x01000001; 
		}
		
	#else 
		#error("You choosed the wrong clock type")
	#endif
	
	
	
	
	
	
}