/***********************************************

Description : CONFIGURATION FILE FOR NVIC DRIVER

Date        : 27-10-2023

Author      : Mohamed Khaled

***********************************************/

#include "RCC.h"
#include "BIT_utilis.h"
#include "RCC_Prv.h"

//THE FUNCTION SWITCH TO THE  Copy_u8SysClk  AND DISABLE THE OLD CLOCK 
Rcc_tenuErrorStatus Rcc_enuSelectSysCLk(uint8 Copy_u8SysClk , uint8 Copy_u8OldSysClk) 
{
	//ERROR STATUS 
	uint8 Error_Status=Rcc_enuOk;
	
	//IF THE DESIRED CLOCK EQUAL THE OLD CLOCK FIRE ERROR 
	if(Copy_u8SysClk==Copy_u8OldSysClk)
	{
		Error_Status=RCC_enuUnLogicActionError;
	}
	//WHICH CLOCK IS DESIRED  
	switch(Copy_u8SysClk)
	{
		//IF HSI CLOCK 
		case RCC_CLK_HSI:
			//SWITCH TO HSI 
			RCC_CFGR |=RCC_CLK_HSI;
			break;
		//IF HSE 
		case RCC_CLK_HSE:
		//SWITCH TO HSE
			RCC_CFGR |=RCC_CLK_HSE;
			break;
		//IF PLL
		case RCC_CLK_PLL:
			//SWITCH TO PLL
			RCC_CFGR |=RCC_CLK_PLL;
			break;
		//ELSE FIRE ERROR 
		default :
			
			Error_Status=RCC_enuUnLogicActionError;
		
		break;
	}
	
	//WHICH OLD CLOCK 
	switch(Copy_u8OldSysClk)
	{
		//IF HSI CLOCK 
		case RCC_CLK_HSI:
		//STOP HSI CLOCK 
		RCC_CR &= (uint32)~(0x00000001<<0);
			break;
		//IF HSE CLOCK 
		case RCC_CLK_HSE:
		//STOP HSE CLOCK
		RCC_CR &= (uint32)~(0x00000001<<16);
			break;
		//IF PLL CLOCK 
		case RCC_CLK_PLL:
		//STOP PLL CLOCK
		RCC_CR &= (uint32)~(0x00000001<<24);
		break;
		default :
			Error_Status=RCC_enuUnLogicActionError;
		break;
	}
	//RETURN ERROR STATUS 
	return Error_Status;
}

//FUNCTION TO ENABLE AND DISABLE CLOCKS 
Rcc_tenuErrorStatus Rcc_enuControlCLk(uint8 Copy_u8ControlHSI  ,uint8 Copy_u8ControlHSE ,uint8 Copy_u8ControlPLL) 
{
	//ERROR STATUS 
	uint8 Error_Status=Rcc_enuOk;
	//COUNTER TO MEASURE THE TIMEOUT 
	uint32 counter=0;
	
	//IF HSI ON 
	if(Copy_u8ControlHSI==RCC_CNTROL_HSION)
	{
		//IF THE HSI IS THE SYSTEM CLOCK 
		if(SWS==RCC_CLK_HSI)
		{
			Error_Status=RCC_enuUnLogicActionError;
		}
		//IF THE HSI IS THE PLLSRC 
		else if(PLL_SRC==RCC_CLK_HSI)
		{
					Error_Status=RCC_enuUnLogicActionError;
		}
		//ELS 
		else
			{
			  RCC_CR |=(1<<0);
		  }
			//WAIT FOR READY FLAG 
	 while((RCC_CR & (1<<0)) !=1)
		{
			counter++;
			if(counter==2000000)
			{
				counter=0;
				//IF THE TIME OVER AND THE FLAG STILL ZERO FIRE ERROR 
				Error_Status=Rcc_enuTimeOutError;
				break;
			}
		}
	}
	//IF HSI  OFF 
	else if(Copy_u8ControlHSI==RCC_CNTROL_HSIOFF)
	{
		//IF THE HSI IS THE SYSTEM CLOCK
		if(SWS==RCC_CLK_HSI)
		{
			Error_Status=RCC_enuUnLogicActionError;
		}
		//IF THE HSI IS THE PLLSRC 
		else if(PLL_SRC==RCC_CLK_HSI)
		{
				Error_Status=RCC_enuUnLogicActionError;
		}
		else{
		RCC_CR &= (uint32)~(0x00000001<<0);
		}
	}
	
	
	if(Copy_u8ControlHSE==RCC_CNTROL_HSEON)
	{
		//IF THE HSE IS THE SYSTEM CLOCK
		if(SWS==RCC_CLK_HSE)
		{
			Error_Status=RCC_enuUnLogicActionError;

		}
		//IF THE HSE IS THE PLLSRC 
		else if(PLL_SRC==RCC_CLK_HSE)
		{
				Error_Status=RCC_enuUnLogicActionError;
		}
		else
		{
		RCC_CR |=(0x000C0000);
		RCC_CR |=(1<<16);
		}
		
		//WAIT FOR READY FLAG 
	while((RCC_CR & (1<<17)) !=1)
		{
			counter++;
			if(counter !=2000000)
			{
				counter=0;
				Error_Status=Rcc_enuTimeOutError;
				break;
			}
		}
	}
	
	
	
	else if(Copy_u8ControlHSE==RCC_CNTROL_HSEOFF)
	{
		//IF THE HSE IS THE SYSTEM CLOCK
		if(SWS==RCC_CLK_HSE)
		{
			Error_Status=RCC_enuUnLogicActionError;

		}
		//IF THE HSE IS THE PLLSRC 
		else if(PLL_SRC==RCC_CLK_HSE)
		{
				Error_Status=RCC_enuUnLogicActionError;
		}
		else
		{
		RCC_CR &= (uint32)~(0x00000001<<16);
		}
	}
	
	if(Copy_u8ControlPLL==RCC_CNTROL_PLLON)
	{
		//IF THE PLL IS THE SYSTEM CLOCK
		if(SWS==RCC_CLK_PLL)
		{
			Error_Status=RCC_enuUnLogicActionError;

		}
		else
			{
			   RCC_CR |=(1<<24);
		  }
			//WAIT FOR READY FLAG 
	while((RCC_CR & (1<<25)) !=1)
	  {
	 		counter++;
			if(counter==2000000)
			{
				counter=0;
				Error_Status=Rcc_enuTimeOutError;
				break;
			}
		}
	}
	else if(Copy_u8ControlPLL==RCC_CNTROL_PLLOFF)
	{
		//IF THE PLL IS THE SYSTEM CLOCK
		if(SWS==RCC_CLK_PLL)
	  	{
		    	Error_Status=RCC_enuUnLogicActionError;

		  }
		else
			{
	      	RCC_CR &= (uint32)~(0x00000001<<24);
			}
		
	}
	
	return Error_Status;
}




