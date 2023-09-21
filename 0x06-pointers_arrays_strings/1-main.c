#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char src[] = "Troll";
	char dest[50] = "Football";
	int n = 4;

	_strncat(dest, src, n);
	_putchar('\n');
	return (0);
}
