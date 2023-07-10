#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - entry point
 * @width: int
 * @height: int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **rows;

	rows = (int **)malloc(height * sizeof(int *));

	if (rows == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rows[i] = (int *)malloc(width * sizeof(int));

		if (rows[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rows[j]);
			}
			free(rows);
			return (NULL);
		}

		for(j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}

/**
 * free_grid - entry point
 * @grid: int
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
