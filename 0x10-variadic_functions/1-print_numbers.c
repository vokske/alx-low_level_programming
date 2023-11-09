#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: Character to separate numbers
 * @n: Parameters
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;
	int digit;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i > 0 && separator != NULL)
		{
			while (*separator)
			{
				_putchar(*separator++);
			}
		}
		if (num == 0)
		{
			_putchar('0');
		}
		else if (num < 0)
		{
			_putchar('-');
			num *= -1;
		}
		while (num > 0)
		{
			digit = num % 10;
			_putchar(digit + '0');
			num /= 10;
		}
	}
	va_end(args);
	_putchar('\n');
}
