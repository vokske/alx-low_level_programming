#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Returns the number of elements linked in a list
 * @h: node
 *
 * Return: Integer
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
