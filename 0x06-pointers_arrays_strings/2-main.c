#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char src[] = "Yeah!";
	char dest[50] = "True";
	int n = 3;

	_strncpy(dest, src, n);
	return (*dest);	
}
