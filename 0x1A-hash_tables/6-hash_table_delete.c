#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Delets a hash table.
 *
 * @ht: Pointer to hash table to be deleted.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *hn;

	for (index = 0; index < ht->size; index++)
	{
		hn = ht->array[index];
		while (hn)
		{
			ht->array[index] = ht->array[index]->next;
			free(hn->key);
			free(hn->value);
			free(hn);
			hn = ht->array[index];
		}
	}
	free(ht->array);
	free(ht);
}
