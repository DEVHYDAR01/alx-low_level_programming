#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: clean up memory
 */
void free_grid(int **grid, int height)
{
	int m;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (m = 0; m < height;  m++)
	{
		free(grid[m]);
	}
	free(grid);
}
