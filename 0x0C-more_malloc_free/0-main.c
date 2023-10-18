#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int num = 10;
	void *ptr = malloc_checked(num * sizeof(unsigned int));

	free(ptr);
	return (0);
}
