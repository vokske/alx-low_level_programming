#include "function_pointers.h"

/**
 * array_iterator - Executes an action on each element of an array.
 * @array: Specified array.
 * @size: Size of the array.
 * @action: Pointer to the callback function.
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
