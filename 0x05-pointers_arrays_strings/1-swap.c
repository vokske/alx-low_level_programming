#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: First operand
 * @b: Second operand
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
