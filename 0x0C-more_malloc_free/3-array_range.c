#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the created array
 */
int *array_range(int min, int max)
{
	int *array = malloc(sizeof(int) * (max - min + 1));
	int i;

	if (min > max)
	{
		return (NULL);
	}
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
