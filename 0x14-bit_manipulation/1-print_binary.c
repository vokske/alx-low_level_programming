#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer
 * @n: Integer to be converted to binary
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int current, i;

	if(n == 0)
	{
		_putchar('0');
		return;
	}

	current = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{

		if ((n & (1UL << i)) != 0)
		{
			current = 1;
		}
		if (current)
		{
			if (n & (1UL << i))
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
