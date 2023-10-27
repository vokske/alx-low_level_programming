#include "main.h"
#include <stdio.h>

/**
 * get_len - Calculate string length
 * @s: Random string
 * @index: Position of charcater in string
 *
 * Return: Index
 */
int get_len(char *s, int index)
{
	if (s[index] == '\0')
	{
		return (index);
	}
	else
	{
		return (get_len(s, index + 1));
	}
}
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
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_checker(s, start + 1, end - 1));
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
	int length = get_len(s, 0);
	
	return (palindrome_checker(s, 0, length - 1));
}
