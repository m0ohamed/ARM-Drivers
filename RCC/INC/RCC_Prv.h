/***********************************************

Description : CONFIGURATION FILE FOR NVIC DRIVER

Date        : 27-10-2023

Author      : Mohamed Khaled

***********************************************/

#ifndef RCC_PRV_H
#define RCC_PRV_H

#define RCC_BASE_ADD       ((volatile uint32*)0x40023800)
#define RCC_CR            *((volatile uint32*)0x40023800)

#define RCC_PLLCFGR       *((volatile uint32*)0x40023804)
	
#define RCC_CFGR          *((volatile uint32*)0x40023808)


#define RCC_CIR           *((volatile uint32*)0x4002380C)


//RCC AHB1 peripheral reset register
#define RCC_AHB1RSTR      *((volatile uint32*)0x40023810)

//RCC AHB2 peripheral reset register
#define RCC_AHB2RSTR      *((volatile uint32*)0x40023814)

//RCC APB1 peripheral reset register
#define RCC_APB1RSTR      *((volatile uint32*)0x40023820)

//RCC APB2 peripheral reset register
#define RCC_APB2RSTR      *((volatile uint32*)0x40023824)
	
//RCC AHB1 peripheral clock enable register
#define RCC_AHB1ENR          *((volatile uint32*)0x40023830)

//RCC AHB2 peripheral clock enable register
#define RCC_AHB2ENR          *((volatile uint32*)0x40023834)


//RCC APB1 peripheral clock enable register
#define RCC_APB1ENR          *((volatile uint32*)0x40023840)

//RCC APB2 peripheral clock enable register
#define RCC_APB2ENR          *((volatile uint32*)0x40023844)

#endif
