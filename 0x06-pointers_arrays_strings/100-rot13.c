#include "main.h"

/**
 * rot13 - entry point
 * @s: char
 * Return: s
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (((s[i] - 'a') + 13) / 26) + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'z')
		{
			s[i] = (((s[i] - 'A') + 13) / 26) + 'A';
		}
	}
	return (s);
}
