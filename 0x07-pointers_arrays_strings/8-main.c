#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	int matrix[4][4]= {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int size = 3;

	print_diagsums((int *)matrix, size);
	return (0);
}
