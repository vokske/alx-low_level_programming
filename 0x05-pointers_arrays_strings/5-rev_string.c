#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Random string
 */
void rev_string(char *s)
{
int len = 0, i;

while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
