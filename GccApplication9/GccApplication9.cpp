#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x07;
	
	PORTA = 0x03;
	
    while(1)
    {
        
		
		if(PINA&(1<<PINA0))
			{
			PORTB = 0x00;
				_delay_ms(1000);
			PORTB = (1<<PB0) | (1<<PB1) | (1<<PB2);				
			}	
		if (!(PINA&(1<<PINA1)))
		{
			PORTB = (1<<PB0) | (1<<PB2);
		}
		if (PINA&(1<<PINA1))
		{
			PORTB = (1<<PB0) | (1<<PB1) | (1<<PB2);
		}
	}
	}