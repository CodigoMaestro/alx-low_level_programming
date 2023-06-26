#include "main.h"

/**
 * _atoi - entry point
 * @s: char
 * Return: s
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else
		{
			sign = 1;
		}

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	result = result * sign;

	return (result);
}
