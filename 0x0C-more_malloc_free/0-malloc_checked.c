#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: int
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
