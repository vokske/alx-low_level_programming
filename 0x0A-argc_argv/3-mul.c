#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Arguments to a program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int product, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = atoi(argv[1]) * atoi(argv[2]);
		}
	}
	printf("%d\n", product);
	return (0);
}
