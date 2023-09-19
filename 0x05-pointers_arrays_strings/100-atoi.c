#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Random string
 *
 * Return: 0 if there are no numbers in string
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s) 
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
break;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return sign * result;
}
