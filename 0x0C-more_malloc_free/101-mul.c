#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks for integers
 * @s: Random integer
 *
 * Return: 0 if integer. 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while(s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long num1, num2;
	long result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%ld\n", result);
	return (0);
}
