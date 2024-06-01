#include "main.h"

/**
 * get_endianness - Checks the endianness of system
 *
 * Return: 0 if big endian and 1 if small endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	if (*ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
