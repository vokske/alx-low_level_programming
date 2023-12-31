#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: Random string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
