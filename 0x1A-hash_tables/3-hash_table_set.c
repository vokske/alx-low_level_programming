#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Pointer to the hash table
 * @key: Pointer to the key
 * @value: Pointer to the value of the corresponding key
 *
 * Return: 1 for success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
