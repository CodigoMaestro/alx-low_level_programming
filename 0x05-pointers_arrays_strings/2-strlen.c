#include "main.h"

/**
 * _strlen - entry point
 * @s: char
 * Return: 0
 */

int _strlen(char *s)
{
	int lens = 0;

	while (*s != '\0')
	{
		lens++;
		s++;
	}
	return (lens);
}
