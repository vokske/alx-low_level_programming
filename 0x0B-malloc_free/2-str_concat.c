#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concaetenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *new_str;

	while (s1 && s1[i])
	{
		i++;
	}
	while (s2 && s2[j])
	{
		j++;
	}
	new_str = malloc(sizeof(char) * (i + j + 1));
	if (!new_str)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		new_str[k] = s1 ? s1[k] : '\0';
	}
	for (k = 0; k < j; k++)
	{
		new_str[i + k] = s2 ? s2[k] : '\0';
	}
	new_str[i + j] = '\0';
	return (new_str);
}
