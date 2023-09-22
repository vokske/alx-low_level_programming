#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: Random string
 *
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int capitalize = 1;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
	{
	capitalize = 1;
	}
	else if (capitalize && ((s[i] >= 'a' && s[i] <= 'z')))
	{
	s[i] -= ('a' - 'A');
	capitalize = 0;
	}
	else
	{
	capitalize = 0;
	}
	i++;
	}
	return (s);
}
