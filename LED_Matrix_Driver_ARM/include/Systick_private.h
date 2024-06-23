/*
 * Systick_private.h
 *
 *  Created on: Sep 5, 2022
 *      Author: naser
 */

#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_


/************************************************************************
 *
 * 				MACROS FOR SysTick control and status register Addresses
 * 				Base address + offset
 *
 ************************************************************************/
#define STK_CTRL				*((volatile u32*) 0xE000E010 + 0x00)


/************************************************************************
 *
 * 				MACROS FOR SysTick reload value register Addresses
 * 				Base address + offset
 *
 ************************************************************************/
#define STK_LOAD				*((volatile u32*) 0xE000E010 + 0x04)

/************************************************************************
 *
 * 				MACROS FOR SysTick current value register Addresses
 * 				Base address + offset
 *
 ************************************************************************/
#define STK_VAL					*((volatile u32*) 0xE000E010 + 0x08)

/************************************************************************
 *
 * 				MACROS FOR SysTick calibration value register Addresses
 * 				Base address + offset
 *
 ************************************************************************/
#define STK_CALIB				*((volatile u32*) 0xE000E010 + 0x0C)


/***********************************************************************
 ************************************************************************
 *
 *							PINS DESCRIPTION
 *
 * 				MACROS FOR SysTick control and status register PINS
 *				Bits 31:17 Reserved, must be kept cleared
 *
 ***********************************************************************
 ************************************************************************/
#define ENABLE					0
#define TICK_INT				1
#define CLKSOURCE				2
#define COUNTFLAG				16


/***********************************************************************
 ************************************************************************
 *
 *							PINS DESCRIPTION
 *
 * 				MACROS FOR SysTick calibration value register PINS
 *				Bits 31:17 Reserved, must be kept cleared
 *
 *				The whole register is read only
 *
 ***********************************************************************
 ************************************************************************/
#define SKEW					30
#define NOREF					31

/***********************************************************************
 ************************************************************************
 *
 *							PINS DESCRIPTION
 *
 * 				MACROS FOR SysTick current value register PINS
 *				Bits 31:24 Reserved, must be kept cleared
 *				Bits 23:0 CURRENT[23:0]: Current counter value
 *				The whole register is read write
 *
 ***********************************************************************
 ************************************************************************/




#endif /* SYSTICK_PRIVATE_H_ */
