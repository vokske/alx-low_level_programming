#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: Random integer
 *
 * Return: Factorial of the given integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
