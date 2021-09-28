/*
 * spi.h
 *
 * Created: 9/26/2021 3:23:01 AM
 *  Author: Omar
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "../bit_operations.h"
#include "../MC/My_avr.h"
/**************************************** FUNCTIONS PROTOTYPES ****************************************/
void SPI_MasterInit();
void SPI_SlaveInit();
void SPI_Master_send_byte(uint8_t Data, uint8_t slave_ID);
uint8_t SPI_Slave_receive_byte();
void SPI_Master_send_string(uint8_t* str, uint8_t slave_ID);
void SPI_Slave_receive_string();




#endif /* SPI_H_ */