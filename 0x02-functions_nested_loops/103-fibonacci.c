#include "main.h"

int main()
{
int a = 1;
int b = 2;
long int n;
long int sum;

_putchar(a + '0');
_putchar(',');
_putchar(' ');
_putchar(b + '0');
n = a + b;
a = b;
b = n;

while ( n < 4000000)
{
return (n);
if (n % 2 == 0)
{
sum += n;
}
}
_putchar(sum + '0');
return (0);
}
