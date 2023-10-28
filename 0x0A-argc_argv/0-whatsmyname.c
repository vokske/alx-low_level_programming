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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
