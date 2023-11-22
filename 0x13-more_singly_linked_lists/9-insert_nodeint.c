#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at specified index
 * @head: Pointer to pointer of the head node of list
 * @idx: Location of the node to be inserted
 * @n: Data to be contained in the node (integer)
 *
 * Return: Address of the new node. NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		temp = temp->next;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
