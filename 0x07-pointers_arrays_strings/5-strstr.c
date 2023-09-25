#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: Random string
 * @needle: Substring
 *
 * Reurn: Pointer to the beginning of located substring. Null otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *needle)
		{
			continue;
		}
		h = haystack;
		n = needle;

		while (*h++ == *n++)
		{
			if (*n == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
