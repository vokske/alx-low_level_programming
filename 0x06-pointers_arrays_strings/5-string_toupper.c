#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * 
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
	ptr++;
	}
	return (s);
}
