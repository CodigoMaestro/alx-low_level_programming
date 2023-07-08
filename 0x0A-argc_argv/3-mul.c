#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
