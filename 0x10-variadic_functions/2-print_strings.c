#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_strings - Prints strings
 * @separator - Coma
 * @n: Number of parameters
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j = 0;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		while (*str)
		{
			_putchar(*str++);
		}
		if (i < n - 1 && separator != NULL)
		{
			while (separator[j])
			{
				_putchar(separator[j++]);
			}
		}
	}
	va_end(args);
	_putchar('\n');
}
