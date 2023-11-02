#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments to a program
 * @ac: Argument counter
 * @av: Argument to the program
 *
 * Return: Pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *new_str;

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
		len++;
	}
	new_str = (char *) malloc((len + ac + 1) * sizeof(char));	
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k++] = av[i][j];
		}
		new_str[k++] = '\n';
	}
	new_str[k] = '\0';
	return (new_str);
}
