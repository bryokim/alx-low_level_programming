#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table of size.
 *
 * @size: Size of the new hash table.
 *
 * Return: Newly created hash table, or NULL incase of failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
