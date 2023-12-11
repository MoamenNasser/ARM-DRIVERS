/*************************************************************************************/
/*		Author: Moamen Nasser								*/
/*		Date: 13 Aug 2022 									*/
/*		Version: V1.0										*/
/************************************************************************************/


#ifndef _RCC_Private_H
#define _RCC_Private_H

/*		RCC register definitions			*/
#define RCC_CR			*((u32*)0x40021000)
#define RCC_CFGR		*((u32*)0x40021004)  	// 1000 + 4(offset)
#define RCC_CIR			*((u32*)0x40021008)		// 1000 + 8(offset)
#define RCC_APB2RSTR	*((u32*)0x4002100C)
#define RCC_APB1RSTR	*((u32*)0x40021010)
#define RCC_AHBENR		*((u32*)0x40021014)
#define	RCC_APB2ENR		*((u32*)0x40021018)
#define	RCC_APB1ENR		*((u32*)0x4002101C)
#define	RCC_BDCR		*((u32*)0x40021020)
#define	RCC_CSR			*((u32*)0x40021024)

/*		PORT A registers			*/
#define PORTA_CRL		*((u32*)0x40010800)
#define PORTA_ODR		*((u32*)0x4001080C)

/*		PORT B registers			*/
#define PORTB_CRL		*((u32*)0x40010C00)
#define PORTB_ODR		*((u32*)0x40010C0C)

/*		PORT C registers			*/
#define PORTC_CRL		*((u32*)0x40011000)
#define PORTC_ODR		*((u32*)0x4001100C)


/*		RCC_CR register pins definitions	*/	
#define	HSI_ON			0	// read and write
#define	HSI_RDY			1	// read only
#define HSITRIM0		3	// read and write
#define HSITRIM1		4	// read and write
#define HSITRIM2		5	// read and write
#define HSITRIM3		6	// read and write
#define HSITRIM4		7	// read and write
#define	HSICAL0			8	// read only
#define	HSICAL1			9	// read only
#define	HSICAL2			10	// read only
#define	HSICAL3			11	// read only
#define	HSICAL4			12	// read only
#define	HSICAL5			13	// read only
#define	HSICAL6			14	// read only
#define	HSICAL7			15	// read only
#define HSE_ON			16	// read and write
#define HSE_RDY			17	// read only
#define HSE_BYP			18	//
#define CSS_ON			19 	//
#define PLL_ON			24	// read write
#define PLL_RDY			25  // read only


/*		RCC_CFGR register pins definitions	*/	
#define SW0				0
#define SW1				1
#define SWS0			2
#define SWS1			3
#define HPRE0			4
#define HPRE1			5
#define HPRE2			6
#define HPRE3			7
#define PPRE10			8
#define PPRE11			9
#define PPRE12			10
#define PPRE20			11
#define PPRE21			12
#define PPRE22			13
#define ADCPRE0			14
#define ADCPRE1			15
#define PLL_SRC			16
#define PLL_XTPRE		17
#define PLLMUL0			18
#define PLLMUL1			19
#define PLLMUL2			20
#define PLLMUL3			21
#define USB_PRE			22
#define MCO0			24
#define MCO1			25
#define MCO2			26


/*		RCC_CIR register definitions 		*/
#define LSI_RDYF		0
#define LSE_RDYF		1
#define HSI_RDYF		2
#define HSE_RDYF		3
#define PLL_RDYF		4
#define CSSF			7
#define LSI_RDYIE		8
#define LSE_RDYIE		9
#define HSI_RDYIE		10
#define HSE_RDYIE		11
#define PLL_RDYIE		12
#define LSI_RDYC		16
#define LSE_RDYC		17
#define HSI_RDYC		18
#define HSE_RDYC		19
#define PLL_RDYC		20
#define CSSC			23

/*		RCC_APB2RSTR register definitions 		*/
#define AFIO_RST		0
#define IOPA_RST		2
#define IOPB_RST		3
#define IOPC_RST		4
#define IOPD_RST		5
#define IOPE_RST		6
#define IOPF_RST		7
#define IOPG_RST		8
#define ADC1_RST		9
#define ADC2_RST		10
#define	TIM1_RST		11
#define SPI1_RST		12
#define TIM8_RST		13
#define USART1_RST		14
#define ADC3_RST		15
#define TIM9_RST		19
#define TIM10_RST		20
#define TIM11_RST		21


