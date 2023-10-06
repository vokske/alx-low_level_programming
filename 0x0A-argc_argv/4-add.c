#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entr point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0, number;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
