#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter_lower = 'a';

	while (letter_lower <= 'z')
	{
		if (letter_lower != 'e' && letter_lower != 'q')
		{
		putchar(letter_lower);
		}
		letter_lower++;
	}
	putchar('\n');
	return (0);
}
