#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - Returns the sum of the data (n) in the dlistint_t list
 * @head: Node in the list
 *
 * Return: Sum of n. 0 otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		counter++;
	}
	printf("%d\n", sum);
	return (sum);
}
