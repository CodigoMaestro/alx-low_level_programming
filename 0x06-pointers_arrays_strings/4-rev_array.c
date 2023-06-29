#include "main.h"
#include <stdio.h>

/**
 * reverse_array - entry point
 * @a: int
 * @n: int
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;

		if (i > n)
		{
			printf(", ");
		}
	}
}