//FUNCTION TO CHECK IF THE CLOCK IS READY 
Rcc_tenuErrorStatus Rcc_enuCheckCLk(uint8 Copy_u8CLk, pu8 Add_pu8RdyStatus) 
{
	//ERROR STATUS 
	uint8 Error_Status=Rcc_enuOk;
	//IF THE POINTER EQUAL NULL
		if(Add_pu8RdyStatus==Null_ptr)
		{
			Error_Status=RCC_enuNullPointerError;
		}
		//WHICH CLOCK 
		switch(Copy_u8CLk)
	{
		//HSI CLOCK 
		case RCC_CLK_HSI:
			//CHECK THE READY FLAG 
			*Add_pu8RdyStatus=GET_BIT(RCC_CR,1);
			break;
		//HSE CLOCK
		case RCC_CLK_HSE:
			//CHECK THE READY FLAG
					*Add_pu8RdyStatus=GET_BIT(RCC_CR,17);
			break;
		//PLL CLOCK
		case RCC_CLK_PLL:
			//CHECK THE READY FLAG
				*Add_pu8RdyStatus=GET_BIT(RCC_CR,25);
			break;
		//ELSE CASES FIRE ERROR 
		default :
			Error_Status=RCC_enuUnLogicActionError;
		break;
	}
	
	return Error_Status;
}

