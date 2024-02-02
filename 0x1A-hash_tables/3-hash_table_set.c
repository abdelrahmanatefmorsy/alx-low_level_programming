#include "hash_tables.h"

/**
 * hash_table_set - function that set element and key in hash table
 * @ht: hash table that created
 * @key : key of value
 * @value : value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *last, *current;
	unsigned int size, index;


	size = ht->size;
	if(!size || !key || !value)
		return (0);
	index = key_index(key, size);
	if(!index)
		return (0);
	current = malloc(sizeof(hash_node_t *));
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = malloc(strlen(value)+1);
			if (current->value == NULL)
				return (0);
			curren->value = strdup(value);
			if (!current->value)
			{
				free(current->value);
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new = add(*ht, key, value);
	return (new);
}
