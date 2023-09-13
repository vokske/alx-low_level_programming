#include <stdio.h>
#include "main.h"

int _putchar(char c);
void print_alphabet()
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
