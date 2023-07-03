#include "main.h"

/**
 * _strspn - Entry point
 * @s: data type char
 * @accept: data type char
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr = s;

	while (*ptr)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*ptr == *temp)
			{
				count++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			return (count);
		}
		ptr++;
	}
	return (count);
}
