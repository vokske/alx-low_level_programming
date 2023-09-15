#include "main.h"

/**
 * print_square - Prints a square
 * @n: Parameter to be passed
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for(j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
