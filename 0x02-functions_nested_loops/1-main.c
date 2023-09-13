#include <stdio.h>
#include "main.h"

int _putchar(char c);
int main()
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
