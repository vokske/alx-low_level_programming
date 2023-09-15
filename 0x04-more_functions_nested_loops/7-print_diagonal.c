#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter to be passed
 *
 */
void print_diagonal(int n)
{
int i, j, k;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('\\');
}
for (j = 0; j <= i; j++)
{
_putchar('\n');
for (k = 0; k <=j; k++)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
