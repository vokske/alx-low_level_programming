#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_dlistint - print all elements of the dlistint_t list
 * @h: Node in the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
return counter;
}
