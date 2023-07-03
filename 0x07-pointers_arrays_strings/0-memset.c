#include "main.h"

/**
 * _memset - Entry point
 * @s: data type void
 * @b: data type int
 * @n: data type int
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
