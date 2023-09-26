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
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11,12},
		{13, 14, 15, 16}
	};
	int size = 4;

	print_diagsums((int *)matrix, size);
	return (0);
}
