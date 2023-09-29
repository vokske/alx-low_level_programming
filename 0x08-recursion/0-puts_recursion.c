#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: Random character in a string
 *
 * Return: Desired string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
}
