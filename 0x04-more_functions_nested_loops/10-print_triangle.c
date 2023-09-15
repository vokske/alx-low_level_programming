#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Parameter to be passed
 */
void print_triangle(int size)
{
int i, j, space;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size ; i++)
{
for (space = size - i; space > 0; space--)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
