#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9
 */
int x;
void print_numbers(void)
{
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
