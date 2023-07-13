#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = 0;
	int s2_len = 0;
	int i;
	unsigned int j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	if (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	str = malloc((s1_len + n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
