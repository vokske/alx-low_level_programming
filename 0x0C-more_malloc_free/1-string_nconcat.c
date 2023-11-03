#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings (with specified bytes of s2)
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to be copied
 *
 * Return: The concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (!new_str)
	{
		return (NULL);
	}
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
