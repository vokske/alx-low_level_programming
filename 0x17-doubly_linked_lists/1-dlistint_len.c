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
	const dlistint_t *head = h;
	size_t counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		head = head->next;
		counter++;
	}
	return (counter);
}
