#include "main.h"

/**
 * cap_string - entry point
 * @s: char
 * Return: 0
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char seprator[] = " \t\n,;.!?\"(){}";
	int len_sepra = sizeof(seprator) / sizeof(seprator[0]);

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}

	while (s[i] != '\0')
	{
		for (j = 0; j < len_sepra; j++)
		{
			if (s[i] == seprator[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
