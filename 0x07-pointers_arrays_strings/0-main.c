#include "main.h"
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char str[50] = "C Pointers are absolutely boring!";
	_memset(str, '*', 5);
	return (0);
}
