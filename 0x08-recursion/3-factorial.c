#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * factorial - Calculates factorial of a number
 * @n: Random number
 *
 * Return: Facorial of the given number
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
	else
	{
		return (n * factorial(n - 1));
	}
}
