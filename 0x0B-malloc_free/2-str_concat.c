#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Calculate the length of strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Length of string
 */
int str_len(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * str_cpy - Copies string to a new memory location
 * @src: Original string
 * @dest: String in new memory location
 *
 * Return: Nothing
 */
void str_cpy(char *src, char *dest)
{
	int i = 0;

	if (src == NULL)
	{
		dest[0] = '\0';
		return;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return:Concatenated string. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *new_str;

	len1 = str_len(s1);
	len2 = str_len(s2);
	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	str_cpy(s1, new_str);
	str_cpy(s2, new_str + len1);
	return (new_str);
}
