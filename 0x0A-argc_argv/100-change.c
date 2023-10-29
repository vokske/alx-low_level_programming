#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, cents, array_len, num_coins = 0;
	int denom[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	array_len = sizeof(denom) / sizeof(denom[0]);

	for (i = 0; i < array_len; i++)
	{
		num_coins = num_coins + (cents / denom[i]);
		cents = cents % denom[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
