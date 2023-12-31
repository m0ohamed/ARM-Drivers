#include "GPIO.h"
#include "GPIO_Prv.h"
#include "Bit_utilies.h"
#include "GPIO_Cfg.h"
#include "std_types.h"


//INITIALIZATION FUNCTION :INITIALIZE ALL PINS ACCORDING TO CONFIGURATION IN GPIO_CFG.H FILE
void Gpio_init(void)
{
//UNDEFINE TO ALL CONFIGURATIONS TO SET THEM AS MODER REGISTER SUPPORT 
#undef GPIO_OUTPUT_PP_LWS				
#undef GPIO_OUTPUT_PP_MDS					
#undef GPIO_OUTPUT_PP_HS					
#undef GPIO_OUTPUT_PP_VHS													
#undef GPIO_OUTPUT_OD_PLU_LWS		
#undef GPIO_OUTPUT_OD_PLU_MDS		
#undef GPIO_OUTPUT_OD_PLU_HS			
#undef GPIO_OUTPUT_OD_PLU_VHS		
#undef GPIO_OUTPUT_OD_PLD_LWS		
#undef GPIO_OUTPUT_OD_PLD_MDS		
#undef GPIO_OUTPUT_OD_PLD_HS			
#undef GPIO_OUTPUT_OD_PLD_VHS
	
#undef GPIO_INPUT_OD_PLU_LWS			
#undef GPIO_INPUT_OD_PLU_MDS			
#undef GPIO_INPUT_OD_PLU_HS			
#undef GPIO_INPUT_OD_PLU_VHS			
#undef GPIO_INPUT_OD_PLD_LWS			
#undef GPIO_INPUT_OD_PLD_MDS			
#undef GPIO_INPUT_OD_PLD_HS			
#undef GPIO_INPUT_OD_PLD_VHS

#undef GPIO_AF_PP								
#undef GPIO_AF_OD_PLU						
#undef GPIO_AF_OD_PLD

#undef GPIO_ANALOG								



 /*
 *SET THE CONFIGURATION AS:
	 *OUTPUT=              01
	 *INPUT=               00
	 *ALTERNATIVE FUNCTION=10
	 *ANALOG=              11
	 */
  

#define GPIO_OUTPUT_PP_LWS				      01
#define GPIO_OUTPUT_PP_MDS					    01
#define GPIO_OUTPUT_PP_HS               01
#define GPIO_OUTPUT_PP_VHS							01					
#define GPIO_OUTPUT_OD_PLU_LWS		      01
#define GPIO_OUTPUT_OD_PLU_MDS		      01
#define GPIO_OUTPUT_OD_PLU_HS			      01
#define GPIO_OUTPUT_OD_PLU_VHS		      01
#define GPIO_OUTPUT_OD_PLD_LWS		      01
#define GPIO_OUTPUT_OD_PLD_MDS		      01
#define GPIO_OUTPUT_OD_PLD_HS			      01
#define GPIO_OUTPUT_OD_PLD_VHS          01

#define GPIO_INPUT_OD_PLU_LWS			      00
#define GPIO_INPUT_OD_PLU_MDS			      00
#define GPIO_INPUT_OD_PLU_HS			      00
#define GPIO_INPUT_OD_PLU_VHS			      00
#define GPIO_INPUT_OD_PLD_LWS			      00
#define GPIO_INPUT_OD_PLD_MDS			      00
#define GPIO_INPUT_OD_PLD_HS			      00
#define GPIO_INPUT_OD_PLD_VHS           00

#define GPIO_AF_PP								      10
#define GPIO_AF_OD_PLU						      10
#define GPIO_AF_OD_PLD                  10

#define GPIO_ANALOG								      11


//PORTA MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTA_MODER=CONC(GPIO_PORTA_PIN15,GPIO_PORTA_PIN14,GPIO_PORTA_PIN13,GPIO_PORTA_PIN12,GPIO_PORTA_PIN11,GPIO_PORTA_PIN10
											,GPIO_PORTA_PIN9,GPIO_PORTA_PIN8,GPIO_PORTA_PIN7,GPIO_PORTA_PIN6,GPIO_PORTA_PIN5,
											GPIO_PORTA_PIN4,GPIO_PORTA_PIN3,GPIO_PORTA_PIN2,GPIO_PORTA_PIN1,GPIO_PORTA_PIN0);
							
//PORTB MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0				
GPIO_PORTB_MODER=CONC(GPIO_PORTB_PIN15,GPIO_PORTB_PIN14,GPIO_PORTB_PIN13,GPIO_PORTB_PIN12,GPIO_PORTB_PIN11,GPIO_PORTB_PIN10
											,GPIO_PORTB_PIN9,GPIO_PORTB_PIN8,GPIO_PORTB_PIN7,GPIO_PORTB_PIN6,GPIO_PORTB_PIN5,
											GPIO_PORTB_PIN4,GPIO_PORTB_PIN3,GPIO_PORTB_PIN2,GPIO_PORTB_PIN1,GPIO_PORTB_PIN0);
											

//PORTC MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0											
GPIO_PORTC_MODER=CONC(GPIO_PORTC_PIN15,GPIO_PORTC_PIN14,GPIO_PORTC_PIN13,GPIO_PORTC_PIN12,GPIO_PORTC_PIN11,GPIO_PORTC_PIN10
											,GPIO_PORTC_PIN9,GPIO_PORTC_PIN8,GPIO_PORTC_PIN7,GPIO_PORTC_PIN6,GPIO_PORTC_PIN5,
											GPIO_PORTC_PIN4,GPIO_PORTC_PIN3,GPIO_PORTC_PIN2,GPIO_PORTC_PIN1,GPIO_PORTC_PIN0);

