#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in the list
 * @h: Node
 *
 * Return: Number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
