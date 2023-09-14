#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: Parameter to be passed
 *
 * Return: 1 if c is a digit. 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
