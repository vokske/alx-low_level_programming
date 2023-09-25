#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Random string
 * @accept: Another string
 *
 * Return: Pointer to the byte in s matching bytes in accept. NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	char *p, *a;
	
	for (p = s; *p != '\0'; ++p)
	{
		for (a = accept; *a != '\0'; ++a)
		{
			if (*p == *a)
			{
				return (p);
			}
		}
	}
	return (NULL);
}
