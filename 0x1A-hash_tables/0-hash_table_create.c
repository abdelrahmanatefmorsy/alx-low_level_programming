#include "hash_tables.h"
/**
 * hash_table_create- function that make hash
 * @size: size of hash table
 * Return: array of linked list
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create;
	unsigned int i;

	create = malloc(sizeof(hash_table_t));
	if (!create)
		return (NULL);
	create->array = malloc(sizeof(hash_node_t *) * size);
	if (!create->array)
	{
		return (NULL);
	}
	create->size = size;
	for (i = 0; i < size; i++)
	{
		create->array[i] = NULL;
	}
	return (create);
}
