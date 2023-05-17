#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that retuns a pointer
 * of a two dimension array
 * @width: rows of the array
 * @height: column in the array
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] =  0;
		}
	}
	return (grid);
}
