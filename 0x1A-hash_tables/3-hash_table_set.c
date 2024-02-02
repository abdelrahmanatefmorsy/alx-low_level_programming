#include "hash_tables.h"

/**
 * hash_table_set - function that set element and key in hash table
 * @ht: hash table that created
 * @key : key of value
 * @value : value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	int new;
	unsigned int size, index;


	size = ht->size;
	if (!size || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, size);
	if (!index)
		return (0);
	current = malloc(sizeof(hash_node_t *));
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = malloc(strlen(value) + 1);
			if (current->value == NULL)
				return (0);
			current->value = strdup(value);
			if (!current->value)
			{
				free(current->value);
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new = add(ht, key, value, index);
	return (new);
}

/**
 * add- added node
 * @ht: hash table
 * @key : key of node
 * @value : new value will added
 * @index: the index
 * Return: 1 or 0
 */
int add(hash_table_t *ht, const char *key, const char *value,
		unsigned int index)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);
	node->value  = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->value), free(node);
		return (0);
	}
	node->next = ht->array[index], ht->array[index] = node;
	return (1);
}
