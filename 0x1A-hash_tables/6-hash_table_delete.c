#include "hash_tables.h"

/**
 * hash_table_delete - del  hash
 * @ht: hash
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}

