#include "main.h"

void rev_string(char *s)
{
while (*s)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
