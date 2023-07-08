#include "main.h"

int print_last_digit(int n){
	int num;

	num = n % 10;

	if (n < 0){
		num = -num;
	}
	_putchar(num + '0');
	return (num);
}
