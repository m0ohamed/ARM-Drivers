#ifndef GPIO_Cfg_H
#define GPIO_Cfg_H

#include "GPIO.h"
/*THE CONFIGURATION FILE FOR GPIO INIT FUNCTION :
 *GPIO_OUTPUT_PP_LWS			
 *GPIO_OUTPUT_PP_MDS			
 *GPIO_OUTPUT_PP_HS				
 *GPIO_OUTPUT_PP_VHS			
 *
 *GPIO_OUTPUT_OD_PLU_LWS	
 *GPIO_OUTPUT_OD_PLU_MDS	
 *GPIO_OUTPUT_OD_PLU_HS		
 *GPIO_OUTPUT_OD_PLU_VHS	
 *
 *GPIO_OUTPUT_OD_PLD_LWS	
 *GPIO_OUTPUT_OD_PLD_MDS	
 *GPIO_OUTPUT_OD_PLD_HS		
 *GPIO_OUTPUT_OD_PLD_VHS  
 *
 *GPIO_INPUT_OD_PLU_LWS		
 *GPIO_INPUT_OD_PLU_MDS		
 *GPIO_INPUT_OD_PLU_HS		
 *GPIO_INPUT_OD_PLU_VHS		
 *
 *GPIO_INPUT_OD_PLD_LWS		
 *GPIO_INPUT_OD_PLD_MDS		
 *GPIO_INPUT_OD_PLD_HS		
 *GPIO_INPUT_OD_PLD_VHS	  
 *
 *GPIO_AF_PP							
 *
 *GPIO_AF_OD_PLU					
 *	
 *GPIO_AF_OD_PLD          
 *
 *GPIO_ANALOG							
 
 */

//PORT A PINS CONFIGURATION
#define GPIO_PORTA_PIN0            GPIO_INPUT_OD_PLD_HS
#define GPIO_PORTA_PIN1            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN2            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN3            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN4            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN5            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN6            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN7            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN8            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN9            GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN10           GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN11           GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN12           GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN13           GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN14           GPIO_OUTPUT_PP_HS
#define GPIO_PORTA_PIN15           GPIO_OUTPUT_PP_HS
																	 
//PORT B PINS	CONFIGURATION																 
#define GPIO_PORTB_PIN0            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN1            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN2            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN3            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN4            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN5            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN6            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN7            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN8            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN9            GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN10           GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN11           GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN12           GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN13           GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN14           GPIO_OUTPUT_PP_HS
#define GPIO_PORTB_PIN15           GPIO_OUTPUT_PP_HS
																	 
				
//PORT C PINS	CONFIGURATION			
#define GPIO_PORTC_PIN0            GPIO_INPUT_OD_PLD_HS
#define GPIO_PORTC_PIN1            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN2            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN3            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN4            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN5            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN6            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN7            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN8            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN9            GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN10           GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN11           GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN12           GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN13           GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN14           GPIO_INPUT_OD_PLU_HS
#define GPIO_PORTC_PIN15           GPIO_INPUT_OD_PLU_HS
																	 
				
//PORT D PINS		CONFIGURATION		
#define GPIO_PORTD_PIN0            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN1            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN2            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN3            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN4            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN5            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN6            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN7            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN8            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN9            GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN10           GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN11           GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN12           GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN13           GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN14           GPIO_OUTPUT_PP_HS
#define GPIO_PORTD_PIN15           GPIO_OUTPUT_PP_HS
																	 
				
//PORT E PINS	CONFIGURATION			
#define GPIO_PORTE_PIN0            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN1            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN2            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN3            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN4            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN5            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN6            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN7            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN8            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN9            GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN10           GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN11           GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN12           GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN13           GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN14           GPIO_OUTPUT_PP_HS
#define GPIO_PORTE_PIN15           GPIO_OUTPUT_PP_HS
																	 
				
//PORT H PINS		CONFIGURATION		
#define GPIO_PORTH_PIN0            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN1            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN2            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN3            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN4            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN5            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN6            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN7            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN8            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN9            GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN10           GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN11           GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN12           GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN13           GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN14           GPIO_OUTPUT_PP_HS
#define GPIO_PORTH_PIN15           GPIO_OUTPUT_PP_HS


#endif
