/***********************************************

Description : CONFIGURATION FILE FOR NVIC DRIVER

Date        : 27-10-2023

Author      : Mohamed Khaled

***********************************************/
#ifndef MCAL_RCC_RCC_H_
#define MCAL_RCC_RCC_H_
//////////////////////GUARD FILE///////////////////////////////////////////
/* ERROR STATUS ENUM */
#include "std_types.h"
#include "RCC_Prv.h"
typedef enum
{
	Rcc_enuOk,
	Rcc_enuTimeOutError,
	RCC_enuUnLogicActionError,
	RCC_enuNullPointerError,
	RCC_enuInvalid_M_Error,
	RCC_enuInvalid_N_Error,
	RCC_enuInvalid_P_Error,
	RCC_enuInvalid_ScrPll_Error,
	RCC_enuInvalid_Q_Error,
	RCC_enuPll_IS_On_Error,
	Rcc_enuWrongPeriphralBusError,
	Rcc_enuWrongBusPrescalerError

} Rcc_tenuErrorStatus;


#define SWS         ((RCC_CFGR & 0xFFFFFFF3)>>2 )
#define PLL_SRC     ((RCC_PLLCFGR & 0xFFBFFFFF)>>22)
/////////////////////////////////////////////////////////////////
/* SYSCLK OPTIONS AND INPUT PARAMETERS FOR Rcc_enuSelectSysCLk */

#define RCC_CLK_HSI 	0x00000000		//ALSO USED IN Rcc_enuCheckCLk
#define RCC_CLK_HSE 	0x00000001		//ALSO USED IN Rcc_enuCheckCLk
#define RCC_CLK_PLL 	0x00000002		//ALSO USED IN Rcc_enuCheckCLk

#define RCC_STATE_PRESERVE 	   	0
#define RCC_STATE_NOTPRESERVE 	1
/*CONTROL EACH CLK BY SELECTING THREE FROM THOSE INPUT PARAMETERS FOR Rcc_enuControlCLk*/
#define RCC_CNTROL_HSION 	3
#define RCC_CNTROL_HSIOFF	4
#define RCC_CNTROL_HSEON	5
#define RCC_CNTROL_HSEOFF	6
#define RCC_CNTROL_PLLON	7
#define RCC_CNTROL_PLLOFF	8
//////////////////_/////////////////////////////////////////////////////////////////////

//////VALUES OF THE CREATED VALUE FOR CHECKING READY OR NOT IN  Rcc_enuCheckCLk/////////
#define RCC_STATE_NOTREADY  	0
#define RCC_STATE_READY  		1

//////////////////////////////INPUTS FOR Rcc_enuCnfgrPll////////////////////////////////
/*PLLP INPUTS*/
#define RCC_PLLP_DIVBY_2        0
#define RCC_PLLP_DIVBY_4        1
#define RCC_PLLP_DIVBY_6        2
#define RCC_PLLP_DIVBY_8        3

/*SRCPLL INPUTS*/
#define RCC_PLLSRC_HSI			0
#define RCC_PLLSRC_HSE			1

/*PLLQ INPUTS*/
#define RCC_Q_DIVBY_2 			2
#define RCC_Q_DIVBY_3 			3
#define RCC_Q_DIVBY_4 			4
#define RCC_Q_DIVBY_5 			5
#define RCC_Q_DIVBY_6 			6
#define RCC_Q_DIVBY_7 			7
#define RCC_Q_DIVBY_8 			8
#define RCC_Q_DIVBY_9 			9
#define RCC_Q_DIVBY_10 			10
#define RCC_Q_DIVBY_11			11
#define RCC_Q_DIVBY_12			12
#define RCC_Q_DIVBY_13			13
#define RCC_Q_DIVBY_14			14
#define RCC_Q_DIVBY_15			15


//////////////////INPUTS FOR Rcc_enuEnablePeriphral FUNCTION/////////////////////////////////
/*Copy_u8PeriphralBus  OPTIONS*/
#define RCC_REGISTER_AHB1       6
#define RCC_REGISTER_AHB2       7
#define RCC_REGISTER_APB1       8
#define RCC_REGISTER_APB2       9


