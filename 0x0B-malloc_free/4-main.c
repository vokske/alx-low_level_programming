#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int height = 5;
	int width = 5;
	int i, j, **grid;

	grid = (int **)alloc_grid(width, height);
	if (grid == NULL)
	{
		printf("Failed to allocate grid.\n");
		return (1);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
	free_grid(grid, height);
	return (0);
}
