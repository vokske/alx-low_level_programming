#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Calculate the length of the string
 * @str: Random string
 *
 * Return: Length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * str_cpy - Copies string to new memory location
 * @src: Original string
 * @dest: New string
 *
 * Return: New string
 */
void str_cpy(char *src, char *dest)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
/**
 * _strdup - Creates a duplicate string
 * @str: Random string
 *
 * Return: Pointer to duplicated string. NULL if unsuccessful
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = (char *) malloc((str_len(str) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	str_cpy(str, new_str);
	return (new_str);
}
