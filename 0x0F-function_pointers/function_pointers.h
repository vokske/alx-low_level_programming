#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void _putchar(char c);
void f(char *s);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_element(int element);
#endif
