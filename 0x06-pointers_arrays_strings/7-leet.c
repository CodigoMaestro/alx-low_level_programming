#include "main.h"

/**
 * leet - entry point
 * @s: char
 * Return: char
 */

char *leet(char *s)
{
	int i = 0, j;
	char *letters = "AaEeOoTtLl";
	char *num = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
