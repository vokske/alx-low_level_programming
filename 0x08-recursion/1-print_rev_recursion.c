#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Random string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