//PORTD MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTD_MODER=CONC(GPIO_PORTD_PIN15,GPIO_PORTD_PIN14,GPIO_PORTD_PIN13,GPIO_PORTD_PIN12,GPIO_PORTD_PIN11,GPIO_PORTD_PIN10
											,GPIO_PORTD_PIN9,GPIO_PORTD_PIN8,GPIO_PORTD_PIN7,GPIO_PORTD_PIN6,GPIO_PORTD_PIN5,
											GPIO_PORTD_PIN4,GPIO_PORTD_PIN3,GPIO_PORTD_PIN2,GPIO_PORTD_PIN1,GPIO_PORTD_PIN0);

//PORTE MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTE_MODER=CONC(GPIO_PORTE_PIN15,GPIO_PORTE_PIN14,GPIO_PORTE_PIN13,GPIO_PORTE_PIN12,GPIO_PORTE_PIN11,GPIO_PORTE_PIN10
											,GPIO_PORTE_PIN9,GPIO_PORTE_PIN8,GPIO_PORTE_PIN7,GPIO_PORTE_PIN6,GPIO_PORTE_PIN5,
											GPIO_PORTE_PIN4,GPIO_PORTE_PIN3,GPIO_PORTE_PIN2,GPIO_PORTE_PIN1,GPIO_PORTE_PIN0);

//PORTH MODER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTH_MODER=CONC(GPIO_PORTH_PIN15,GPIO_PORTH_PIN14,GPIO_PORTH_PIN13,GPIO_PORTH_PIN12,GPIO_PORTH_PIN11,GPIO_PORTH_PIN10
											,GPIO_PORTH_PIN9,GPIO_PORTH_PIN8,GPIO_PORTH_PIN7,GPIO_PORTH_PIN6,GPIO_PORTH_PIN5,
											GPIO_PORTH_PIN4,GPIO_PORTH_PIN3,GPIO_PORTH_PIN2,GPIO_PORTH_PIN1,GPIO_PORTH_PIN0);


//UNDEFINE TO ALL CONFIGURATIONS TO SET THEM AS OTYPER REGISTER SUPPORT 
#undef GPIO_OUTPUT_PP_LWS				
#undef GPIO_OUTPUT_PP_MDS					
#undef GPIO_OUTPUT_PP_HS					
#undef GPIO_OUTPUT_PP_VHS													
#undef GPIO_OUTPUT_OD_PLU_LWS		
#undef GPIO_OUTPUT_OD_PLU_MDS		
#undef GPIO_OUTPUT_OD_PLU_HS			
#undef GPIO_OUTPUT_OD_PLU_VHS		
#undef GPIO_OUTPUT_OD_PLD_LWS		
#undef GPIO_OUTPUT_OD_PLD_MDS		
#undef GPIO_OUTPUT_OD_PLD_HS			
#undef GPIO_OUTPUT_OD_PLD_VHS
	
#undef GPIO_INPUT_OD_PLU_LWS			
#undef GPIO_INPUT_OD_PLU_MDS			
#undef GPIO_INPUT_OD_PLU_HS			
#undef GPIO_INPUT_OD_PLU_VHS			
#undef GPIO_INPUT_OD_PLD_LWS			
#undef GPIO_INPUT_OD_PLD_MDS			
#undef GPIO_INPUT_OD_PLD_HS			
#undef GPIO_INPUT_OD_PLD_VHS

#undef GPIO_AF_PP								
#undef GPIO_AF_OD_PLU						
#undef GPIO_AF_OD_PLD

#undef GPIO_ANALOG								


 

 /*
 *SET THE CONFIGURATION AS:
	 *OPEN DRAIN=              1
	 *PUSH PULL=               0
	 */

#define GPIO_OUTPUT_PP_LWS				      0
#define GPIO_OUTPUT_PP_MDS					    0
#define GPIO_OUTPUT_PP_HS               0
#define GPIO_OUTPUT_PP_VHS							0					
#define GPIO_OUTPUT_OD_PLU_LWS		      1
#define GPIO_OUTPUT_OD_PLU_MDS		      1
#define GPIO_OUTPUT_OD_PLU_HS			      1
#define GPIO_OUTPUT_OD_PLU_VHS		      1
#define GPIO_OUTPUT_OD_PLD_LWS		      1
#define GPIO_OUTPUT_OD_PLD_MDS		      1
#define GPIO_OUTPUT_OD_PLD_HS			      1
#define GPIO_OUTPUT_OD_PLD_VHS          1

#define GPIO_INPUT_OD_PLU_LWS			      1
#define GPIO_INPUT_OD_PLU_MDS			      1
#define GPIO_INPUT_OD_PLU_HS			      1
#define GPIO_INPUT_OD_PLU_VHS			      1
#define GPIO_INPUT_OD_PLD_LWS			      1
#define GPIO_INPUT_OD_PLD_MDS			      1
#define GPIO_INPUT_OD_PLD_HS			      1
#define GPIO_INPUT_OD_PLD_VHS           1

#define GPIO_AF_PP								      0
#define GPIO_AF_OD_PLU						      1
#define GPIO_AF_OD_PLD                  1

#define GPIO_ANALOG								      0


//PORTA OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTA_OTYPER=CONC(GPIO_PORTA_PIN15,GPIO_PORTA_PIN14,GPIO_PORTA_PIN13,GPIO_PORTA_PIN12,GPIO_PORTA_PIN11,GPIO_PORTA_PIN10
											,GPIO_PORTA_PIN9,GPIO_PORTA_PIN8,GPIO_PORTA_PIN7,GPIO_PORTA_PIN6,GPIO_PORTA_PIN5,
											GPIO_PORTA_PIN4,GPIO_PORTA_PIN3,GPIO_PORTA_PIN2,GPIO_PORTA_PIN1,GPIO_PORTA_PIN0);

