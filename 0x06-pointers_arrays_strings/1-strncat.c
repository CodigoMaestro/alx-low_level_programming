#include "main.h"

/**
 * _strncat - entry point
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_l = 0;
	int i = 0;

	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest);
}
