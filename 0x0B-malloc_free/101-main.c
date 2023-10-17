#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	char *str = "Here we go!";
	char **words = strtow(str);
	int i;

	if (words == NULL)
	{
		printf("Failed to split strings to words. \n");
		return (1);
	}
	for (i = 0; words[i] != NULL; i++)
	{
		printf("Word %d: %s\n", i + 1, words[i]);
		free(words[i]);
	}
	free(words);
	return (0);
}
