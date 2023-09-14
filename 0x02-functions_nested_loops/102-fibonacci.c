#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int previous = 1;
long int current = 2;
int n = 50;
int i;
long next;

for (i = 0; i < n; i++)
{
if (i == 0)
{
next = 1;
}
else if (i == 1)
{
next = 2;
}
else
{
next = previous + current;
previous = current;
current = next;
}
printf("%ld", next);
if (i < n - 1)
{
printf(", ");
}
else
{
printf("\n");
}
}
return (0);
}
