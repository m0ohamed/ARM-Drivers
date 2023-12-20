/***********************************************

Description : HEADER FILE FOR NVIC DRIVER 

Date        : 28-10-2023

Author      : Mohamed Khaled

***********************************************/

#ifndef SYSTICK_CFG_H
#define SYSTICK_CFG_H

#include "Systick.h"


//SYSTICK_INTERRUPT_E 
//SYSTICK_INTERRUPT_D 
#define SYSTICK_INTERRUPT_MODE          SYSTICK_INTERRUPT_E

//SYSTICK_CLK_AHB     
//SYSTICK_CLK_AHB_DIV8
#define SYSTICK_CLK_MODE                SYSTICK_CLK_AHB_DIV8


#define SYSTICK_CLK_SRC                 16  //MH

#endif
