#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - Checks if a number is larger, equal to, or smaller than i*i
 * @n: Random integer
 * @i: Counter
 *
 * Return: -1 if i*i is less than n, i if equal to n. Otherwise call itself
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Random integer
 *
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
