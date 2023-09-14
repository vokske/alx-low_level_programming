#include "main.h"

/**
 * times_table - Prints the 9s table
 */

void times_table(void)
{
int i;
int j;
int n;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
n = i * j;
if (n >= 10)
{
_putchar((n / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((n % 10) + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
