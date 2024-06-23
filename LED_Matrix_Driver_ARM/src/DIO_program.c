/**********************************************************************************************
 * 		DIO_program.c
 *
 *  	Created on: Aug 27, 2022
 *      Author: Moamen Naser
 *      Version: V1.0
 **********************************************************************************************/


#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"DIO_interface.h"
#include"DIO_private.h"
#include"DIO_CNFG.h"



/***********************************************************************************
 *
 *
 ***********************************************************************************/
void MGPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode)
{
	switch(copy_u8Port)
	{
	/*							PORT A					*/
	case GPIOA:
		if(copy_u8Pin <= 7)
		{
			GPIOA_CRL &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOA_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		else if(copy_u8Pin <= 15)
		{
			copy_u8Pin = copy_u8Pin - 8;
			GPIOA_CRH &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOA_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		break;
	/*						PORT B					*/
	case GPIOB:
		if(copy_u8Pin <= 7)
		{
			GPIOB_CRL &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOB_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		else if(copy_u8Pin <= 15)
		{
			copy_u8Pin = copy_u8Pin - 8;
			GPIOB_CRH &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOB_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		break;
	/*						PORT C					*/
	case GPIOC:
		if(copy_u8Pin <= 7)
		{
			GPIOC_CRL &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOC_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		else if(copy_u8Pin <= 15)
		{
			copy_u8Pin = copy_u8Pin - 8;
			GPIOC_CRH &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOC_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		break;
	/*						PORT D					*/
	case GPIOD:
		if(copy_u8Pin <= 7)
		{
			GPIOD_CRL &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOD_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		else if(copy_u8Pin <= 15)
		{
			copy_u8Pin = copy_u8Pin - 8;
			GPIOD_CRH &= ~((0b1111) << (copy_u8Pin * 4));
			GPIOD_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
		}
		break;
	default: break;
	}
}




/***********************************************************************************
 *
 *
 ***********************************************************************************/
void MGPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value)
{
	switch(copy_u8Port)
	{
	/*							PORT A					*/
	case GPIOA:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOA_ODR, copy_u8Pin);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOA_ODR, copy_u8Pin);;
		}
		break;
	/*							PORT B					*/
	case GPIOB:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOB_ODR, copy_u8Pin);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOB_ODR, copy_u8Pin);;
		}
		break;
	/*							PORT C					*/
	case GPIOC:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOC_ODR, copy_u8Pin);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOC_ODR, copy_u8Pin);;
		}
		break;
	/*							PORT D					*/
	case GPIOD:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOD_ODR, copy_u8Pin);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOD_ODR, copy_u8Pin);;
		}
		break;
	default: break;
	}
}



/***********************************************************************************
 *
 *
 ***********************************************************************************/
u8 MGPIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin)
{
	u8 LOC_u8Result = 0;
	switch(copy_u8Port)
	{
	/*							PORT A					*/
	case GPIOA:
		LOC_u8Result = GET_BIT(GPIOA_IDR, copy_u8Pin);
		break;
	/*							PORT B					*/
	case GPIOB:
		LOC_u8Result = GET_BIT(GPIOB_IDR, copy_u8Pin);
		break;
	/*							PORT C					*/
	case GPIOC:
		LOC_u8Result = GET_BIT(GPIOC_IDR, copy_u8Pin);
		break;
	/*							PORT D					*/
	case GPIOD:
		LOC_u8Result = GET_BIT(GPIOD_IDR, copy_u8Pin);
		break;
	default: break;
	}
	return LOC_u8Result;
}



/***********************************************************************************
 *
 *
 ***********************************************************************************/
void MGPIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8Value)
{
	switch(copy_u8Port)
	{
	/*							PORT A					*/
	case GPIOA:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOA_ODR, 0);
			SET_BIT(GPIOA_ODR, 1);
			SET_BIT(GPIOA_ODR, 2);
			SET_BIT(GPIOA_ODR, 3);
			SET_BIT(GPIOA_ODR, 4);
			SET_BIT(GPIOA_ODR, 5);
			SET_BIT(GPIOA_ODR, 6);
			SET_BIT(GPIOA_ODR, 7);
			SET_BIT(GPIOA_ODR, 8);
			SET_BIT(GPIOA_ODR, 9);
			SET_BIT(GPIOA_ODR, 10);
			SET_BIT(GPIOA_ODR, 11);
			SET_BIT(GPIOA_ODR, 12);
			SET_BIT(GPIOA_ODR, 13);
			SET_BIT(GPIOA_ODR, 14);
			SET_BIT(GPIOA_ODR, 15);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOA_ODR, 0);
			CLR_BIT(GPIOA_ODR, 1);
			CLR_BIT(GPIOA_ODR, 2);
			CLR_BIT(GPIOA_ODR, 3);
			CLR_BIT(GPIOA_ODR, 4);
			CLR_BIT(GPIOA_ODR, 5);
			CLR_BIT(GPIOA_ODR, 6);
			CLR_BIT(GPIOA_ODR, 7);
			CLR_BIT(GPIOA_ODR, 8);
			CLR_BIT(GPIOA_ODR, 9);
			CLR_BIT(GPIOA_ODR, 10);
			CLR_BIT(GPIOA_ODR, 11);
			CLR_BIT(GPIOA_ODR, 12);
			CLR_BIT(GPIOA_ODR, 13);
			CLR_BIT(GPIOA_ODR, 14);
			CLR_BIT(GPIOA_ODR, 15);
		}
		break;
	/*							PORT B					*/
	case GPIOB:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOB_ODR, 0);
			SET_BIT(GPIOB_ODR, 1);
			SET_BIT(GPIOB_ODR, 2);
			SET_BIT(GPIOB_ODR, 3);
			SET_BIT(GPIOB_ODR, 4);
			SET_BIT(GPIOB_ODR, 5);
			SET_BIT(GPIOB_ODR, 6);
			SET_BIT(GPIOB_ODR, 7);
			SET_BIT(GPIOB_ODR, 8);
			SET_BIT(GPIOB_ODR, 9);
			SET_BIT(GPIOB_ODR, 10);
			SET_BIT(GPIOB_ODR, 11);
			SET_BIT(GPIOB_ODR, 12);
			SET_BIT(GPIOB_ODR, 13);
			SET_BIT(GPIOB_ODR, 14);
			SET_BIT(GPIOB_ODR, 15);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOB_ODR, 0);
			CLR_BIT(GPIOB_ODR, 1);
			CLR_BIT(GPIOB_ODR, 2);
			CLR_BIT(GPIOB_ODR, 3);
			CLR_BIT(GPIOB_ODR, 4);
			CLR_BIT(GPIOB_ODR, 5);
			CLR_BIT(GPIOB_ODR, 6);
			CLR_BIT(GPIOB_ODR, 7);
			CLR_BIT(GPIOB_ODR, 8);
			CLR_BIT(GPIOB_ODR, 9);
			CLR_BIT(GPIOB_ODR, 10);
			CLR_BIT(GPIOB_ODR, 11);
			CLR_BIT(GPIOB_ODR, 12);
			CLR_BIT(GPIOB_ODR, 13);
			CLR_BIT(GPIOB_ODR, 14);
			CLR_BIT(GPIOB_ODR, 15);
		}
		break;
	/*							PORT C					*/
	case GPIOC:
		/*			Checking for the value of the pin		*/
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOC_ODR, 0);
			SET_BIT(GPIOC_ODR, 1);
			SET_BIT(GPIOC_ODR, 2);
			SET_BIT(GPIOC_ODR, 3);
			SET_BIT(GPIOC_ODR, 4);
			SET_BIT(GPIOC_ODR, 5);
			SET_BIT(GPIOC_ODR, 6);
			SET_BIT(GPIOC_ODR, 7);
			SET_BIT(GPIOC_ODR, 8);
			SET_BIT(GPIOC_ODR, 9);
			SET_BIT(GPIOC_ODR, 10);
			SET_BIT(GPIOC_ODR, 11);
			SET_BIT(GPIOC_ODR, 12);
			SET_BIT(GPIOC_ODR, 13);
			SET_BIT(GPIOC_ODR, 14);
			SET_BIT(GPIOC_ODR, 15);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOC_ODR, 0);
			CLR_BIT(GPIOC_ODR, 1);
			CLR_BIT(GPIOC_ODR, 2);
			CLR_BIT(GPIOC_ODR, 3);
			CLR_BIT(GPIOC_ODR, 4);
			CLR_BIT(GPIOC_ODR, 5);
			CLR_BIT(GPIOC_ODR, 6);
			CLR_BIT(GPIOC_ODR, 7);
			CLR_BIT(GPIOC_ODR, 8);
			CLR_BIT(GPIOC_ODR, 9);
			CLR_BIT(GPIOC_ODR, 10);
			CLR_BIT(GPIOC_ODR, 11);
			CLR_BIT(GPIOC_ODR, 12);
			CLR_BIT(GPIOC_ODR, 13);
			CLR_BIT(GPIOC_ODR, 14);
			CLR_BIT(GPIOC_ODR, 15);
		}
		break;
	/*							PORT D					*/
	case GPIOD:
		if(copy_u8Value == GPIO_HIGH)
		{
			SET_BIT(GPIOD_ODR, 0);
			SET_BIT(GPIOD_ODR, 1);
			SET_BIT(GPIOD_ODR, 2);
			SET_BIT(GPIOD_ODR, 3);
			SET_BIT(GPIOD_ODR, 4);
			SET_BIT(GPIOD_ODR, 5);
			SET_BIT(GPIOD_ODR, 6);
			SET_BIT(GPIOD_ODR, 7);
			SET_BIT(GPIOD_ODR, 8);
			SET_BIT(GPIOD_ODR, 9);
			SET_BIT(GPIOD_ODR, 10);
			SET_BIT(GPIOD_ODR, 11);
			SET_BIT(GPIOD_ODR, 12);
			SET_BIT(GPIOD_ODR, 13);
			SET_BIT(GPIOD_ODR, 14);
			SET_BIT(GPIOD_ODR, 15);
		}
		else if(copy_u8Value == GPIO_LOW)
		{
			CLR_BIT(GPIOD_ODR, 0);
			CLR_BIT(GPIOD_ODR, 1);
			CLR_BIT(GPIOD_ODR, 2);
			CLR_BIT(GPIOD_ODR, 3);
			CLR_BIT(GPIOD_ODR, 4);
			CLR_BIT(GPIOD_ODR, 5);
			CLR_BIT(GPIOD_ODR, 6);
			CLR_BIT(GPIOD_ODR, 7);
			CLR_BIT(GPIOD_ODR, 8);
			CLR_BIT(GPIOD_ODR, 9);
			CLR_BIT(GPIOD_ODR, 10);
			CLR_BIT(GPIOD_ODR, 11);
			CLR_BIT(GPIOD_ODR, 12);
			CLR_BIT(GPIOD_ODR, 13);
			CLR_BIT(GPIOD_ODR, 14);
			CLR_BIT(GPIOD_ODR, 15);
		}
		break;
	}
}


/***********************************************************************************
 *
 *
 ***********************************************************************************/
	/*
void MGPIO_voidSetPortDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value)
{

}

	 */