//CONFIGURE THE PLL CLOCK 
Rcc_tenuErrorStatus Rcc_enuCnfgrPll(uint8 COPY_u8M , uint16 Copy_u16N , uint8 Copy_u8P , uint8 Copy_u8SrcPll , uint8 Copy_u8Q )
{
	//ERROR STATUS 
	uint8 Error_Status=Rcc_enuOk;
	//IF CLKSRC NOT HSI OR HSE 
	if(Copy_u8SrcPll !=RCC_PLLSRC_HSI  && Copy_u8SrcPll !=RCC_PLLSRC_HSE)
	{
		Error_Status=RCC_enuUnLogicActionError;
	}
	//IF M IS VALID NUMBER 	
	if( COPY_u8M >63 ||  COPY_u8M==0 || COPY_u8M==1)
	{
		Error_Status=RCC_enuInvalid_M_Error;
	}
	//IF N IS VALID NUMBER 
	if( Copy_u16N >511 ||  Copy_u16N==0 || Copy_u16N==1 ||Copy_u16N==433 || Copy_u16N==511)
	{
		Error_Status=RCC_enuInvalid_N_Error;
	}
	//IF Q IS VALID NUMBER 
	if(Copy_u8Q <2 || Copy_u8Q>15)
	{
		Error_Status=RCC_enuInvalid_Q_Error;
	}
	//IF P IS VALID NUMBER 
	if(Copy_u8P == 2 || Copy_u8P == 4 || Copy_u8P == 6 ||Copy_u8P == 8 )
	{
				Error_Status=RCC_enuInvalid_P_Error;
	}
	//IF CLOCK SRC IS HSI 
	if(Copy_u8SrcPll==RCC_PLLSRC_HSI)
	{
		RCC_PLLCFGR &= ~(1<<22);
	}
	//IF CLOCK SRC IS HSE
	else if(Copy_u8SrcPll==RCC_PLLSRC_HSE)
	{
		RCC_PLLCFGR |=(1<<22);
	}
	//SET THE VALUES OF M, N, Q AND P
	RCC_PLLCFGR |=(RCC_PLLCFGR & 0xFFFFFFE0) | (COPY_u8M<<0);
	RCC_PLLCFGR |=(RCC_PLLCFGR & 0xFFFF803F) | (Copy_u16N<<6);
	RCC_PLLCFGR |=(RCC_PLLCFGR & 0xF0FFFFFF) | (Copy_u8Q<<24);
	RCC_PLLCFGR |=(RCC_PLLCFGR & 0xFFFEFFFF) | (Copy_u8P<<16);

	//RETURN ERROR STATUS 
	return Error_Status;
}

//FUNCTION TO ENABLE PERIPHERAL CLOCK 
Rcc_tenuErrorStatus Rcc_enuEnablePeriphral(uint8 Copy_u8PeriphralBus , uint32 Copy_u32Periphral)
{
	//ERROR STATUS VAR 
	uint8 Error_Status=Rcc_enuOk;
	
	//WHICH PERIPHERAL BUS 
	switch(Copy_u8PeriphralBus)
	{
		//CASE AHB1
		case RCC_REGISTER_AHB1:
			//SET THE PERIPHERAL BIT 
		RCC_AHB1ENR |=Copy_u32Periphral;
			break;
		
					//CASE AHB2
			case RCC_REGISTER_AHB2:
				//SET THE PERIPHERAL BIT
			RCC_AHB2ENR |=Copy_u32Periphral;
			
			break;
		//CASE APB1
			case RCC_REGISTER_APB1:
				//SET THE PERIPHERAL BIT
						RCC_APB1ENR |=Copy_u32Periphral;

			break;
			//CASE APB2
		case RCC_REGISTER_APB2:
			//SET THE PERIPHERAL BIT
						RCC_APB1ENR |=Copy_u32Periphral;

			break;
		//IF ELSE CASES FIRE ERROR STATUS 
		default :
			Error_Status=Rcc_enuWrongBusPrescalerError;
	}
	//RETURN ERROR STATUS 
		return Error_Status;
}



//FUNCTION TO DISABLE PERIPHERAL CLOCK 
Rcc_tenuErrorStatus Rcc_enuDisablePeriphral(uint8 Copy_u8PeriphralBus , uint32 Copy_u32Periphral)
{
	//ERROR STATUS VAR 
	uint8 Error_Status=Rcc_enuOk;
	//WHICH PERIPHERAL BUS 
	switch(Copy_u8PeriphralBus)
	{
		//CASE AHB1
		case RCC_REGISTER_AHB1:
			//DISABLE THE PERPHIRAL
		RCC_AHB1RSTR |=Copy_u32Periphral;
		RCC_AHB1ENR &= ~Copy_u32Periphral;
		break;
			//CASE AHB2
			case RCC_REGISTER_AHB2:
				//DISABLE THE PERPHIRAL
			RCC_AHB2RSTR |=Copy_u32Periphral;
			RCC_AHB2ENR &= ~Copy_u32Periphral;

			break;
		//CASE APB1
			case RCC_REGISTER_APB1:
				//DISABLE THE PERPHIRAL
						RCC_APB1RSTR |=Copy_u32Periphral;
						RCC_APB1ENR &= ~Copy_u32Periphral;
			break;
			//CASE APB2
		case RCC_REGISTER_APB2:
			//DISABLE THE PERPHIRAL
						RCC_APB2RSTR |=Copy_u32Periphral;
						RCC_APB2ENR &= ~Copy_u32Periphral;
			break;
		//IF ELSE CASES FIRE ERROR STATUS 
		default :
			Error_Status=Rcc_enuWrongBusPrescalerError;
	}
	return Error_Status;
}

//DEFINE THE PRESCALER 
Rcc_tenuErrorStatus Rcc_enuCfgBusPrescalers(uint32 Copy_u32Prescaler)
{
	
	uint8 Error_Status=Rcc_enuOk;
  //SET THE PRESCALER 
	RCC_CFGR |=Copy_u32Prescaler;
	return Error_Status;

}

