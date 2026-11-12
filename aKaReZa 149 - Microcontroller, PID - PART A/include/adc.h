/**
 * @file     adc.h
 * @brief    ADC (Analog-to-Digital Converter) Library for AVR Microcontrollers
 * @note     This file provides functions to manage ADC operations for AVR microcontrollers, 
 *           specifically for the ATmega328 microcontroller.
 * 
 * @author   Hossein Bagheri
 * @github   https://github.com/aKaReZa75
 * 
 * 
 * @note     For detailed explanations of this library, along with additional notes and examples of usage, 
 *           please visit the following repository:
 *           https://github.com/aKaReZa75/AVR_ADC
 */
#ifndef _adc_H_
#define _adc_H_

#include "aKaReZa.h"

/**
 * @brief Initializes the ADC module.
 * 
 * @param _initStatus A boolean indicating whether to initialize (`Initialize`) or deinitialize (`deInitialize`) the ADC module.
 */
void adc_Init(bool _initStatus);

/**
 * @brief Reads the internal temperature sensor.
 * 
 * @return int8_t The 10-bit ADC result from the internal temperature sensor.
 */
int8_t adc_internalTemp(void);

/**
 * @brief Reads the ADC value from a specified channel.
 * 
 * @param _adcChannel The ADC channel number (0-7) from which the value should be read.
 * @return uint16_t The 10-bit ADC result from the specified channel.
 */
uint16_t adc_Read(uint8_t _adcChannel);

#endif