#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to append to
 * @src: String to be appended
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *p = dest;

    while (*p != '\0')
    {
    p++;
    }
    while (*src != '\0')
    {
    *p++ = *src++;
    }
    *p = '\0';
    return dest;
}
