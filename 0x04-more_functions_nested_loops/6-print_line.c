#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Parameter to be passed
 *
 */
void print_line(int n)
{
int i;

for (i = 0; i <= n; i++)
{
if (n <= 0)
{
_putchar('\\');
_putchar('n');
}
_putchar('_');
}
_putchar('\\');
_putchar('n');
}
