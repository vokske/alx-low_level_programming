#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns number of elements in list
 * @h: Node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	printf("%d elements\n", counter);
	return (counter);
}
