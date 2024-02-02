#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: size of hash table
 * Return: hash table that will create
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
		return (NULL);
	create->size = size;
	for (i = 0; i < size; i++)
	{
		create->array[i] = NULL;
	}
	return (create);
}
