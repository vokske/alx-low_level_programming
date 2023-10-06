#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	size_t i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < (sizeof(denominations) / sizeof(int)); i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
