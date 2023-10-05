#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int mul = n1 * n2;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
