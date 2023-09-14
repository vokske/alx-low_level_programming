#include "main.h"

void times_table(void)
{
int i;
int j;

for (i = 0; i <=9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar((i + '0'));
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar((j + '0'));
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar(((i * j) / 10) + '0');
_putchar(((i * j) % 10) + '0');
}
_putchar('\n');
}
}
