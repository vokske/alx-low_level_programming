#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: Pointer to the first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head);

		head = temp;
	}
}
