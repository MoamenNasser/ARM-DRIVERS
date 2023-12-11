/*
 * LED_Matrix_Interface.h
 *
 *  Created on: Oct 14, 2022
 *      Author: naser
 */

#ifndef LED_MATRIX_INTERFACE_H_
#define LED_MATRIX_INTERFACE_H_



void HLEDMRX_voidInit(void);
void HLEDMRX_voidDisplay(u8 * Copy_u8Data);
void HLEDMRX_DisableAllColumns(void);
void HLEDMRX_SetRowValues(u8 Copy_u8Value);


#endif /* LED_MATRIX_INTERFACE_H_ */