/*		RCC_APB1RSTR Pins definitions			*/
#define TIM2_RST		0
#define TIM3_RST		1
#define TIM4_RST		2
#define TIM5_RST		3
#define TIM6_RST		4
#define TIM7_RST		5
#define TIM12_RST		6
#define TIM13_RST		7
#define TIM14_RST		8
#define WWDG_RST		11
#define	SPI2_RST		14
#define SPI3_RST		15
#define	USART2_RST		17
#define	USART3_RST		18
#define	UART4_RST		19
#define	UART5_RST		20
#define	I2C1_RST		21
#define	I2C2_RST		22
#define	USB_RST			23
#define	CAN_RST			25
#define BKP_RST			27
#define PWR_RST			28
#define DAC_RST			29

/*		RCC_AHBENR Pins definitions			*/
#define DMA1_EN			0
#define DMA2_EN			1
#define SRAM_EN			2
#define FLITF_EN		4
#define CRCEN			6
#define FSMC_EN			8
#define SDIO_EN			10

/*		RCC_APB2ENR Pins definitions		*/
#define AFIO_EN			0
#define IOPA_EN			2
#define IOPB_EN			3
#define IOPC_EN			4
#define IOPD_EN			5
#define IOPE_EN			6
#define IOPF_EN			7
#define IOPG_EN			8
#define ADC1_EN			9
#define ADC2_EN			10
#define TIM1_EN			11
#define SPI1_EN			12
#define TIM8_EN			13
#define USART_EN		14
#define ADC3_EN			15
#define TIM9_EN			19
#define TIM10_EN		20
#define TIM11_EN		21


/*		RCC_APB1ENR Pins definitions		*/
#define TIM2_EN			0
#define TIM3_EN			1
#define TIM4_EN			2
#define TIM5_EN			3
#define TIM6_EN			4
#define TIM7_EN			5
#define TIM12_EN		6
#define TIM13_EN		7
#define TIM14_EN		8
#define WWD_GEN			11
#define SPI2_EN			14
#define SPI3_EN			15
#define USART2_EN		17
#define USART3_EN		18
#define UART4_EN		19
#define UART5_EN		20
#define I2C1_EN			21
#define I2C2_EN			22
#define USB_EN			23
#define CAN_EN			25
#define BKP_EN			27
#define PWR_EN			28
#define DAC_EN			29


/*		RCC_BDCR Pins definitions		*/
#define LSEON			0	//LSEON: External low-speed oscillator enable
#define LSE_RDY			1	//LSERDY: External low-speed oscillator ready
#define LSE_BYP			2	//LSEBYP: External low-speed oscillator bypass
#define RTCSEL0			8	//RTCSEL[1:0]: RTC clock source selection
#define RTCSEL1			9	//RTCSEL[1:0]: RTC clock source selection
#define RTC_EN			15	//RTCEN: RTC clock enable
#define BDRST			16	//BDRST: Backup domain software reset

/*		RCC_CSR Pins definitions		*/
#define LSION			0	//LSION: Internal low-speed oscillator enable
#define LSI_RDY			1	//LSIRDY: Internal low-speed oscillator ready
#define RMVF			24	//RMVF: Remove reset flag
#define PIN_RSTF		26	//PINRSTF: PIN reset flag
#define POR_RSTF		27	//PORRSTF: POR/PDR reset flag
#define SFT_RSTF		28	//SFTRSTF: Software reset flag
#define IWDG_RSTF		29	//IWDGRSTF: Independent watch-dog reset flag
#define WWDG_RSTF		30	//WWDGRSTF: Window watch-dog reset flag
#define LPWR_RSTF		31  // LPWRRSTF: Low-power reset flag



/*		Clock types 			*/
#define 	RCC_HSE_CRYSTAL		0	
#define 	RCC_HSE_RC			1	
#define 	RCC_HSI				2
#define 	RCC_PLL				3


/*		PLL Options 			*/
#define RCC_PLL_IN_HSI_DIV_2	0
#define	RCC_PLL_IN_HSE_DIV_2	1
#define	RCC_PLL_IN_HSE			2



#endif
