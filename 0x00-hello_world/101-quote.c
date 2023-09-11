#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
	putchar(x[i]);
	}
	putchar('\n');
	return (1);
}
