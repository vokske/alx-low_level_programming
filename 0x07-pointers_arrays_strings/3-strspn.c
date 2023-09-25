#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Random string
 * @accept: Another random string
 *
 * Return: Number of bytes in the initial segment of a string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p, *a;

	for (p = s; *p != '\0';++p)
	{
		for (a = accept; *a != '\0'; ++a)
		{
			if (*p == *a)
			{
				break;
			}
		
		}
		if (*a == '\0')
		{
			return (count);
		}
		else
		{
			++count;
		}
	}
	return (count);
}
