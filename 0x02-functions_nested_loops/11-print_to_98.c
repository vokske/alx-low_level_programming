#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @n: Integer to be passed
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
printf(", ");
}
}
}
printf("\n");
}
