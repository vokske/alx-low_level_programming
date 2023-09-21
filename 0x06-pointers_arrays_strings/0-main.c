#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char dest[50] = "market";
	char src[] = "Toy";	
	
	_strcat(dest, src);
	printf("%s", dest);
	printf("\n");
	return (0);
}
