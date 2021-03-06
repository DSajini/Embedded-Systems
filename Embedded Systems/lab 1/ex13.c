#include<avr/io.h>
#include<util/delay.h>

#define BLINK_DELAY_MS 1000

int main(void){
	DDRB = DDRB | (1<<5);
	DDRB = DDRB | (1<<4);
	DDRB = DDRB | (1<<3);
	DDRB = DDRB | (1<<2);    // configure Pin 5,4,3,2 of PORT B as output

	while(1){
		PORTB = PORTB |(1<<5);
		_delay_ms(BLINK_DELAY_MS);  //A
		PORTB = PORTB &~ (1<<5);

		PORTB = PORTB | (1<<4); 
		_delay_ms(BLINK_DELAY_MS);  //B
		PORTB = PORTB &~ (1<<4);

		PORTB = PORTB | (1<<3); 
		_delay_ms(BLINK_DELAY_MS);  //C
		PORTB = PORTB &~ (1<<3);

		PORTB = PORTB | (1<<2); 
		_delay_ms(BLINK_DELAY_MS);    //D
		PORTB = PORTB &~ (1<<2);

		PORTB = PORTB | (1<<3); 
		_delay_ms(BLINK_DELAY_MS);   //C
		PORTB = PORTB &~ (1<<3);

		PORTB = PORTB | (1<<4); 
		_delay_ms(BLINK_DELAY_MS);    //B
		PORTB = PORTB &~ (1<<4);

		PORTB = PORTB | (1<<5);
		_delay_ms(BLINK_DELAY_MS);   //A
		PORTB = PORTB &~ (1<<5);


		PORTB = PORTB | (1<<4);
		_delay_ms(BLINK_DELAY_MS);    //B
		PORTB = PORTB &~ (1<<4);

		PORTB = PORTB |(1<<3);
		_delay_ms(BLINK_DELAY_MS);       //C
		PORTB = PORTB &~ (1<<3);




	}
}