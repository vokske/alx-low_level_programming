#include "main.h"
#include <stdio.h>

/**
 * divisibility - Checks for the number of divisors
 * @n: Random number
 * @i: Divisors of n
 *
 * Return: Number of divisors
 */
int divisibility(int n, int i)
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
		return (divisibility(n, i - 1));
	}
}
/**
 * is_prime_number - Checks for prime number
 * @n: Random number
 *
 * Return: 1 if n is prime number. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (divisibility(n, n / 2));
}
