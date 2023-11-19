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
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
