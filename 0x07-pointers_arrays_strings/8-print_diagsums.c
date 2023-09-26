#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Random array
 * @size: Size of the array
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1 = 0;
	int diag_sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag_sum1 += a[i * size + 1];
		diag_sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
