#include "hash_tables.h"

/**
 * hash_table_get- get func
 * @ht: hash table
 * @key: key
 * Return: int
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;

	unsigned int  index;

	if (!ht || !key || !ht->size ||
	 ht->array == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current  = current->next;
	}
	return (NULL);
}
