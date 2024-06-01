#include "main.h"

/**
 * flip_bits - Checks and returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need flipping
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}
	return (count);
}
