/***********************************************

Description : HEADER FILE FOR NVIC DRIVER 

Date        : 28-10-2023

Author      : Mohamed Khaled

***********************************************/

#ifndef SYSTICK_PRV_H
#define SYSTICK_PRV_H

#define STK_CTRL     *((volatile uint32*) 0xE000E010)     
#define STK_LOAD     *((volatile uint32*) 0xE000E014)     
#define STK_VAL      *((volatile uint32*) 0xE000E018)     
#define STK_CALIB    *((volatile uint32*) 0xE000E01C)     

#endif





 