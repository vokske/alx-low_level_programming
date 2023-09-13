#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet_x10(void) - This is a description
 */
void print_alphabet_x10(void)
{
char letter;
int i = 0;

while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
