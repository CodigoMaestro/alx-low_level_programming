#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_coins, cents, i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;
	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