//PORTB OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTB_OTYPER=CONC(GPIO_PORTB_PIN15,GPIO_PORTB_PIN14,GPIO_PORTB_PIN13,GPIO_PORTB_PIN12,GPIO_PORTB_PIN11,GPIO_PORTB_PIN10
											,GPIO_PORTB_PIN9,GPIO_PORTB_PIN8,GPIO_PORTB_PIN7,GPIO_PORTB_PIN6,GPIO_PORTB_PIN5,
											GPIO_PORTB_PIN4,GPIO_PORTB_PIN3,GPIO_PORTB_PIN2,GPIO_PORTB_PIN1,GPIO_PORTB_PIN0);
											

//PORTC OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTC_OTYPER=CONC(GPIO_PORTC_PIN15,GPIO_PORTC_PIN14,GPIO_PORTC_PIN13,GPIO_PORTC_PIN12,GPIO_PORTC_PIN11,GPIO_PORTC_PIN10
											,GPIO_PORTC_PIN9,GPIO_PORTC_PIN8,GPIO_PORTC_PIN7,GPIO_PORTC_PIN6,GPIO_PORTC_PIN5,
											GPIO_PORTC_PIN4,GPIO_PORTC_PIN3,GPIO_PORTC_PIN2,GPIO_PORTC_PIN1,GPIO_PORTC_PIN0);

//PORTD OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTD_OTYPER=CONC(GPIO_PORTD_PIN15,GPIO_PORTD_PIN14,GPIO_PORTD_PIN13,GPIO_PORTD_PIN12,GPIO_PORTD_PIN11,GPIO_PORTD_PIN10
											,GPIO_PORTD_PIN9,GPIO_PORTD_PIN8,GPIO_PORTD_PIN7,GPIO_PORTD_PIN6,GPIO_PORTD_PIN5,
											GPIO_PORTD_PIN4,GPIO_PORTD_PIN3,GPIO_PORTD_PIN2,GPIO_PORTD_PIN1,GPIO_PORTD_PIN0);

//PORTE OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTE_OTYPER=CONC(GPIO_PORTE_PIN15,GPIO_PORTE_PIN14,GPIO_PORTE_PIN13,GPIO_PORTE_PIN12,GPIO_PORTE_PIN11,GPIO_PORTE_PIN10
											,GPIO_PORTE_PIN9,GPIO_PORTE_PIN8,GPIO_PORTE_PIN7,GPIO_PORTE_PIN6,GPIO_PORTE_PIN5,
											GPIO_PORTE_PIN4,GPIO_PORTE_PIN3,GPIO_PORTE_PIN2,GPIO_PORTE_PIN1,GPIO_PORTE_PIN0);

//PORTH OTYPER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTH_OTYPER=CONC(GPIO_PORTH_PIN15,GPIO_PORTH_PIN14,GPIO_PORTH_PIN13,GPIO_PORTH_PIN12,GPIO_PORTH_PIN11,GPIO_PORTH_PIN10
											,GPIO_PORTH_PIN9,GPIO_PORTH_PIN8,GPIO_PORTH_PIN7,GPIO_PORTH_PIN6,GPIO_PORTH_PIN5,
											GPIO_PORTH_PIN4,GPIO_PORTH_PIN3,GPIO_PORTH_PIN2,GPIO_PORTH_PIN1,GPIO_PORTH_PIN0);


//UNDEFINE TO ALL CONFIGURATIONS TO SET THEM AS OSPEEDER REGISTER SUPPORT 
#undef GPIO_OUTPUT_PP_LWS				
#undef GPIO_OUTPUT_PP_MDS					
#undef GPIO_OUTPUT_PP_HS					
#undef GPIO_OUTPUT_PP_VHS													
#undef GPIO_OUTPUT_OD_PLU_LWS		
#undef GPIO_OUTPUT_OD_PLU_MDS		
#undef GPIO_OUTPUT_OD_PLU_HS			
#undef GPIO_OUTPUT_OD_PLU_VHS		
#undef GPIO_OUTPUT_OD_PLD_LWS		
#undef GPIO_OUTPUT_OD_PLD_MDS		
#undef GPIO_OUTPUT_OD_PLD_HS			
#undef GPIO_OUTPUT_OD_PLD_VHS
	
#undef GPIO_INPUT_OD_PLU_LWS			
#undef GPIO_INPUT_OD_PLU_MDS			
#undef GPIO_INPUT_OD_PLU_HS			
#undef GPIO_INPUT_OD_PLU_VHS			
#undef GPIO_INPUT_OD_PLD_LWS			
#undef GPIO_INPUT_OD_PLD_MDS			
#undef GPIO_INPUT_OD_PLD_HS			
#undef GPIO_INPUT_OD_PLD_VHS

#undef GPIO_AF_PP								
#undef GPIO_AF_OD_PLU						
#undef GPIO_AF_OD_PLD

#undef GPIO_ANALOG								


 /*
 *SET THE CONFIGURATION AS:
	 *LOW SPEED=                    00
	 *MEDIUM SPEED=                 01
	 *HIGH SPEED=                   10
	 *VERY HIGH SPEED=              11
	 */
  


#define GPIO_OUTPUT_PP_LWS				      00
#define GPIO_OUTPUT_PP_MDS					    01
#define GPIO_OUTPUT_PP_HS               10
#define GPIO_OUTPUT_PP_VHS							11					
#define GPIO_OUTPUT_OD_PLU_LWS		      00
#define GPIO_OUTPUT_OD_PLU_MDS		      01
#define GPIO_OUTPUT_OD_PLU_HS			      10
#define GPIO_OUTPUT_OD_PLU_VHS		      11
#define GPIO_OUTPUT_OD_PLD_LWS		      00
#define GPIO_OUTPUT_OD_PLD_MDS		      01
#define GPIO_OUTPUT_OD_PLD_HS			      10
#define GPIO_OUTPUT_OD_PLD_VHS          11

