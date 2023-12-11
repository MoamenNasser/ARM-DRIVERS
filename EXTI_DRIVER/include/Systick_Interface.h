/*
 * Systick_Interface.h
 *
 *  Created on: Sep 5, 2022
 *      Author: naser
 */

#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

/*			Global variable with the type pointer to function		*/
void (*Callback) (void);

/*
 * 		Apply clock choice from the configuration file
 * 			AHB or AHB/8
 * 		Disable Systick interrupt
 * 		Disable Systick
 *
 * 			*/
void MSTK_voidInit(void);

/*
 * 			any function in time takes number of counts or ticks
 *
 *
 * 			*/
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks);

/**/
/*
 * 				void (*ptr) (void)  ===  pointer to function
 *
 * 								*/
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*Copy_ptr) (void));

/**/
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks, void (*Copy_ptr) (void));

/**/
void MSTK_voidStopTimer();

/**/
u32 MSTK_u32GetElapsedTime();

/**/
u32 MSTK_u32GetRemainingTime();







#endif /* SYSTICK_INTERFACE_H_ */
