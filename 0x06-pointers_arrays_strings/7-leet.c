#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	char *orig = s;
	char leetmap[256] = {0};

	leetmap['a'] = leetmap['A'] = '4';
	leetmap['e'] = leetmap['E'] = '3';
	leetmap['o'] = leetmap['O'] = '0';
	leetmap['t'] = leetmap['T'] = '7';
	leetmap['l'] = leetmap['L'] = '1';

	while (*s)
	{
	if (leetmap[(unsigned char)*s])
	{
	*s = leetmap[(unsigned char)*s];
	}
	s++;
	}
	return (orig);
}
