#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to be checked
 *
 * Return: The last digit of the number
 */
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
