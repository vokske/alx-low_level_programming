#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns node at nth index
 * @head: Pointer to the head node of the list
 * @index: Position of the node
 *
 * Return: Node at nth index. NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

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
