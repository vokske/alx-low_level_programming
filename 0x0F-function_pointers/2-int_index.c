#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array where a number will be searched.
 * @size: Size of the array.
 * @cmp: Pointer to a function that compares two integers.
 *
 * Return: Index of the first element for which the cmp function does not
 * return 0, or -1 if no match is found or size <= 0.
 */ 

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
