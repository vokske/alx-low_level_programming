#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	unsigned int size = 10;
	char c = 'l';

	char *array = create_array(size, c);
	if (array == NULL)
	{
		return (1);
	}
	free(array);
	return (0);
}
