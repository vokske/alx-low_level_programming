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
	unsigned int nmemb = 5;
	unsigned int size = sizeof(int);
	unsigned int i;
	int *arr = _calloc(nmemb, size);

	if (arr)
	{
		for (i = 0; i < nmemb; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		free(arr);
	}
	else
	{
		printf("Failed to allocate memory\n");
	}
	return (0);
}
