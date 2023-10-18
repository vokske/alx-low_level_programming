#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	int min = 0;
	int max = 8;
	int i;
	int *array = array_range(min, max);

	if (array)
	{
		for (i = 0; i <= max - min; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		free(array);
	}
	else
	{
		printf("Failed to create array\n");
	}
	return (0);
}
