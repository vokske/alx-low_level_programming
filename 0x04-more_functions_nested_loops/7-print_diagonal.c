#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter to be passed
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
