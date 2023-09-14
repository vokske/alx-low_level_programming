#include "main.h"

void times_table(void)
{
int i;
int j;
int n;

for (i = 0; i <=9; i++)
{
for (j = 0; j <= 9; j++)
{
n = i * j;
if (n > 9)
{
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
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
