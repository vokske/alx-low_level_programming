#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees previously allocated memory
 * @grid: 2-D array created
 * @height: Array rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
