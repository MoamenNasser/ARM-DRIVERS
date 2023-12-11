/**********************************************************************************************
 * NVIC_private.h
 *
 *  Created on: Aug 27, 2022
 *      Author: naser
 **********************************************************************************************/

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_


/*			Base Address*/
/*			Enables external interrupts from 0 to 31*/
#define NVIC_ISER0					*((u32 *) 0xE000E100)
/*			Enables external interrupts from 32 to 64*/
#define NVIC_ISER1					*((u32 *) 0xE000E104)

/*			Disables external interrupts from 0 to 31*/
#define NVIC_ICER0					*((u32 *) 0xE000E180)
/*			Disables external interrupts from 32 to 64*/
#define NVIC_ICER1					*((u32 *) 0xE000E184)

/*			Disables external interrupts from 0 to 31*/
#define NVIC_ISPR0					*((u32 *) 0xE000E200)
/*			Disables external interrupts from 32 to 64*/
#define NVIC_ISPR1					*((u32 *) 0xE000E204)

/*			Disables external interrupts from 0 to 31*/
#define NVIC_ICPR0					*((u32 *) 0xE000E280)
/*			Disables external interrupts from 32 to 64*/
#define NVIC_ICPR1					*((u32 *) 0xE000E284)

// volatile for what?
/*			Disables external interrupts from 0 to 31*/
#define NVIC_IABR0					*((volatile u32 *) 0xE000E300)
/*			Disables external interrupts from 32 to 64*/
#define NVIC_IABR1					*((volatile u32 *) 0xE000E304)
/**/
#define NVIC_IPR					((volatile u8 *) 0xE000E100 + 0x300)

/*			System control block register to choose the group and sub group as we like 			*/
#define SCB_AIRCR					*((volatile u32*) 0xE000ED00 + 0x0C)
/**/
#define SCB_SCR						*((volatile u32*) 0xE000ED00 + 0x0C)
/**/
#define SCB_CCR						*((volatile u32*) 0xE000ED00 + 0x0C)


/*				Priority sub and group			*/
#define MNVIC_GROUP_4_SUB_0			0x05FA0300
#define MNVIC_GROUP_3_SUB_1			0x05FA0400
#define MNVIC_GROUP_2_SUB_2			0x05FA0500
#define MNVIC_GROUP_1_SUB_3			0x05FA0600
#define MNVIC_GROUP_0_SUB_4			0x05FA0700







#endif /* NVIC_PRIVATE_H_ */