#define GPIO_INPUT_OD_PLU_LWS			      00
#define GPIO_INPUT_OD_PLU_MDS			      01
#define GPIO_INPUT_OD_PLU_HS			      10
#define GPIO_INPUT_OD_PLU_VHS			      11
#define GPIO_INPUT_OD_PLD_LWS			      00
#define GPIO_INPUT_OD_PLD_MDS			      01
#define GPIO_INPUT_OD_PLD_HS			      10
#define GPIO_INPUT_OD_PLD_VHS           11

#define GPIO_AF_PP								      10
#define GPIO_AF_OD_PLU						      10
#define GPIO_AF_OD_PLD                  10

#define GPIO_ANALOG								      10

//PORTA OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTA_OSPEEDER=CONC(GPIO_PORTA_PIN15,GPIO_PORTA_PIN14,GPIO_PORTA_PIN13,GPIO_PORTA_PIN12,GPIO_PORTA_PIN11,GPIO_PORTA_PIN10
											,GPIO_PORTA_PIN9,GPIO_PORTA_PIN8,GPIO_PORTA_PIN7,GPIO_PORTA_PIN6,GPIO_PORTA_PIN5,
											GPIO_PORTA_PIN4,GPIO_PORTA_PIN3,GPIO_PORTA_PIN2,GPIO_PORTA_PIN1,GPIO_PORTA_PIN0);

//PORTB OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTB_OSPEEDER=CONC(GPIO_PORTB_PIN15,GPIO_PORTB_PIN14,GPIO_PORTB_PIN13,GPIO_PORTB_PIN12,GPIO_PORTB_PIN11,GPIO_PORTB_PIN10
											,GPIO_PORTB_PIN9,GPIO_PORTB_PIN8,GPIO_PORTB_PIN7,GPIO_PORTB_PIN6,GPIO_PORTB_PIN5,
											GPIO_PORTB_PIN4,GPIO_PORTB_PIN3,GPIO_PORTB_PIN2,GPIO_PORTB_PIN1,GPIO_PORTB_PIN0);
		
		
//PORTC OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0											
GPIO_PORTC_OSPEEDER=CONC(GPIO_PORTC_PIN15,GPIO_PORTC_PIN14,GPIO_PORTC_PIN13,GPIO_PORTC_PIN12,GPIO_PORTC_PIN11,GPIO_PORTC_PIN10
											,GPIO_PORTC_PIN9,GPIO_PORTC_PIN8,GPIO_PORTC_PIN7,GPIO_PORTC_PIN6,GPIO_PORTC_PIN5,
											GPIO_PORTC_PIN4,GPIO_PORTC_PIN3,GPIO_PORTC_PIN2,GPIO_PORTC_PIN1,GPIO_PORTC_PIN0);

//PORTD OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTD_OSPEEDER=CONC(GPIO_PORTD_PIN15,GPIO_PORTD_PIN14,GPIO_PORTD_PIN13,GPIO_PORTD_PIN12,GPIO_PORTD_PIN11,GPIO_PORTD_PIN10
											,GPIO_PORTD_PIN9,GPIO_PORTD_PIN8,GPIO_PORTD_PIN7,GPIO_PORTD_PIN6,GPIO_PORTD_PIN5,
											GPIO_PORTD_PIN4,GPIO_PORTD_PIN3,GPIO_PORTD_PIN2,GPIO_PORTD_PIN1,GPIO_PORTD_PIN0);

//PORTE OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTE_OSPEEDER=CONC(GPIO_PORTE_PIN15,GPIO_PORTE_PIN14,GPIO_PORTE_PIN13,GPIO_PORTE_PIN12,GPIO_PORTE_PIN11,GPIO_PORTE_PIN10
											,GPIO_PORTE_PIN9,GPIO_PORTE_PIN8,GPIO_PORTE_PIN7,GPIO_PORTE_PIN6,GPIO_PORTE_PIN5,
											GPIO_PORTE_PIN4,GPIO_PORTE_PIN3,GPIO_PORTE_PIN2,GPIO_PORTE_PIN1,GPIO_PORTE_PIN0);

//PORTH OSPEEDER REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTH_OSPEEDER=CONC(GPIO_PORTH_PIN15,GPIO_PORTH_PIN14,GPIO_PORTH_PIN13,GPIO_PORTH_PIN12,GPIO_PORTH_PIN11,GPIO_PORTH_PIN10
											,GPIO_PORTH_PIN9,GPIO_PORTH_PIN8,GPIO_PORTH_PIN7,GPIO_PORTH_PIN6,GPIO_PORTH_PIN5,
											GPIO_PORTH_PIN4,GPIO_PORTH_PIN3,GPIO_PORTH_PIN2,GPIO_PORTH_PIN1,GPIO_PORTH_PIN0);


//UNDEFINE TO ALL CONFIGURATIONS TO SET THEM AS PUPDR REGISTER SUPPORT 
#undef GPIO_OUTPUT_PP_LWS				
#undef GPIO_OUTPUT_PP_MDS					
#undef GPIO_OUTPUT_PP_HS					
#undef GPIO_OUTPUT_PP_VHS													
#undef GPIO_OUTPUT_OD_PLU_LWS		
#undef GPIO_OUTPUT_OD_PLU_MDS		
#undef GPIO_OUTPUT_OD_PLU_HS			
#undef GPIO_OUTPUT_OD_PLU_VHS		
#undef GPIO_OUTPUT_OD_PLD_LWS		
#undef GPIO_OUTPUT_OD_PLD_MDS		
#undef GPIO_OUTPUT_OD_PLD_HS			
#undef GPIO_OUTPUT_OD_PLD_VHS
	
