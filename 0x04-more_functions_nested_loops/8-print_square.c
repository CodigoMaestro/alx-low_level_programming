#include "main.h"

/**
 * print_square - entry point
 * @size: int
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
