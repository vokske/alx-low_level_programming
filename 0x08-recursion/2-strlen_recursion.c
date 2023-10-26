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
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = _strlen_recursion(s + 1);
	}
	return (len);
}
