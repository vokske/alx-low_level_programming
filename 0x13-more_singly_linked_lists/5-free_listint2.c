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
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	temp = *head;

	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);
		*head = temp;
	}
	*head = NULL;
}
