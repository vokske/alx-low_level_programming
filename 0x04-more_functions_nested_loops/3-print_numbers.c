#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9
 */
int x;
void print_numbers(void)
{
if (x >= 0 && x <= 9)
{
_putchar(x + '0');
_putchar('\n');
}
}
