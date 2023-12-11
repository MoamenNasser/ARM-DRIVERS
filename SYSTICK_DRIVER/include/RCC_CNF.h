/*************************************************************************************/
/*		Author: Moamen Nasser								*/
/*		Date: 13 Aug 2022 									*/
/*		Version: V1.0										*/
/************************************************************************************/


#ifndef _RCC_CNF_H
#define _RCC_CNF_H

/*******************************************		
		Options: 	RCC_HSE_CRYSTAL
					RCC_HSE_RC
					RCC_HSI
					RCC_PLL
				
***********************************************/

#define RCC_CLOCK_TYPE  RCC_HSE_CRYSTAL

/*****************************************
Options: 	RCC_PLL_IN_HSI_DIV_2
			RCC_PLL_IN_HSE_DIV_2
			RCC_PLL_IN_HSE
			
*****************************************/

/********************************************* 	
	Note:: Select value only if you have PLL 
			as input clock source		
*****************************************/
#if RCC_CLOCK_TYPE == RCC_PLL

#define RCC_PLL_INPUT	RCC_PLL_IN_HSE_DIV_2

#endif


/* 		Option 2 to 16		*/
#if RCC_CLOCK_TYPE == RCC_PLL

#define RCC_PLL_MUL_VAL		4

#endif








#endif