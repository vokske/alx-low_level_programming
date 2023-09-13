#include "main.h"

int print_last_digit(int n)
{
int m = n % 10;

if (m < 0)
{
m = -m;
}
_putchar(m + '0');
return (m);
}
