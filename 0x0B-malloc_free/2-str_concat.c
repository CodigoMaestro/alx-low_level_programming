#include <stdlib.h>
#include "main.h"

/**
 * str_concat - entry point
 * @s1: char
 * @s2: char
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
