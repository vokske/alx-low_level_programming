#include "main.h"

/**
 * get_bit - Checks and returns the value of a bit at a given index
 * @n: Specified long integer
 * @index: Position of the bit whose value is to checked
 *
 * Return: Value of the bit and index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	shifted = n >> index;

	if (shifted & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
