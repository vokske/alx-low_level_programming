#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at certain index in a list
 * @head: Pointer to a pointer of the first node of list
 * @index: Location of the node to be deleted
 *
 * Return: 1 if successful. -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node_del;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	node_del = NULL;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	node_del = temp->next->next;
	free(temp->next);
	temp->next = node_del;
	return (1);
}
