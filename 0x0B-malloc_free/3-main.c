#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	int width = 4;
	int height = 4;
	int i, j;

	int **grid = alloc_grid(width, height);
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
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (0);
}
