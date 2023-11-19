#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @head: Node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
