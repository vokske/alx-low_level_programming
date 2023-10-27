#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char s1[] = "Lucas Poldi";
	char s2[] = "Luc** *oldi";

	wildcmp(s1, s2);
	return (0);
}
