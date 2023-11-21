#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at the beginning of list
 * @head: Node
 * @n: Integer
 *
 * Return: Address of new element. NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	
	if (head == NULL)
	{
		new_node = *head;
	}

	if (!new_node)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	
	return (new_node);
}
