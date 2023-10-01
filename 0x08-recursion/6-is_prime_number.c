#include <stdio.h>
#include "main.h"

/**
 * is_divisible - Checks if number is divisible by any number from (n/2) to 1
 * @n: Random number
 * @i: Counter
 *
 * Return: 0 if there's a divisor. 1 otherwise
 */
int is_divisible(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_divisible(n, i - 1));
	}
}
/**
 * is_prime_number - Checks if integer is a prime number
 *@n: Random integer
 *
 * Return: i if integer is a prime number. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0 && n > 2)
	{
		return (0);
	}
	return (is_divisible(n, n / 2));
}


