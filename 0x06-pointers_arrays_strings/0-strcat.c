#include "main.h"

/**
 * _strcat - entry point
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_l = 0;
	int src_l = 0;
	int i = 0;

	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}

	while (src[src_l] != '\0')
	{
		dest[dest_l + i] = src[src_l];
		i++;
		src_l++;
	}
	dest[dest_l + i] = '\0';
	return (dest);
}
