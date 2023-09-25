#include "main.h"
#include <stddef.h>

/**
 * _memset - fills a memory with a constant byte
 * @s: Random string
 * @b: Constant byte
 * @n: Number of bytes
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
