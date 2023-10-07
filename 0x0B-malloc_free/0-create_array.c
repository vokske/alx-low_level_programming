#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of array
 * @c: Random character
 *
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
