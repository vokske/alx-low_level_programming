#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @xx: The string to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0;)
}
