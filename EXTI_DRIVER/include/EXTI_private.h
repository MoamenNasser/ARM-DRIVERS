/*
 * EXTI_private.h
 *
 *  Created on: Aug 28, 2022
 *      Author: naser
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

//


//
typedef struct{
	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;


}EXTI_t;

// Base address of the external interrupt
#define EXTI			((volatile EXTI_t *) 0x40010400)
/*
#define EXTI_RTSR
*/

typedef struct{
	u32 AFIO_EVCR;
	u32 AFIO_MAPR;
	/*************************************************************
	 * instead of making 4 lines we can make array of 4
	 **************************************************************/

	/*
	u32 AFIO_EXTICR1;
	u32 AFIO_EXTICR2;
	u32 AFIO_EXTICR3;
	u32 AFIO_EXTICR4;
	*/
	/**/
	u32 AFIO_EXTICR[4];
	u32 AFIO_MAPR2;

}AFIO_t;

/**/
#define AFIO				((volatile AFIO_t *) 0x40010000)
/*					Here are the MACROS for the Lines*/
#define LINE0				0
#define LINE1				1
#define LINE2				2
#define LINE3				3
#define LINE4				4
#define LINE5				5
#define LINE6				6
#define LINE7				7
#define LINE8				8
#define LINE9				9
#define LINE10				10
#define LINE11				11
#define LINE12				12
#define LINE13				13
#define LINE14				14
#define LINE15				15

/*					Choosing the required clock			*/
#define RISING				0
#define FALLING				1
#define ON_CHANGE			2



#endif /* EXTI_PRIVATE_H_ */
