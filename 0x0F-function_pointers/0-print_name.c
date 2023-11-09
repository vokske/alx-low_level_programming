#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

void print_my_name(char *name)
{
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
