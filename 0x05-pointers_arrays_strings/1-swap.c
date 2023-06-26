#include "main.h"

/**
 * swap_int - entry point
 * @a: int
 * @b: int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
