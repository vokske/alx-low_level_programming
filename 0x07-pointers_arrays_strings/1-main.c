#include "main.h"
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char src[50] = "Still C pointers!";
	char dest[50];
	_memcpy(dest, src, 17);
	return (0);
}