/*Copy_u8Periphral  OPTIONS*/
/*AHB1_Periphral_bitmask*/
#define AHB1_GPIOA_EN   0x01
#define AHB1_GPIOB_EN   0x02
#define AHB1_GPIOC_EN   0x04
#define AHB1_GPIOD_EN   0x08
#define AHB1_GPIOE_EN   0x10
#define AHB1_GPIOH_EN   0x80
#define AHB1_CRC_EN     0x1000
#define AHB1_DMA1_EN    0x200000
#define AHB1_DMA2_EN    0x400000
/*AHB2_Periphral_bitmask*/
#define AHB2_OTGFS_EN   0x80
/*APB1_Periphral_bitmask*/
#define APB1_TIM2_EN    0x1
#define APB1_TIM3_EN    0x2
#define APB1_TIM4_EN    0x4
#define APB1_TIM5_EN    0x8
#define APB1_WWDG_EN    0x800
#define APB1_SPI2_EN    0x4000
#define APB1_SPI3_EN    0x8000
#define APB1_USART2_EN  0x20000
#define APB1_I2C1_EN    0x200000
#define APB1_I2C2_EN    0x400000
#define APB1_I2C3_EN    0x800000
#define APB1_PWR_EN     0x10000000
/*APB2_Periphral_bitmask*/
#define APB2_TIM1_EN    0x1
#define	APB2_USART1_EN  0x10
#define APB2_USART6_EN  0x20
#define APB2_ADC1_EN    0x100
#define	APB2_SDIO_EN    0x800
#define APB2_SPI1_EN    0x1000
#define APB2_SPI4_EN    0x2000
#define APB2_SYSCFG_EN  0x4000
#define APB2_TIM9_EN    0x10000
#define APB2_TIM10_EN   0x20000
#define APB2_TIM11_EN   0x40000

///////////////////////INPUTS FOR Rcc_enuCfgBusPrescalers///////////////////////////////////


/*PPRE2 OPTIONS*/
#define RCC_APB2_NOTDIV  0xFFFF1FFF
#define RCC_APB2_DIV2    0x8000
#define RCC_APB2_DIV4    0xA000
#define RCC_APB2_DIV8    0xC000
#define RCC_APB2_DIV16   0xE000

/*PPRE1 OPTIONS*/
#define RCC_APB1_NOTDIV  0xFFFFE3FF
#define RCC_APB1_DIV2    0x1000
#define RCC_APB1_DIV4    0x1400
#define RCC_APB1_DIV8    0x1800
#define RCC_APB1_DIV16   0x1C00

/*HPRE OPTIONS*/
#define RCC_AHB_NOTDIV  0xFFFFFF0F
#define RCC_AHB_DIV2    0x80
#define RCC_AHB_DIV4    0x90
#define RCC_AHB_DIV8    0xA0
#define RCC_AHB_DIV16   0xB0
#define RCC_AHB_DIV64   0xC0
#define RCC_AHB_DIV128  0xD0
#define RCC_AHB_DIV256  0xE0
#define RCC_AHB_DIV512  0xF0

///////////////////////////////////////*FUNCTIONS*///////////////////////////////////////////

Rcc_tenuErrorStatus Rcc_enuSelectSysCLk(uint8 Copy_u8SysClk , uint8 Copy_u8OldSysClk) ;

Rcc_tenuErrorStatus Rcc_enuControlCLk(uint8 Copy_u8ControlHSI  ,uint8 Copy_u8ControlHSE ,uint8 Copy_u8ControlPLL) ;

Rcc_tenuErrorStatus Rcc_enuCheckCLk(uint8 Copy_u8CLk, pu8 Add_pu8RdyStatus) ;

Rcc_tenuErrorStatus Rcc_enuCnfgrPll(uint8 COPY_u8M , uint16 Copy_u16N , uint8 Copy_u8P , uint8 Copy_u8SrcPll , uint8 Copy_u8Q);

Rcc_tenuErrorStatus Rcc_enuEnablePeriphral(uint8 Copy_u8PeriphralBus , uint32 Copy_u32Periphral);

Rcc_tenuErrorStatus Rcc_enuDisablePeriphral(uint8 Copy_u8PeriphralBus , uint32 Copy_u32Periphral);

Rcc_tenuErrorStatus Rcc_enuCfgBusPrescalers(uint32 Copy_u32Prescaler);
////////////////////////////////////////////////////////////////////////////////////////////
#endif /* MCAL_RCC_RCC_H_ */
