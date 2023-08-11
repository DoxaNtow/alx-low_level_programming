#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two dimentional array
 * @grid: two dimentional grid
 * @height: height of grid
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

