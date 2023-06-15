#include <unistd.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	write(2, "\n", 1);
	return (1);
}
