#include "main.h"

/**
 * _strcpy - Copies a string to memory
 * @dest: Memory address
 * @scr: Another memory location
 *
 * Return: Value of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *orig_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (orig_dest);
}
