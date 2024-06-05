#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes node a specified index
 * @head: Pointer to the pointer of the beginning of list
 * @index: Position where node will be deleted
 *
 * Return: 1 if successful or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; (temp != NULL && i < index); i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
