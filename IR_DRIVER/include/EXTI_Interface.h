/*
 * EXTI_iinterface.h
 *
 *  Created on: Aug 28, 2022
 *      Author: naser
 */

#ifndef EXTI_IINTERFACE_H_
#define EXTI_IINTERFACE_H_

void MEXTI_voidInit(void);

void MEXTI_voidEnableExternalInterrupt(u8 Copy_u8Line);

void MEXTI_voidDisableExternalInterrupt(u8 Copy_u8Line);

void MEXTI_voidSwTrigger(u8 Copy_u8Line);
/**/
void MAFIO_voidSetEXTIConfiguration(u8 Copy_u8Line, u8 Copy_u8PortMap);
/*			*/
void MEXTI_voidSetSignalLatch(u8 Copy_u8Line, u8 Copy_u8EXTISenseMode);
/**/
void MEXTI_voidSetCallBack(void (*ptr) (void));




#endif /* EXTI_IINTERFACE_H_ */
