#include "main.h"

/**
 * jack_bauer - entry point
 * Return: 0
 */

void jack_bauer(void){
	int Hour, minutes;

	for (Hour = 0; Hour < 24; Hour++){
		for (minutes = 0; minutes < 60; minutes++){
			_putchar(Hour / 10 + '0');
			_putchar(Hour % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
