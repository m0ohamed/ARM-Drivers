


#ifndef GPIO_H_
#define GPIO_H_
#include "GPIO_Prv.h"
#include "std_types.h"
////////////////////////////////////////////////////////////////////////////////
typedef enum{

	Gpio_enuOk,
	Gpio_WrongNullPointer,
	Gpio_WrongPinNumError,
	Gpio_WrongPortNumError,
	Gpio_WrongModeError,
	Gpio_WrongPuPdError,
	Gpio_WrongSpeedError,
	Gpio_WrongValueError,
	Gpio_WrongReadError,
	Gpio_WrongAFError

}Gpio_tenuErrorStatus;
////////////////////////////////CREATE THIS STRUCT///////////////////////////////////////////////
typedef struct{

uint64 gpio_mode_x;
uint64 gpio_pin_x;
uint64 gpio_port_x;

}GpioPinCfg_t;
//////////////////////////STRUCT PORT OPTIONS////////////////////////////////////////////////////
#define GPIO_PORTA											0
#define GPIO_PORTB											1
#define GPIO_PORTC											2
#define GPIO_PORTD											3
#define GPIO_PORTE											4
#define GPIO_PORTH  										5
//////////////////////////STRUCT MODE OPTIONS////////////////////////////////////////////////////
#define GPIO_MODE_u64_OUTPUT_PP							  	((uint64) 0x0000000000000001)

#define GPIO_MODE_u64_OUTPUT_OD							   	((uint64) 0x0000000100000001)

#define GPIO_MODE_u64_INPUT       							((uint64) 0x0000000000000000)

#define GPIO_MODE_u64_AF_PP									    ((uint64) 0x0000000000000002)

#define GPIO_MODE_u64_AF_OD								    	((uint64) 0x0000000100000002)

#define GPIO_MODE_u64_ANALOG							     	((uint64) 0x0000000000000003)

//////////////////////////STRUCT PINS OPTIONS//////////////////////////////////////////
#define GPIO_PIN_00         								0
#define GPIO_PIN_01        									1
#define GPIO_PIN_02         								2
#define GPIO_PIN_03         								3
#define GPIO_PIN_04         								4
#define GPIO_PIN_05         								5
#define GPIO_PIN_06         								6
#define GPIO_PIN_07         								7
#define GPIO_PIN_08         								8
#define GPIO_PIN_09         								9
#define GPIO_PIN_10         								10
#define GPIO_PIN_11         								11
#define GPIO_PIN_12         								12
#define GPIO_PIN_13         								13
#define GPIO_PIN_14         								14
#define GPIO_PIN_15         								15
//////////////////////////////STRUCT PULL OPTIONS////////////////////////////////////////
#define GPIO_PUPD_u32_FLOATING								0x00000003
#define GPIO_PUPD_u32_PULL_UP					  			0x00000001
#define GPIO_PUPD_u32_PULL_DOWN								0x00000002
//////////////////////////////CONFIGURATION FOR INIT FUNCTION////////////////////////////////////////
/*1.PP=PUSH PULL        2.OD=OPEN DRAIN     3.PLU=PULLUP        4.PLD=PULL DOWN 
 *5.LWS=LOW SPEED       6.MDS=MEDIUM SPEED  7.HS=HIGH SPEED     8.VHS=VERY HIGH SPEED 
 *9.AF=ALTERNATIVE FUNCTION                                                          */
#define GPIO_OUTPUT_PP_LWS							1
#define GPIO_OUTPUT_PP_MDS							2
#define GPIO_OUTPUT_PP_HS						   	3
#define GPIO_OUTPUT_PP_VHS							4

#define GPIO_OUTPUT_OD_PLU_LWS					5	
#define GPIO_OUTPUT_OD_PLU_MDS					6
#define GPIO_OUTPUT_OD_PLU_HS						7
#define GPIO_OUTPUT_OD_PLU_VHS					8

#define GPIO_OUTPUT_OD_PLD_LWS					9		
#define GPIO_OUTPUT_OD_PLD_MDS					10	
#define GPIO_OUTPUT_OD_PLD_HS						11
#define GPIO_OUTPUT_OD_PLD_VHS          12

#define GPIO_INPUT_OD_PLU_LWS				    13	
#define GPIO_INPUT_OD_PLU_MDS					  14
#define GPIO_INPUT_OD_PLU_HS					  15	
#define GPIO_INPUT_OD_PLU_VHS					  16

#define GPIO_INPUT_OD_PLD_LWS					  17
#define GPIO_INPUT_OD_PLD_MDS					  18
#define GPIO_INPUT_OD_PLD_HS						19
#define GPIO_INPUT_OD_PLD_VHS	          20

#define GPIO_AF_PP									    21

#define GPIO_AF_OD_PLU								  22
					
#define GPIO_AF_OD_PLD                  23

#define GPIO_ANALOG								     24

//////////////////////////////STRUCT SPEED OPTIONS///////////////////////////////////////
#define GPIO_SPEED_LOW      								(0x00000000)
#define GPIO_SPEED_MEDIUM   								(0x00000001)
#define GPIO_SPEED_HIGH     								(0x00000002)
#define GPIO_SPEED_VHIGH    								(0x00000003)
//////////////////////////////// PIN VALUE HIGH/LOW /////////////////////////////////////////
#define GPIO_ODR_HIGH									    	(0X00000006)
#define GPIO_ODR_LOW									     	(0X00000007)
/////////////////////////////// ALTERNATE FUNCTIONS OPTION///////////////////////////////////
#define GPIO_AF_0										      	(0x00000000)
#define GPIO_AF_1								      			(0x00000001)
#define GPIO_AF_2								      			(0x00000002)
#define GPIO_AF_3								      			(0x00000003)
#define GPIO_AF_4								      			(0x00000004)
#define GPIO_AF_5								      			(0x00000005)
#define GPIO_AF_6								      			(0x00000006)
#define GPIO_AF_7								      			(0x00000007)
#define GPIO_AF_8								      			(0x00000008)
#define GPIO_AF_9								      			(0x00000009)
#define GPIO_AF_10							      			(0x0000000A)
#define GPIO_AF_11							      			(0x0000000B)
#define GPIO_AF_12							      			(0x0000000C)
#define GPIO_AF_13							      			(0x0000000D)
#define GPIO_AF_14							      			(0x0000000E)
#define GPIO_AF_15							      			(0x0000000F)
//////////////////////////////Gpio_setPinnValue MACROS//////////////////////
//////////////////////////////BSRR SET BITS////////////////////////////////
#define BSRR_S_PIN(PIN_NUM)                            (0x00000001<<PIN_NUM)


//////////////////////////////BSRR RESET BITS////////////////////////////////
#define BSRR_R_PIN(PIN_NUM)                            (0x00010000<<PIN_NUM)

//////////////////////////////FUNCTIONS PROTOTYPES////////////////////////////////
void Gpio_init(void);


Gpio_tenuErrorStatus Gpio_setPinValue(GpioPinCfg_t  *Add_pu8CnfgStatus , uint8 Copyu8PinValue);


Gpio_tenuErrorStatus Gpio_setPinnValue(uint8 Copyu8Port ,uint8 Copyu8Pin ,uint8 Copyu8Value);


Gpio_tenuErrorStatus Gpio_readPinValue(GpioPinCfg_t  *Add_CnfgStruct , pu32 Add_pu8PinValue);


Gpio_tenuErrorStatus Gpio_SetAlternateFunction(uint8 Copyu8Port ,uint8 Copyu8Pin , uint8 CopyAF);
//////////////////////////////////////////////////////////////////////////////////







#endif



