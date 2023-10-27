#include "main.h"
#include <stdio.h>

/**
 * palindrome_checker - Checks every character of a string
 * @s: random string
 * @start: First position of string
 * @end: Last position of string
 *
 * Return: 1 if palindrome, 0 if not. Otherwise return the function recursively
 */
int palindrome_checker(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_checker (s, start + 1, end - 1));
	}
}
/**
 * is_palindrome - Checks for palindrome
 * @s: Random string
 *
 * Return: 1 if string is palindrome. 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (palindrome_checker(s, 0, length - 1));
}
