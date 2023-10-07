#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to an allocated space in memory
 * @str: Random string
 *
 * Return: Pointer to the allocated space in memory
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup_str = malloc ((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
