/**********************************************************************************************
 * NVIC_Interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: naser
 **********************************************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_



/**/
void MNVIC_voidInit(void);
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

/**/
void MNVIC_voidSetPriority(s8 Copy_s8InterruptID, u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority, u32 Copy_u32GroupNumber);

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
/**/
#define GroupPriority0		0
#define GroupPriority1		1
#define GroupPriority2		2
#define GroupPriority3		3
#define GroupPriority4		4


/**/
#define SubGroupPriority0	0
#define SubGroupPriority1	1
#define SubGroupPriority2	2
#define SubGroupPriority3	3
#define SubGroupPriority4	4
#define SubGroupPriority5	5






#endif /* NVIC_INTERFACE_H_ */
