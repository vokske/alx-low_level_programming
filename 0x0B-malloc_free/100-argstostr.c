#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments
 * @ac: Argument counter
 * @av: Argument vector
 *
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
