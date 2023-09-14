#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *@c: Parameter to be passed
 *
 *Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
