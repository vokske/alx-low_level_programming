#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/** main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int *array;
	array = malloc(sizeof(int) * 2);
	array[0] = 45;
	array[1] = 132;
	array = _realloc(array, sizeof(int) * 2, sizeof(int) * 3);
	return (0);
}
