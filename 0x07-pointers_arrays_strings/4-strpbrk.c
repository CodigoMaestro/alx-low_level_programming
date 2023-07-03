#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * @s: char
 * @accept: char
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
