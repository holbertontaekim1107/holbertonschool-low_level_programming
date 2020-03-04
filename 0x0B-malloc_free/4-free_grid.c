#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free up grid
 * @grid: pointer to a pointer to grid
 * @height: height
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
