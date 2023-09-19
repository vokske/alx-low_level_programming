#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
char s[24] = "This is a longer string";

_putchar(s[24]);
rev_string(s);
_putchar('\n');
return (0);
}
