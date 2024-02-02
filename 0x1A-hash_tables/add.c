#include "hash_tables.h"
/**
 *add - added  node
 *@ht : hash table
 *@key : key of node
 *@value : new value will added
 *@index: index
 *Return: 1 or 0
 */
int add(hash_table_t *ht, const char *key,
		const char *value, unsigned int index)
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
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
