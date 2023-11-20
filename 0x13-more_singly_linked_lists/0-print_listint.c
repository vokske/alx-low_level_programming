#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	printf("%d elements\n", counter);
	return (counter);
}
