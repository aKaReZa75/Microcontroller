#include "timer.h"

uint16_t Motor_RPM = 0;
uint16_t Motor_SP = 0;
int16_t  RPM_ERR  = 0;
uint16_t Timer = 0;

#define Kp 1.0f
#define Ki 0.1f

/* ISR for Compare Match A */
ISR(TIMER0_COMPA_vect)
{
    static uint8_t _Counter = 0;
    int16_t _U = 0;
    static int16_t _ERR_Sum = 0;

    Timer++;
    _Counter++;
    if(_Counter==10)
    {
        Motor_RPM = TCNT1*1.36;
        TCNT1 = 0;
        _Counter = 0;

        RPM_ERR = Motor_SP - Motor_RPM;
        _ERR_Sum += RPM_ERR;

        _U = Kp*RPM_ERR + Ki*_ERR_Sum;

        if(_U>=0)
        {
            bitSet(PORTB, 5);
        }
        else
        {
            _U = MATH_Abs(_U);
            bitClear(PORTB, 5);
        };

        OCR2A = _U;      
    };
};

void Timer0_Init(void)
{
    /* Configure Timer0 for CTC Mode (Mode 2) */
    bitClear(TCCR0A, WGM00);
    bitSet(TCCR0A, WGM01);
    bitClear(TCCR0B, WGM02);

    /* Set Prescaler = 1024 => Timer clock frequency = 16MHz/1024 = 15.625KHz */
    bitSet(TCCR0B, CS00);
    bitClear(TCCR0B, CS01);
    bitSet(TCCR0B, CS02);
    
    OCR0A = 155;

    /**< Enable Compare Match A interrupt */
    bitSet(TIMSK0, OCIE0A);

    /* Clear compare match A flag */
    intFlag_clear(TIFR0, OCF0A);   
};


void Timer1_Init(void)
{
    /* Configure Timer1 for Normal Mode */
    bitClear(TCCR1A, WGM10);
    bitClear(TCCR1A, WGM11);
    bitClear(TCCR1B, WGM12);
    bitClear(TCCR1B, WGM13);

    /* External Clock Source on Rising Edge */
    bitSet(TCCR1B, CS10);
    bitSet(TCCR1B, CS11);
    bitSet(TCCR1B, CS12);    
};

void Timer2_Init(void)
{
  /* Configure Timer2 for Fast PWM (Mode 3) */
  bitSet(TCCR2A, WGM20);
  bitSet(TCCR2A, WGM21);
  bitClear(TCCR2B, WGM22);

  /* Set Prescaler = 32 => Timer clock = 500kHz */
  bitSet(TCCR2B, CS20);
  bitSet(TCCR2B, CS21);
  bitClear(TCCR2B, CS22);

  /* Non-Inverting PWM Output (Clear OC2A on Compare Match) */
  bitSet(TCCR2A, COM2A1);
  bitClear(TCCR2A, COM2A0);

  GPIO_Config_OUTPUT(DDRB, 3);
};