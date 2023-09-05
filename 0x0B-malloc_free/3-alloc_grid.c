#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - This function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: is of int type
 * @height: is of int type
 * Return: will be grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int m, n;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(width * sizeof(int));
		if (ptr[m] == NULL)
		{
			for (n = 0; n < m;  n++)
			free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			ptr[m][n] = 0;
		}
	}
	return (ptr);
}
