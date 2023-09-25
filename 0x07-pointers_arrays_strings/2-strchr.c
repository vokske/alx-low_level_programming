#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Random string
 * @c: Character in the string
 *
 * Return: Pointer to the first occurrence of desired character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
