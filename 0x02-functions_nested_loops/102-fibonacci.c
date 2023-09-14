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

printf("%ld, %ld, ", previous, current);
for (i = 0; i < 50; i++)
{
long int next = previous + current;
previous = current;
current = next;
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
