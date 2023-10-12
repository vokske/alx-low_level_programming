#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char *s1 = "Hey ";
	char *s2 = "there";
	char *result = str_concat(s1, s2);

	free (result);
	return (0);
}
