#include "main.h"
#include <stdio.h>

/**
 * print-array - Print n elements in an array
 * @a: Random array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n-1)
{
printf(", ");
}
}
printf("\n");
}
