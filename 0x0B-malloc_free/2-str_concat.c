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
	int len1, len2;
	char *new_str;

	for (len1 = 0; s1 && s1[len1]; len1++);
	for (len2 = 0; s2 && s2[len2]; len2++);
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
	{
		return (NULL);
	}
	for (len1 = 0; s1 && s1[len1]; len1++)
	{

		new_str[len1] = s1[len1];
	}
	for (len2 = 0; s2 && s2[len2]; len2++)
	{
		new_str[len1 + len2] = s2[len2];
		new_str[len1 + len2] = '\0';
	}
	return (new_str);
}
