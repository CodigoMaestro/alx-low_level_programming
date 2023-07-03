#include "main.h"
#include <stdlib.h>


/**
 * _strchr - Entry point
 * @s: data type char
 * @c: data type char
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
