#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str: char
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0, len = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
