/*************************************************************************************/
/*		Author: Moamen Nasser								*/
/*		Date: 13 Aug 2022 									*/
/*		Version: V1.0										*/
/************************************************************************************/

#ifndef _RCC_Interface_H
#define _RCC_Interface_H
/*		Functions prototypes		*/	
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_voidInitSysClock(void);


#define RCC_AHB			0
#define RCC_APB1		1
#define RCC_APB2		2





#endif