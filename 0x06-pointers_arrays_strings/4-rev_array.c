#include "main.h"

/**
 * reverse_array - Reverses the contents of an array
 *
 * @a: Random array
 * @n: Number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int temp;

	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		first++;
		last--;
	}
}
