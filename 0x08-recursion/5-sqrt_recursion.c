#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_check - Does binary search for square root
 * @n: Random number
 * @min: Smallest number in our range
 * @max: Largest number in our range
 *
 * Return: Guess
 */
int _sqrt_check(int n, int min, int max)
{
	int guess;

	if (max < min)
	{
		return (-1);
	}
	guess = (min + max) / 2;
	if ((guess * guess) == n)
	{
		return (guess);
	}
	else if ((guess * guess) < n)
	{
		return (_sqrt_check(n, guess + 1, max));
	}
	else
	{
		return (_sqrt_check(n, min, guess - 1));
	}
}
/**
 * _sqrt_recursion - Finds natural square root of a number
 * @n: Random number
 *
 * Return: Square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1, n));
}

