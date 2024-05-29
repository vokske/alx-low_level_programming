#include "function_pointers.h"
#include <stdio.h>

void f(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

void print_name(char *name, void (*f)(char *))
{

	f(name);
}
