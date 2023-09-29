#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Pring a string in reverse
 * @s: Random string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
