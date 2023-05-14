/***************************************************************/
/** AUTHOR  : Mustafa Muhammed Abdou                          **/
/** DATE    : 12 May , 2023                                   **/
/** VERSION : V01                                             **/
/** HINT    : Configuration file of UART                      **/
/***************************************************************/
#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

/** ENUMERATION FOR THE UART MODE **/
typedef enum {SYNCRONOUS , ASYNCRONOUS } en_a_UARTMode ;

/** ENUMERATION FOR THE POLARITY **/
typedef enum {IDLE_HIGH , IDLE_LOW , NO_POLARITY} en_a_UARTPolarity ;

/** ENUMERATION FOR THE NUMBER OF DATA BITS **/
typedef enum {DATA_5 , DATA_6 , DATA_7 , DATA_8 , DATA_9} en_a_UARTDataBits ;
	
/** ENUMERATION FOR THE BAUD RATE VALUE **/
typedef enum {BAUDRATE_4800 , BAUDRATE_9600 , BAUDRATE_115200 , BAUDRATE_2400 } en_a_UARTBaudRate ;

/** ENUMERATION FOR THE NUMBER OF STOP BITS **/
typedef enum {ONE_STOP_BIT , TWO_STOP_BITS } en_a_UARTStopBit ;

/** ENUMERATION FOR THE PARITY BIT CONFIGURATION **/
typedef enum {EVEN_PARITY , ODD_PARITY , NO_PARITY } en_a_UARTBarityBit ;

/** ENUMERATION FOR THE MULTI PROCESSOR MODE **/
typedef enum {DISABLE_MULTI_PROCESSOR , ENABLE_MULTI_PROCESSOR } en_a_UARTMultiProcessor ;

/** ENUMERATION FOR THE DOUBLE SPEED MODE **/
typedef enum {DISABLE_DOUBLE_SPEED , ENABLE_DOUBLE_SPEED } en_a_UARTDoubleSpeed ;

/** ENUMERATION FOR THE TRANSMITTING INTERRUPT MODE **/
typedef enum {DISABLE_TRANSMIT_INT , ENABLE_TRANSMIT_INT } en_a_UARTTransmitint ;

/** ENUMERATION FOR THE RECEIVING INTERRUPT MODE **/
typedef enum {DISABLE_RECEIVE_INT , ENABLE_RECEIVE_INT } en_a_UARTReceiveint ;

/** ENUMERATION FOR THE UDR INTERRUPT MODE **/
typedef enum {DISABLE_UDR_INT , ENABLE_UDR_INT } en_a_UARTUDRint ;


/** STRUCT TYPE TO CONFIGURE UART MODULE **/
typedef struct  
{
	en_a_UARTMode     uart_mode ; 
	en_a_UARTPolarity uart_polarity ;
	en_a_UARTDataBits uart_data_size ;
	en_a_UARTBaudRate uart_baudrate ;
	en_a_UARTStopBit  uart_stopbit ;
	en_a_UARTBarityBit uart_parity ;
	en_a_UARTMultiProcessor uart_multiprocessor ;
	en_a_UARTDoubleSpeed  uart_doublespeed ;
	en_a_UARTTransmitint  uart_transmitinterrupt ;
	en_a_UARTReceiveint   uart_receiveinterrupt ;
	en_a_UARTUDRint  uart_udrinterrupt ;
	

}UART_CFG;



#endif /* UART_CONFIG_H_ */