#include "main.h"

/**
 * _strcpy - entry point
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
