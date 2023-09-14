#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: Integer to be passed
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i;
int j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;

if (j > 0)
{
printf(", ");
}
/*if (product < 10)
{
printf(" ");
}*/
printf("%d", product);
}
printf("\n");
}
}
}
