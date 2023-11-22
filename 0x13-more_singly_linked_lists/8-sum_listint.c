#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Returns sum of all data in the list (integers)
 * @head: Pointer to the head node of the list
 *
 * Return: Sum of n. 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0, counter = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL )
	{
		sum += head->n;
		head = head->next;
		counter++;
	}
	return (sum);
}
