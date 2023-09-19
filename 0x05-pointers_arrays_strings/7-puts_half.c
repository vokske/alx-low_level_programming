#include "main.h"

void puts_half(char *str)
{
int len = 0, i, mid;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
mid = len / 2;
}
else
{
mid = ((len - 1) / 2);
}
for (i = mid; i <= len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
