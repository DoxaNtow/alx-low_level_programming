#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes with 0.
 *
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: On success, returns a pointer to the 2D array.
 *         Returns NULL on failure or invalid dimensions.
 */
int **alloc_grid(int width, int height)
{
	int **grid1;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid1 = (int **)malloc(height * sizeof(int *));
	if (grid1 == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid1[x] = (int *)malloc(width * sizeof(int));
		if (grid1[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid1[y]);
			free(grid1);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			grid1[x][y] = 0;
		}
	}

	return (grid1);
}
