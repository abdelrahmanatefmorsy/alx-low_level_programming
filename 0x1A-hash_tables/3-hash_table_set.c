#include "hash_tables.h"
/**
 * hash_table_set -  set func
 * @ht: hashtable struct
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;

	unsigned int long index;

	if (!key || !value || !ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = malloc(sizeof(char) * strlen(value) + 1);
			if (current->value == NULL)
				return (0);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->value  = strdup(value);
	if (!node->value)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node->value), free(node);
		return (0);
	}
	return (1);
}
