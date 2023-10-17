#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * my_strlen - Calculates string length
 * @s: Random string
 *
 * Return: String length
 */
int my_strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * my_strcpy - Copies string
 * @dest: String to which original string will be copied
 * @src: String to copy
 * @n: Counter
 *
 * Return: Neww string
 */
char *my_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
/**
 * strtow - Converts string to words
 * @str: Random string
 *
 * Return: Words
 */
char **strtow(char *str)
{
	int count = 0, start = 0, end = 0, word_index = 0, word_length, i;
	char **words;

	if (str == NULL || my_strlen(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	words = malloc((count + 2) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	while (str[end])
	{
		if (str[end] == ' ' || str[end + 1] == '\0')
		{
			word_length = end - start + 1;
			words[word_index] = malloc(word_length * sizeof(char));
			if (words[word_index] == NULL)
			{
				return (NULL);
			}
		my_strcpy(words[word_index], &str[start], word_length - 1);
		words[word_index][word_length - 1] = '\0';
		word_index++;
		start = end + 1;
		}
		end++;
	}
	words[word_index] = NULL;
	return (words);
}
