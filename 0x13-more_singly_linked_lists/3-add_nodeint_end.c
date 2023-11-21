#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the end of list
 * @head: Pointer to the head of the node
 * @n: Element to be added to new node
 *
 * Return: Adrress of the new element. NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
