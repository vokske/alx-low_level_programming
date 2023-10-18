#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Random integer
 *
 * Return - Nothing
 */
void *malloc_checked(unsigned int b)
{
	void* ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		exit (98);
	}
	return (ptr);
}
