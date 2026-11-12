#include "aKaReZa.h"

#define ADC_to_Duty(_x) (_x*0.249267)
#define Duty_to_Per(_x) (_x*0.392157)
#define ADC_to_SP(_x)   (_x*0.293255)

extern uint16_t Motor_RPM;
extern uint16_t Motor_SP;
extern int16_t  RPM_ERR;
extern uint16_t Timer;

float    Duty     = 0.0;

char usart_Buffer[100];

int main(void)
{
  usart_Init(Initialize);
  usart_Putsln("aKaReZa - PMDC");
  adc_Init(Initialize);
  Timer2_Init();

  OCR2A = 0;
  delay_ms(2000);

  Timer1_Init();
  Timer0_Init();
  globalInt_Enable;

  GPIO_Config_OUTPUT(DDRD, 2);
  GPIO_Config_OUTPUT(DDRB, 5);
  
  while(1)
  {
    if(Timer < 1000)
    {
      Motor_SP = 0;
    }
    else if(Timer < 2000)
    {
      Motor_SP = 120;
    }
    else if(Timer < 3000)
    {
      Motor_SP = 210;
    }
    else if(Timer < 4000)
    {
      Motor_SP = 270;
    }
    else if(Timer < 5000)
    {
      Motor_SP = 150;
    }
    else if(Timer < 6000)
    {
      Motor_SP = 90;
    }
    else if(Timer < 7000)
    {
      Motor_SP = 0;
    }
    else if(Timer < 8000)
    {
      Motor_SP = 180;
    }
    else if(Timer > 9000)
    {
      Motor_SP = 0;
    };    
    //Motor_SP = ADC_to_SP(adc_Read(0));
    Duty = Duty_to_Per(OCR2A);
    sprintf(usart_Buffer, "SP:%u, PV: %u, ERR:%d, Duty:%1.2f", Motor_SP, Motor_RPM, RPM_ERR, Duty);
    usart_Putsln(usart_Buffer);
    delay_ms(100);
  };
};