#undef GPIO_INPUT_OD_PLU_LWS			
#undef GPIO_INPUT_OD_PLU_MDS			
#undef GPIO_INPUT_OD_PLU_HS			
#undef GPIO_INPUT_OD_PLU_VHS			
#undef GPIO_INPUT_OD_PLD_LWS			
#undef GPIO_INPUT_OD_PLD_MDS			
#undef GPIO_INPUT_OD_PLD_HS			
#undef GPIO_INPUT_OD_PLD_VHS

#undef GPIO_AF_PP								
#undef GPIO_AF_OD_PLU						
#undef GPIO_AF_OD_PLD

#undef GPIO_ANALOG								


 /*
 *SET THE CONFIGURATION AS:
	 *FLOATING=                    00
	 *PULL UP=                     01
	 *PULL DOWN=                   10
	 *RESERVED=                    11
	 */


#define GPIO_OUTPUT_PP_LWS				      00
#define GPIO_OUTPUT_PP_MDS					    00
#define GPIO_OUTPUT_PP_HS               00
#define GPIO_OUTPUT_PP_VHS							00					
#define GPIO_OUTPUT_OD_PLU_LWS		      01
#define GPIO_OUTPUT_OD_PLU_MDS		      01
#define GPIO_OUTPUT_OD_PLU_HS			      01
#define GPIO_OUTPUT_OD_PLU_VHS		      01
#define GPIO_OUTPUT_OD_PLD_LWS		      10
#define GPIO_OUTPUT_OD_PLD_MDS		      10
#define GPIO_OUTPUT_OD_PLD_HS			      10
#define GPIO_OUTPUT_OD_PLD_VHS          10

#define GPIO_INPUT_OD_PLU_LWS			      01
#define GPIO_INPUT_OD_PLU_MDS			      01
#define GPIO_INPUT_OD_PLU_HS			      01
#define GPIO_INPUT_OD_PLU_VHS			      01
#define GPIO_INPUT_OD_PLD_LWS			      10
#define GPIO_INPUT_OD_PLD_MDS			      10
#define GPIO_INPUT_OD_PLD_HS			      10
#define GPIO_INPUT_OD_PLD_VHS           10

#define GPIO_AF_PP								      00
#define GPIO_AF_OD_PLU						      01
#define GPIO_AF_OD_PLD                  10

#define GPIO_ANALOG								      00


//PORTA PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTA_PUPDR=CONC(GPIO_PORTA_PIN15,GPIO_PORTA_PIN14,GPIO_PORTA_PIN13,GPIO_PORTA_PIN12,GPIO_PORTA_PIN11,GPIO_PORTA_PIN10
											,GPIO_PORTA_PIN9,GPIO_PORTA_PIN8,GPIO_PORTA_PIN7,GPIO_PORTA_PIN6,GPIO_PORTA_PIN5,
											GPIO_PORTA_PIN4,GPIO_PORTA_PIN3,GPIO_PORTA_PIN2,GPIO_PORTA_PIN1,GPIO_PORTA_PIN0);

//PORTB PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTB_PUPDR=CONC(GPIO_PORTB_PIN15,GPIO_PORTB_PIN14,GPIO_PORTB_PIN13,GPIO_PORTB_PIN12,GPIO_PORTB_PIN11,GPIO_PORTB_PIN10
											,GPIO_PORTB_PIN9,GPIO_PORTB_PIN8,GPIO_PORTB_PIN7,GPIO_PORTB_PIN6,GPIO_PORTB_PIN5,
											GPIO_PORTB_PIN4,GPIO_PORTB_PIN3,GPIO_PORTB_PIN2,GPIO_PORTB_PIN1,GPIO_PORTB_PIN0);
											

//PORTC PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTC_PUPDR=CONC(GPIO_PORTC_PIN15,GPIO_PORTC_PIN14,GPIO_PORTC_PIN13,GPIO_PORTC_PIN12,GPIO_PORTC_PIN11,GPIO_PORTC_PIN10
											,GPIO_PORTC_PIN9,GPIO_PORTC_PIN8,GPIO_PORTC_PIN7,GPIO_PORTC_PIN6,GPIO_PORTC_PIN5,
											GPIO_PORTC_PIN4,GPIO_PORTC_PIN3,GPIO_PORTC_PIN2,GPIO_PORTC_PIN1,GPIO_PORTC_PIN0);

//PORTD PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTD_PUPDR=CONC(GPIO_PORTD_PIN15,GPIO_PORTD_PIN14,GPIO_PORTD_PIN13,GPIO_PORTD_PIN12,GPIO_PORTD_PIN11,GPIO_PORTD_PIN10
											,GPIO_PORTD_PIN9,GPIO_PORTD_PIN8,GPIO_PORTD_PIN7,GPIO_PORTD_PIN6,GPIO_PORTD_PIN5,
											GPIO_PORTD_PIN4,GPIO_PORTD_PIN3,GPIO_PORTD_PIN2,GPIO_PORTD_PIN1,GPIO_PORTD_PIN0);

//PORTE PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTE_PUPDR=CONC(GPIO_PORTE_PIN15,GPIO_PORTE_PIN14,GPIO_PORTE_PIN13,GPIO_PORTE_PIN12,GPIO_PORTE_PIN11,GPIO_PORTE_PIN10
											,GPIO_PORTE_PIN9,GPIO_PORTE_PIN8,GPIO_PORTE_PIN7,GPIO_PORTE_PIN6,GPIO_PORTE_PIN5,
											GPIO_PORTE_PIN4,GPIO_PORTE_PIN3,GPIO_PORTE_PIN2,GPIO_PORTE_PIN1,GPIO_PORTE_PIN0);

