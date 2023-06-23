#include "main.h"

/**
 * print_triangle - entry point
 * @size: int
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i < size)
	{
		for (j = 0; j <= size; j++)
		{
			if (j < size - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		i++;
	}
}
