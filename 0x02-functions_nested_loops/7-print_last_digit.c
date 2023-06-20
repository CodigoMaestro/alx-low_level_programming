#include "main.h"

/**
 * print_last_digit - entry point
 * @n: int
 * Return: 0
 */

int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (n < 0)
	{
		num = -num;
		return (num);
	}
	else
	{
		return (num);
	}
}
