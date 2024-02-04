#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: Node in the list
 * @index: Position of node in list
 *
 * Return: nth node in the list. NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < index && head != NULL; counter++)
	{
		head = head->next;
	}
	return (head);
}