//PORTH PUPDR REGISTER=0b##B15##B14##B13##B12##B11##B10##B9##B8##B7##B6##B5##B4##B3##B2##B1##B0
GPIO_PORTH_PUPDR=CONC(GPIO_PORTH_PIN15,GPIO_PORTH_PIN14,GPIO_PORTH_PIN13,GPIO_PORTH_PIN12,GPIO_PORTH_PIN11,GPIO_PORTH_PIN10
											,GPIO_PORTH_PIN9,GPIO_PORTH_PIN8,GPIO_PORTH_PIN7,GPIO_PORTH_PIN6,GPIO_PORTH_PIN5,
											GPIO_PORTH_PIN4,GPIO_PORTH_PIN3,GPIO_PORTH_PIN2,GPIO_PORTH_PIN1,GPIO_PORTH_PIN0);



//UNDEFINE TO ALL CONFIGURATIONS TO SET THEM AS DEFAULT  
#undef GPIO_OUTPUT_PP_LWS				
#undef GPIO_OUTPUT_PP_MDS					
#undef GPIO_OUTPUT_PP_HS					
#undef GPIO_OUTPUT_PP_VHS													
#undef GPIO_OUTPUT_OD_PLU_LWS		
#undef GPIO_OUTPUT_OD_PLU_MDS		
#undef GPIO_OUTPUT_OD_PLU_HS			
#undef GPIO_OUTPUT_OD_PLU_VHS		
#undef GPIO_OUTPUT_OD_PLD_LWS		
#undef GPIO_OUTPUT_OD_PLD_MDS		
#undef GPIO_OUTPUT_OD_PLD_HS			
#undef GPIO_OUTPUT_OD_PLD_VHS
	
#undef GPIO_INPUT_OD_PLU_LWS			
#undef GPIO_INPUT_OD_PLU_MDS			
#undef GPIO_INPUT_OD_PLU_HS			
#undef GPIO_INPUT_OD_PLU_VHS			
#undef GPIO_INPUT_OD_PLD_LWS			
#undef GPIO_INPUT_OD_PLD_MDS			
#undef GPIO_INPUT_OD_PLD_HS			
#undef GPIO_INPUT_OD_PLD_VHS

#undef GPIO_AF_PP								
#undef GPIO_AF_OD_PLU						
#undef GPIO_AF_OD_PLD

#undef GPIO_ANALOG						

//DEFAULT CONFIGURATION
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

#define GPIO_ANALOG								      24

}




//FUNCTION TO SET PINS VALUE
Gpio_tenuErrorStatus Gpio_setPinValue(GpioPinCfg_t  *Add_pu8CnfgStatus , uint8 Copyu8PinValue)
{
	//ERROR STATUS
uint8 ErrorStatus=Gpio_enuOk;
	//IF THE PORT PARAMETER HIGHER THEN THE MAXIMUM NUMBER OF PORTS
	if(Add_pu8CnfgStatus->gpio_port_x > GPIO_MAX_PORT_NUM)
	{
		ErrorStatus=Gpio_WrongPortNumError;
	}
	
		//IF THE PIN PARAMETER HIGHER THEN THE MAXIMUM NUMBER OF PINS
	if(Add_pu8CnfgStatus->gpio_pin_x > GPIO_MAX_PIN_NUM)
	{
			ErrorStatus=Gpio_WrongPinNumError;
	}
	
	//THE PIN MUST BE OUTPUT PIN TO WRITE ON IT 
if(	Add_pu8CnfgStatus->gpio_mode_x ==GPIO_MODE_u64_OUTPUT_PP || Add_pu8CnfgStatus->gpio_mode_x ==GPIO_MODE_u64_OUTPUT_OD)
{
	//WHICH PORT SHOULD SET  
	switch(Add_pu8CnfgStatus->gpio_port_x)
	{
		//CASE PORT A
		case GPIO_PORTA:
			//IF PINVALUE IS HIGH 
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_A]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW 
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_A]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			
			break;///////////////////CASE PORT A BREAK/////////////////////////
		
		//CASE PORT B 
		case GPIO_PORTB:
			//IF PINVALUE IS HIGH 
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_B]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_B]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;///////////////////CASE PORT B BREAK/////////////////////////
			
			//CASE PORT C 
		case GPIO_PORTC:
			
		//IF PINVALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_C]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_C]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;///////////////////CASE PORT C BREAK/////////////////////////
			
			//CASE PORT D 
		case GPIO_PORTD:
			
			//IF PINVALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_D]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_D]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;///////////////////CASE PORT D BREAK/////////////////////////
	
			//CASE PORT E
		case GPIO_PORTE:
			
		//IF PINVALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_E]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_E]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;///////////////////CASE PORT E BREAK/////////////////////////
			
			//CASE PORT H
		case GPIO_PORTH:
			//IF PINVALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				Config_Arr[GPIO_PORT_H]->GPIOx_ODR |=(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//IF THE PINVALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				Config_Arr[GPIO_PORT_H]->GPIOx_ODR &=~(1<<(Add_pu8CnfgStatus->gpio_pin_x));
			}
			//ELSE FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;///////////////////CASE PORT H BREAK/////////////////////////
		
	}
}
//ELSE THE PIN IS NOT OUTPUT  FIRE ERROR
else
{
		ErrorStatus=Gpio_WrongModeError;

}
//RETUR THE ERROR LOGS
return ErrorStatus;
}


