#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
