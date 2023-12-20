/***********************************************

Description : HEADER FILE FOR NVIC DRIVER 

Date        : 28-10-2023

Author      : Mohamed Khaled

***********************************************/

#ifndef MCAL_SYSTICK_SYSTICK_H_
#define MCAL_SYSTICK_SYSTICK_H_
//////////////////////////////////////////////////////////////////////////////
#include "std_types.h"
/*TYPEDEF ENUM FOR THE TYPES OF ERROR STATUS*/
typedef enum{
	/*ERROR STATUS IS OK*/
	Systick_enuOk,
	/*ERROR STATUS IS IN TIMEMs  ERROR*/
	Systick_enuErrorTimeMs,
	/*ERROR STATUS IS IN NULL POINTER ERROR*/
	Systick_enuErrorNullPointer,

}Systick_tenuErrorStatus;//NAME OF THE TYPEDEF ENUM

//////////////////////////Systick Interrupt MODE////////////////////
#define SYSTICK_INTERRUPT_E             1
#define SYSTICK_INTERRUPT_D             0

//////////////////////////Systick CLK MODE////////////////////
#define SYSTICK_CLK_AHB            1
#define SYSTICK_CLK_AHB_DIV8       0


typedef void (* Systick_Cbf) (void) ; // TYPEDEF  FOR A POINTER TO A FUNCTION
//////////////////////////////MACROS///////////////////////////////////////////
#define VALIDATE_RELOADVALUE   			0xFF000000 //MACRO VALIDATE_RELOADVALUE MASK

#define SYSTICK_PRESCALER_DIV8 			0x02	//MACRO SYSTICK_PRESCALER_DIV8 MASK

#define SYSTICK_PRESCALER_DIV1 			0x06 	//MACRO SYSTICK_PRESCALER_DIV1 MASK

#define SYSTICK_ENABLE					    0x1	    //MACRO SYSTICK_ENABLE MASK

////////////////////////////PROTOTYPES/////////////////////////////////////////
/*PROTOYPE FOR Systick_Init FUNCTION */
 Systick_tenuErrorStatus Systick_Init(uint32 Copy_TimeMs);
/*PROTOYPE FOR Systick_RegisterCbf FUNCTION */
 Systick_tenuErrorStatus Systick_RegisterCbf(Systick_Cbf Add_pfCbf);
/*PROTOTYPE FOR Systick_Start FUNCTION*/
 void Systick_Start(void);
/*PROTOTYPE FOR Systick_Stop FUNCTION*/
 void Systick_Stop(void);
 /*PROTOTYPE FOR Systick_TimeDelay FUNCTION*/
void Systick_TimeDelay(void);
///////////////////////////////////////////////////////////////////////////////
#endif /* MCAL_SYSTICK_SYSTICK_H_ */