//THE SAME UPPER FUNCTION BUT WITH BSRR REGISTER
Gpio_tenuErrorStatus Gpio_setPinnValue(uint8 Copyu8Port ,uint8 Copyu8Pin ,uint8 Copyu8PinValue)
{
	//ERROR STATUS VARIABLE 
	uint8 ErrorStatus=Gpio_enuOk;
	
	//IF THE PORT NUMBER HIGHER THAN THE MAXIMUM NUMBER OF PORTS FIRE ERROR 
		if(Copyu8Port > GPIO_MAX_PORT_NUM)
	{
		ErrorStatus=Gpio_WrongPortNumError;
	}
	
	//IF THE PIN NUMBER HIGHER THAN THE MAXIMUM NUMBER OF PINS FIRE ERROR 
	if(Copyu8Pin > GPIO_MAX_PIN_NUM)
	{
			ErrorStatus=Gpio_WrongPinNumError;
	}
	
	//WHICH PORT 
	switch(Copyu8Port)
	{
		//CASE PORT A
		case GPIO_PORTA:
			//IF THE VALUE IS HIGH 
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				//(0x00000001<<PIN_NUM) SET THE SPECIFIED PIN
				GPIO_PORTA_BSRR=BSRR_S_PIN(Copyu8Pin);
			}
			//IF THE VALUE IS LOW 
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
							//(0x00010000<<PIN_NUM)
				GPIO_PORTA_BSRR = BSRR_R_PIN(Copyu8Pin);
			}
			//IF NOT HIGH OR LOW FIRE ERROR 
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			
			break;//CASE PORT A
			
			//CASE PORT B
		case GPIO_PORTB:
			//IF THE VALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				//(0x00000001<<PIN_NUM) SET THE SPECIFIED PIN
				GPIO_PORTB_BSRR =BSRR_S_PIN(Copyu8Pin);
			}
			//IF THE VALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				//(0x00010000<<PIN_NUM)
				GPIO_PORTB_BSRR  = BSRR_R_PIN(Copyu8Pin);
			}
			//IF NOT HIGH OR LOW FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;//CASE PORT B
			
			//CASE PORT C
		case GPIO_PORTC:
			//IF THE VALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				//(0x00000001<<PIN_NUM) SET THE SPECIFIED PIN
				GPIO_PORTC_BSRR =BSRR_S_PIN(Copyu8Pin);
			}
			//IF THE VALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				//(0x00010000<<PIN_NUM)
				GPIO_PORTC_BSRR  = BSRR_R_PIN(Copyu8Pin);
			}
			//IF NOT HIGH OR LOW FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;//CASE PORT C
			
		//CASE PORT D
		case GPIO_PORTD:
			//IF THE VALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				//(0x00000001<<PIN_NUM) SET THE SPECIFIED PIN
				GPIO_PORTD_BSRR =BSRR_S_PIN(Copyu8Pin);
			}
			//IF THE VALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				//(0x00010000<<PIN_NUM)
				GPIO_PORTD_BSRR  = BSRR_R_PIN(Copyu8Pin);
			}
			//IF NOT HIGH OR LOW FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;//CASE PORT D
			
			//CASE PORT E
		case GPIO_PORTE:
			//IF THE VALUE IS HIGH
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				//(0x00000001<<PIN_NUM) SET THE SPECIFIED PIN
				GPIO_PORTE_BSRR =BSRR_S_PIN(Copyu8Pin);
			}
			//IF THE VALUE IS LOW
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				//(0x00010000<<PIN_NUM)
				GPIO_PORTE_BSRR  = BSRR_R_PIN(Copyu8Pin);
			}
			//IF NOT HIGH OR LOW FIRE ERROR
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;//CASE PORT E
			
		case GPIO_PORTH:
			if(Copyu8PinValue==GPIO_ODR_HIGH)
			{
				GPIO_PORTH_BSRR =BSRR_S_PIN(Copyu8Pin);
			}
			else if(Copyu8PinValue==GPIO_ODR_LOW)
			{
				GPIO_PORTH_BSRR  = BSRR_R_PIN(Copyu8Pin);
			}
			else
			{
				ErrorStatus=Gpio_WrongValueError;
			}
			break;
		
	}
	return ErrorStatus;
}




