#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point
 * @size: unsigned int
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
	free(arr);
}
