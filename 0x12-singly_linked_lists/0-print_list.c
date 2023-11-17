#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of list_t
 * @h: node
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
