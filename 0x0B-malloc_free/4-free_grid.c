#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimension array allocated using malloc
 * @grid: the 2d array
 * @height: a dimention of the array
 *
 * Return: nothing
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
