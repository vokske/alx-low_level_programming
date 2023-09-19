#include "main.h"

void puts2(char *str)
{
int len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
