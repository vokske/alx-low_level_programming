#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head - Pointer to the head node of the list
 *
 * Return: Head node's data (Integer)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	
	temp = *head;
	n = (*head)->n;
	*head = temp->next;
	temp->next = NULL;
	free(temp);

	return (n);
}
