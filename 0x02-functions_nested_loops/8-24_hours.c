#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
int h;
int m;

for ( h = 0; h <= 23; h++)
{
for (m = 0; m < 60; m++)
{
_putchar('0' + (h / 10));
_putchar('0' + (h & 10));
_putchar(':');
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
_putchar('\n');
}
}
}
