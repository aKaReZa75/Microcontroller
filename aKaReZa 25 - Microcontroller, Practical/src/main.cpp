#include <avr/io.h>
#include <util/delay.h>

#define setBit(Reg, Bit) (Reg |= (1<<Bit))
#define clearBit(Reg, Bit) (Reg &= ~(1<<Bit))
#define toggleBit(Reg, Bit) (Reg ^= (1<<Bit))
#define checkBit(Reg, Bit) ((Reg>>Bit) & 0x01)

int main(void)
{
  setBit(DDRB, 5);
  clearBit(DDRC, 1);
  while(1)
  {
    if(!checkBit(PINC, 1))
    {
      while(!checkBit(PINC, 1));
      toggleBit(PORTB, 5);
      _delay_ms(250);
    };
  };
};
