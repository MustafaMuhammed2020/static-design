/***************************************************************/
/** AUTHOR  : Mustafa Muhammed Abdou                          **/
/** DATE    : 12 May , 2023                                   **/
/** VERSION : V01                                             **/
/** HINT    : Configuration file of UART                      **/
/***************************************************************/

/** INCLUDE .h CONFIGURATION FILE OF UART **/
#include "UART_config.h"

/*********************************************************************/
/**                    UART CONFIGURATIONS                          **/
/**             1 - ASYNCRONOUS MODE (NO POLARITY)                  **/
/**             2 - DATA SIZE (8 BITS)                              **/
/**             3 - BAUD RATE 9600                                  **/
/**             4 - ONE STOP BIT                                    **/
/**             5 - NO PARITY BITS                                  **/
/**             6 - DISABLE MULTI PROCESSOR MODE                    **/
/**             7 - DISABLE DOUBLE SPEED MODE                       **/
/**             8 - DISABLE RECEIVE INTTERUPT                       **/
/**             9 - DISABLE UDR INTTERUPT                           **/
/*********************************************************************/

/** CREATE VARIABLE FROM UART CONFIGURATION STRUCT AND ASSIGN THE CONFIGURATION PARAMETERS **/
UART_CFG UART1 = {
	
	ASYNCRONOUS ,
	NO_PARITY ,
	DATA_8 ,
	BAUDRATE_9600 ,
	ONE_STOP_BIT ,
	NO_PARITY ,
	DISABLE_MULTI_PROCESSOR ,
	DISABLE_DOUBLE_SPEED ,
	DISABLE_TRANSMIT_INT ,
	DISABLE_RECEIVE_INT ,
	DISABLE_UDR_INT ,
	
	};