//FUNCTION TO RETURN THE VALUE OF A SPECIFIC PIN  
Gpio_tenuErrorStatus Gpio_readPinValue(GpioPinCfg_t  *Add_pu8CnfgStatus , pu32 Add_pu8PinValue)
{
//ERROR STATUS VAR	
	uint8 ErrorStatus=Gpio_enuOk;
	
	//IF THE PORT NUMBER HIGHER THEN THE MAXIMUM NUMBER OF PORTS FIRE ERROR
	if(Add_pu8CnfgStatus->gpio_port_x > GPIO_MAX_PORT_NUM)
	{
		
		ErrorStatus=Gpio_WrongPortNumError;
	}
	
		//IF THE PIN NUMBER HIGHER THEN THE MAXIMUM NUMBER OF PINS FIRE ERROR
	if(Add_pu8CnfgStatus->gpio_pin_x > GPIO_MAX_PIN_NUM)
	{
			ErrorStatus=Gpio_WrongPinNumError;
	}
	
	//IN THE MODER IF THE PIN IS OUTPUT PIN TAKE THE VALUE FROM ODR REG 
	if(Add_pu8CnfgStatus->gpio_mode_x ==GPIO_MODE_u64_OUTPUT_PP || Add_pu8CnfgStatus->gpio_mode_x ==GPIO_MODE_u64_OUTPUT_OD)
	{
		//WHICH  PORT 
	switch(Add_pu8CnfgStatus->gpio_port_x)
	{
		//IF PORT A
		case GPIO_PORTA:
			//GET THE VALUE OF THE PIN AND STORE IT 
			*Add_pu8PinValue=GET_BIT(GPIO_PORTA_ODR,Add_pu8CnfgStatus->gpio_pin_x);
			break;
		//IF PORT B
		case GPIO_PORTB:
			//GET THE VALUE OF THE PIN AND STORE IT 
						*Add_pu8PinValue=GET_BIT(GPIO_PORTB_ODR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		//IF PORT C
		case GPIO_PORTC:
			//GET THE VALUE OF THE PIN AND STORE IT 
						*Add_pu8PinValue=GET_BIT(GPIO_PORTC_ODR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		//IF PORT D
		case GPIO_PORTD:
			//GET THE VALUE OF THE PIN AND STORE IT 
						*Add_pu8PinValue=GET_BIT(GPIO_PORTD_ODR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		//IF PORT E
		case GPIO_PORTE:
			//GET THE VALUE OF THE PIN AND STORE IT 
						*Add_pu8PinValue=GET_BIT(GPIO_PORTE_ODR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		//IF PORT H
		case GPIO_PORTH:
			//GET THE VALUE OF THE PIN AND STORE IT 
						*Add_pu8PinValue=GET_BIT(GPIO_PORTH_ODR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		
		}
	}
	//IN THE MODER IF THE PIN IS INPUT PIN TAKE THE VALUE FROM IDR REG 
	if(Add_pu8CnfgStatus->gpio_mode_x ==GPIO_MODE_u64_INPUT)
	{
		//WHICH  PORT
	switch(Add_pu8CnfgStatus->gpio_port_x)
	{
		//IF PORT A
		case GPIO_PORTA:
		//GET THE VALUE OF THE PIN AND STORE IT
		*Add_pu8PinValue=GET_BIT(GPIO_PORTA_IDR,Add_pu8CnfgStatus->gpio_pin_x);
			break;
		//IF PORT B
		case GPIO_PORTB:
			//GET THE VALUE OF THE PIN AND STORE IT
						*Add_pu8PinValue=GET_BIT(GPIO_PORTB_IDR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
//IF PORT C
		case GPIO_PORTC:
//GET THE VALUE OF THE PIN AND STORE IT
		*Add_pu8PinValue=GET_BIT(GPIO_PORTC_IDR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
//IF PORT D
		case GPIO_PORTD:
//GET THE VALUE OF THE PIN AND STORE IT
		*Add_pu8PinValue=GET_BIT(GPIO_PORTD_IDR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
//IF PORT E
		case GPIO_PORTE:
//GET THE VALUE OF THE PIN AND STORE IT
		*Add_pu8PinValue=GET_BIT(GPIO_PORTE_IDR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
//IF PORT H
		case GPIO_PORTH:
//GET THE VALUE OF THE PIN AND STORE IT
		*Add_pu8PinValue=GET_BIT(GPIO_PORTH_IDR,Add_pu8CnfgStatus->gpio_pin_x);

			break;
		
		}
	}
	//RETURN
	return ErrorStatus;
}


//THE FUNCTION SET AN ALTERNATIVE FUNCTION TO A SPECIFIC PIN
Gpio_tenuErrorStatus Gpio_SetAlternateFunction(uint8 Copyu8Port ,uint8 Copyu8Pin , uint8 CopyAF)
{
	//ERROR STATUS
	uint8 ErrorStatus=Gpio_enuOk;
	
		//IF THE PORT NUMBER HIGHER THEN THE MAXIMUM NUMBER OF PORTS FIRE ERROR
	if(Copyu8Port > GPIO_MAX_PORT_NUM)
	     {
		        ErrorStatus=Gpio_WrongPortNumError;
	     }
	
		//IF THE PIN NUMBER HIGHER THEN THE MAXIMUM NUMBER OF PINS FIRE ERROR
	if(Copyu8Pin > GPIO_MAX_PIN_NUM)
	{
			ErrorStatus=Gpio_WrongPinNumError;
	}
	//WHICH PORT
	switch(Copyu8Port)
	{
		//IF PORT A
		case GPIO_PORTA:
			//IF THE PIN CONFIGURED AS AF IN MODER REG  
				if((GPIO_PORTA_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTA_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					  GPIO_PORTA_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
				
			break;
				
		//IF PORT B
		case GPIO_PORTB:
		//IF THE PIN CONFIGURED AS AF IN MODER REG  
		if((GPIO_PORTB_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTB_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					  GPIO_PORTB_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
		break;
				
		//IF PORT C
		case GPIO_PORTC:
			//IF THE PIN CONFIGURED AS AF IN MODER REG
		if((GPIO_PORTC_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTC_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					GPIO_PORTC_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
		break;
				
		//IF PORT D
		case GPIO_PORTD:
			//IF THE PIN CONFIGURED AS AF IN MODER REG
			if((GPIO_PORTD_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTD_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					GPIO_PORTD_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
		break;
				
		//IF PORT E
		case GPIO_PORTE:
			//IF THE PIN CONFIGURED AS AF IN MODER REG
			if((GPIO_PORTE_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTE_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					GPIO_PORTE_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
		break;
				
		//IF PORT H
		case GPIO_PORTH:
		 //IF THE PIN CONFIGURED AS AF IN MODER REG
		 if((GPIO_PORTH_MODER & ((0x00000003)<<Copyu8Pin*2)>>(Copyu8Pin*2))==GPIO_MODE_u64_AF_PP)
				{
					//IF THE PIN NUMBER LESS THAN 8 _AFL_REG
					if(Copyu8Pin<8)
					{
					GPIO_PORTH_AFL=(CopyAF<<Copyu8Pin*4);
					}
					//IF THE PIN NUMBER HIGHER THAN 8 _AFH_REG
					else if(Copyu8Pin>8 && Copyu8Pin<16)
					{
						Copyu8Pin -=8;
					GPIO_PORTH_AFH=(CopyAF<<Copyu8Pin*4);
					}
				}
				//IF NOT CONFIGURED AS AF
				else 
				{
					ErrorStatus=Gpio_WrongAFError;
				}
		break;
		
	}
	return ErrorStatus;	
}
