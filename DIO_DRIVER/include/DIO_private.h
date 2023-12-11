#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/*			Base address of port A				*/
#define GPIOA_BASE_ADDRESS		*((u32*)0x40010800)
/*			Base address of port B				*/
#define GPIOB_BASE_ADDRESS		*((u32*)0x40010C00)
/*			Base address of port C				*/
#define GPIOC_BASE_ADDRESS		*((u32*)0x40011000)
/*			Base address of port D				*/
#define GPIOD_BASE_ADDRESS		*((u32*)0x40011400)
/*			Base address of port E				*/
#define GPIOE_BASE_ADDRESS		*((u32*)0x40011800)
/*			Base address of port F				*/
#define GPIOF_BASE_ADDRESS		*((u32*)0x40011C00)
/*			Base address of port G				*/
#define GPIOG_BASE_ADDRESS		*((u32*)0x40012000)

/*			Register Addresses for port A*/
#define GPIOA_CRL				*((u32*)(GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_CRH				*((u32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR				*((u32*)(GPIOA_BASE_ADDRESS + 0x08))
#define GPIOA_ODR				*((u32*)(GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOA_BSR				*((u32*)(GPIOA_BASE_ADDRESS + 0x10))
#define GPIOA_BRR 				*((u32*)(GPIOA_BASE_ADDRESS + 0x14))
#define GPIOA_LCK				*((u32*)(GPIOA_BASE_ADDRESS + 0x18))

/*			Register Addresses for port B*/
#define GPIOB_CRL				*((u32*)(GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_CRH				*((u32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_IDR				*((u32*)(GPIOB_BASE_ADDRESS + 0x08))
#define GPIOB_ODR				*((u32*)(GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOB_BSR				*((u32*)(GPIOB_BASE_ADDRESS + 0x10))
#define GPIOB_BRR 				*((u32*)(GPIOB_BASE_ADDRESS + 0x14))
#define GPIOB_LCK				*((u32*)(GPIOB_BASE_ADDRESS + 0x18))

/*			Register Addresses for port C*/
#define GPIOC_CRL				*((u32*)(GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_CRH				*((u32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_IDR				*((u32*)(GPIOC_BASE_ADDRESS + 0x08))
#define GPIOC_ODR				*((u32*)(GPIOC_BASE_ADDRESS + 0x0C))
#define GPIOC_BSR				*((u32*)(GPIOC_BASE_ADDRESS + 0x10))
#define GPIOC_BRR 				*((u32*)(GPIOC_BASE_ADDRESS + 0x14))
#define GPIOC_LCK				*((u32*)(GPIOC_BASE_ADDRESS + 0x18))


/*			Register Addresses for port D*/
#define GPIOD_CRL				*((u32*)(GPIOD_BASE_ADDRESS + 0x00))
#define GPIOD_CRH				*((u32*)(GPIOD_BASE_ADDRESS + 0x04))
#define GPIOD_IDR				*((u32*)(GPIOD_BASE_ADDRESS + 0x08))
#define GPIOD_ODR				*((u32*)(GPIOD_BASE_ADDRESS + 0x0C))
#define GPIOD_BSR				*((u32*)(GPIOD_BASE_ADDRESS + 0x10))
#define GPIOD_BRR 				*((u32*)(GPIOD_BASE_ADDRESS + 0x14))
#define GPIOD_LCK				*((u32*)(GPIOD_BASE_ADDRESS + 0x18))


/*			Register Addresses for port E*/
#define GPIOE_CRL				*((u32*)(GPIOE_BASE_ADDRESS + 0x00))
#define GPIOE_CRH				*((u32*)(GPIOE_BASE_ADDRESS + 0x04))
#define GPIOE_IDR				*((u32*)(GPIOE_BASE_ADDRESS + 0x08))
#define GPIOE_ODR				*((u32*)(GPIOE_BASE_ADDRESS + 0x0C))
#define GPIOE_BSR				*((u32*)(GPIOE_BASE_ADDRESS + 0x10))
#define GPIOE_BRR 				*((u32*)(GPIOE_BASE_ADDRESS + 0x14))
#define GPIOE_LCK				*((u32*)(GPIOE_BASE_ADDRESS + 0x18))


/*			Register Addresses for port F*/
#define GPIOF_CRL				*((u32*)(GPIOF_BASE_ADDRESS + 0x00))
#define GPIOF_CRH				*((u32*)(GPIOF_BASE_ADDRESS + 0x04))
#define GPIOF_IDR				*((u32*)(GPIOF_BASE_ADDRESS + 0x08))
#define GPIOF_ODR				*((u32*)(GPIOF_BASE_ADDRESS + 0x0C))
#define GPIOF_BSR				*((u32*)(GPIOF_BASE_ADDRESS + 0x10))
#define GPIOF_BRR 				*((u32*)(GPIOF_BASE_ADDRESS + 0x14))
#define GPIOF_LCK				*((u32*)(GPIOF_BASE_ADDRESS + 0x18))


/*			Register Addresses for port G*/
#define GPIOG_CRL				*((u32*)(GPIOG_BASE_ADDRESS + 0x00))
#define GPIOG_CRH				*((u32*)(GPIOG_BASE_ADDRESS + 0x04))
#define GPIOG_IDR				*((u32*)(GPIOG_BASE_ADDRESS + 0x08))
#define GPIOG_ODR				*((u32*)(GPIOG_BASE_ADDRESS + 0x0C))
#define GPIOG_BSR				*((u32*)(GPIOG_BASE_ADDRESS + 0x10))
#define GPIOG_BRR 				*((u32*)(GPIOG_BASE_ADDRESS + 0x14))
#define GPIOG_LCK				*((u32*)(GPIOG_BASE_ADDRESS + 0x18))


/*			PORT A registers			*/
#define PORTA_CRL				*((u32*)0x40010800)
#define PORTA_ODR				*((u32*)0x4001080C)

/*			PORT B registers			*/
#define PORTB_CRL				*((u32*)0x40010C00)
#define PORTB_ODR				*((u32*)0x40010C0C)

/*			PORT C registers			*/
#define PORTC_CRL				*((u32*)0x40011000)
#define PORTC_ODR				*((u32*)0x4001100C)





#endif
