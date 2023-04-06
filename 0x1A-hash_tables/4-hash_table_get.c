#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Hash table you want to look into.
 * @key: Key you are looking for.
 *
 * Return: Value associated with the element, or NULL if key
 * couldn't be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hn;

	if (!ht || !ht->array || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	hn = ht->array[index];

	while (hn)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
		hn = hn->next;
	}
	return (NULL);
}
