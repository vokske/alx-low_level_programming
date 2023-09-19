#include "main.h"

void puts_half(char *str)
{
int len = 0, i, mid;

while (str[len] != '\0')
{
len++;
}
mid = len % 2 == 0 ? len / 2 : (len + 1) / 2;
for (i = mid; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
