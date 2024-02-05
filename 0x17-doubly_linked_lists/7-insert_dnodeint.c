#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Node in the list
 * @idx: index of the list where the new node should be added
 * @n: Integer value of the node
 *
 * Return: the address of the new node. NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int counter = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		temp = *h;
		for (counter = 0; counter < idx - 1 && temp != NULL; counter++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}
	else
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
		}
	}
	return (new_node);
}
