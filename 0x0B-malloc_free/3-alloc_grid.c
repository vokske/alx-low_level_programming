#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-D array of integers
 * @width: Array rows
 * @height: Array columns
 *
 * Return: Pointer to the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));	
		if (grid[i] == NULL)
		{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
