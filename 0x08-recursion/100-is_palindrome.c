#include <stdio.h>
#include "main.h"

/**
 * str_len - Calculates the length of a string
 * @s: Random string
 * @i: Index or counter
 *
 * Return: Length of a string
 */
int str_len(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	return (str_len(s, i + 1));
}

/**
 * palindrome_helper - Checks if charactes in a strings are equal
 * @s: Random string
 * @start: First character of string
 * @end: Last character of a string
 *
 * Return: 1 if string is a palindrome. 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Calculates value of string and calls palindrome_helper
 * @s: Random string
 *
 * Return: 1 if string is a palindrome. 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = str_len(s, 0);

	return (palindrome_helper(s, 0, len - 1));
}
