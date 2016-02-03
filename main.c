#include "LS_defines.h"
#include "LS_ATmega328.h"

int main(){
	usartInit(9600);
	usartEnableTransmitter();
	usartStdio();

	while(1){
		printf("the quick brown fox jumps over the lazy dog\r\n");
		_delay_ms(500);
	}

	return 0;
}

//#define F_CPU 16000000UL // Clock frequency, needed to delay functions
//#include <avr/io.h> // Register definitions
//#include <util/delay.h> // Delay functions
//int main(){
// DDRB |= (1<<PB5); // Define PORTB5 as an output
// while(1){ // Infinite loop
// PORTB |= (1<<PB5); // Turn led on
// _delay_ms(1000); // Wait 1 second
// PORTB &= ~(1<<PB5); // Turn led off
// _delay_ms(1000); // Wait another second
// }
// return 0;
//}
