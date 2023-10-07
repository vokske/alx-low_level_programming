#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char *str = "Hey there!";

	char *dup_str = _strdup(str);
	if (dup_str == NULL)
	{
		return (1);
	}
	free (dup_str);
	return (0);
}
