#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head = NULL;

	add_node_end(&head, "Hola");
	add_node_end(&head, "Muchacho");

	print_list(head);
	free(print_list(head));
	return (0);
}
