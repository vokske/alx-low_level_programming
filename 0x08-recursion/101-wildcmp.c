#include "main.h"
#include <stdio.h>

/**
 * calc_len - Calculates the length of a string
 * @s: Random string
 * @i: Index or counter
 *
 * Return: Length of a string
 */
int calc_len(char *s, int i)
{
	if (*s == '\0')
	{
		return (i);
	}
	return (calc_len(s, i + 1));
}
/**
 * wildcmp - Checks if strings are identical
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if strings are identical. 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
