#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char *s1 = "Test";
	char *s2 = "String!";
	unsigned int n = 5;
	char *new_str = string_nconcat(s1, s2, n);

	if (new_str)
	{
		printf("%s\n", new_str);
		free(new_str);
	}
	else
	{
		printf("Failed to conatenate strings\n");
	}
	return (0);
}
