#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - This  is a description
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	putchar('\n');
}
