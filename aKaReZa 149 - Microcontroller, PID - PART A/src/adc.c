/**
 * @file     adc.c
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
#include "adc.h"


/**
 * @brief Reads the internal temperature sensor.
 * 
 * This function reads the internal temperature sensor of the microcontroller and returns 
 * the corresponding 10-bit ADC result. It can be used to monitor the temperature of the 
 * microcontroller during operation.
 * 
 * @return int8_t The 10-bit ADC result from the internal temperature sensor.
 */
int8_t adc_internalTemp(void)
{
    int8_t _Temp = 0;
    /* Select Vbg (1.1V) as reference voltage for the ADC */
    bitSet(ADMUX, REFS1);
    bitSet(ADMUX, REFS0);  
    /* Set ADC channel to read the internal temperature sensor */
    bitSet  (ADMUX, MUX3);
    bitClear(ADMUX, MUX2);
    bitClear(ADMUX, MUX1);
    bitClear(ADMUX, MUX0);
    delay_ms(10); /**< Delay for 10 ms to allow the ADC to stabilize before reading */
    bitSet(ADCSRA, ADSC);         /**< Start the ADC conversion */
    bitWaitHigh(ADCSRA, ADIF);    /**< Wait until the ADC conversion is complete */
    intFlag_clear(ADCSRA, ADIF);  /**< Clear the ADC interrupt flag to prepare for the next ADC operation */
    /* Convert the ADC result to temperature (formula based on datasheet) */
    _Temp = 0.782*Combine_8to16(ADCH, ADCL) - 250;
    return _Temp;    
};


/**
 * @brief Reads the ADC value from a specified channel.
 * 
 * This function reads the analog value from a given ADC channel (0-7) and returns 
 * the corresponding 10-bit digital result. It is useful for measuring analog signals 
 * such as sensors or voltage levels.
 * 
 * @param _adcChannel The ADC channel number (0-7) from which the value should be read.
 * @return uint16_t The 10-bit ADC result from the specified channel.
 */
uint16_t adc_Read(uint8_t _adcChannel)
{
    /*  Select AVCC as Reference */
    bitClear(ADMUX, REFS1);
    bitSet  (ADMUX, REFS0);    
    /*  Set ADC Channel */
    bitChange(ADMUX, MUX3, bitCheck(_adcChannel, 3));
    bitChange(ADMUX, MUX2, bitCheck(_adcChannel, 2));
    bitChange(ADMUX, MUX1, bitCheck(_adcChannel, 1));
    bitChange(ADMUX, MUX0, bitCheck(_adcChannel, 0));
    _delay_us(10); /**< Wait for the ADC channel selection to stabilize */
    bitSet(ADCSRA, ADSC);          /**<  Start the ADC conversion */
    bitWaitHigh(ADCSRA, ADIF);     /**<  Wait until the ADC conversion is complete */
    intFlag_clear(ADCSRA, ADIF);   /**< Clear the ADC interrupt flag */
    return Combine_8to16(ADCH, ADCL);   /**<  Return the 10-bit ADC result */
};


/**
 * @brief Initializes the ADC module.
 * 
 * This function configures the ADC with default settings. If the `_initStatus` parameter 
 * is set to `Initialize`, the ADC is enabled and ready to use. If `_initStatus` is set to 
 * `deInitialize`, the ADC module is disabled.
 * 
 * @param _initStatus A boolean indicating whether to initialize (`Initialize`) or deinitialize (`deInitialize`) the ADC module.
 */
void adc_Init(bool _initStatus)
{
    if(_initStatus)
    {
        /*  Set Prescaler to 128 */
        bitSet(ADCSRA, ADPS2);
        bitSet(ADCSRA, ADPS1);
        bitSet(ADCSRA, ADPS0);
        /*  Select AVCC as Reference */
        bitClear(ADMUX, REFS1);
        bitSet  (ADMUX, REFS0);
        bitClear(ADMUX, ADLAR); /**< Right-align the ADC result (ADLAR = 0) */
        bitSet(ADCSRA , ADEN);  /**<  Enable the ADC */
    }
    else
    {
        /*  Disable the ADC */
        bitClear(ADCSRA, ADPS2);
        bitClear(ADCSRA, ADPS1);
        bitClear(ADCSRA, ADPS0);
        bitClear(ADMUX , REFS1);
        bitClear(ADMUX , REFS0);
        bitClear(ADCSRA, ADEN); 
    };
};
