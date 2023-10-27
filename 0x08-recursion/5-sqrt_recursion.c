#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_check - Does binary search for square root
 * @n: Random number
 * @guess: Random number for iteration
 *
 * Return: Guess
 */
int _sqrt_check(int n, int guess)
{
	int guess_sq;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	guess_sq = guess * guess;
	if (guess_sq == n)
	{
		return (guess);
	}
	else if (guess_sq > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_check(n, guess + 1));
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
	return (_sqrt_check(n, 1));
}

