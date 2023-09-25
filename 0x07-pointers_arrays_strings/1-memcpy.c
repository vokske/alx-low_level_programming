#include "main.h"
#include <stddef.h>

/**
 * _memcpy - Copies memory area
 * @src: One memory area
 * @dest: Another memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	const char *s = src;
	char *d = dest;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
