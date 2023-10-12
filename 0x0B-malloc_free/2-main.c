#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	char *s1 = "Hey ";
	char *s2 = "there";
	char *new_str = str_concat(s1, s2);
	
	if (new_str)
	{
		printf("%s\n", new_str);
		free (new_str);
	}
	return (0);
}
