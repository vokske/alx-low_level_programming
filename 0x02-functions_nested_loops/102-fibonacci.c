#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int previous = 1;
int current = 2;

printf("%d, %d, ", previous, current);
while (current <= 50 )
{
int next = previous + current;
if (next <= 50)
{
printf("%d, ", next);
}
previous = current;
current = next;
}
printf("\n");
return (0);
}
