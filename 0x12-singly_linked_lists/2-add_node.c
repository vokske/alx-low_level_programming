#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_len - Calculates the length of string
 * @str: Random string
 *
 * Return: Lenght of string
 */
size_t str_len(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node - Adds a node at the beginning of list_t
 * @head: Node
 * @str: Random string
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
new_node->str = strdup(str);
if (new_node == NULL)
{
	return (NULL);
	free(new_node);
}
new_node->len = str_len(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
