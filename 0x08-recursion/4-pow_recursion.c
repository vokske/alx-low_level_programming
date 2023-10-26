#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _pow_recursion - Evaluates x raised to the power of y
 * @x:Base number
 * @y: Power
 *
 * Return: Value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
