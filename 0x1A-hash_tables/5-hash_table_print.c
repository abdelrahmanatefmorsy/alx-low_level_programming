#include "hash_tables.h"
/**
 * hash_table_print- print hash
 * @ht: hash
 * Return: null
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	int is = 0;
	hash_node_t *tmp;

	if (!ht || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (is == 1)
				printf(", ");
			is = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
