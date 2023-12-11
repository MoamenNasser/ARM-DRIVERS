/*
 * NVIC_Interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: naser
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

/**/
void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber);
/**/
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber);
/**/
void MNVIC_voidSetPendingFlag(u8 Copy_u8IntNumber);
/**/

u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber);
/**/
void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber);


/*					Macros for each group for the IPR bits 			*/
/*					4 bits for group and 0 bit for subgroup			*/
#define Group3				0x05FA0300
/*					3 bits for group and 1 bit for subgroup			*/
#define Group4				0x05FA0400
/*					2 bits for group and 2 bit for subgroup			*/
#define Group5				0x05FA0500
/*					1 bits for group and 3 bit for subgroup			*/
#define Group6				0x05FA0600
/*					0 bits for group and 4 bit for subgroup			*/
#define Group7				0x05FA0700









#endif /* NVIC_INTERFACE_H_ */
