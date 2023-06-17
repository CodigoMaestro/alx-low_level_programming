#include <stdio.h>

/**
 * main - Entry point
 * Description: returns alphabet in script that prints alphabet
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
