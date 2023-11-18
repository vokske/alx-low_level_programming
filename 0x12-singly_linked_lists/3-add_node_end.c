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
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Address of the new element. NULL otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
		free(new_node);
	}
	new_node->len = str_len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
			last_node-> = new_node;
		}
		return (new_node);
	}
}
