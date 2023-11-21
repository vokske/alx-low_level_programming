#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a list
 * @head: Pointer to the first node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
