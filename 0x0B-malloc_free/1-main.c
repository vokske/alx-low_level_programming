#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char *str = "First, solve the problem. Then, write the code.";

	char *dup_str = _strdup(str);
	if (dup_str == NULL)
	{
		return (1);
	}
	free (dup_str);
	return (0);
}
