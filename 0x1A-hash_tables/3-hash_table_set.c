#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * hash_node_create - create a new hash node.
 *
 * @key: Key of the new hash node.
 * @value: Value of th new hash node.
 *
 * Return: New hash node, or NUL on failure.
*/
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));

	if (!hash_node)
		return (NULL);

	hash_node->key = strdup(key);
	if (!hash_node->key)
		return (NULL);

	hash_node->value = strdup(value);
	if (!hash_node->value)
		return (NULL);

	return (hash_node);
}

/**
 * replace_value - replace value of a key if it is present.
 *
 * @hn: Hash node at the current index.
 * @key: Key being looked for.
 * @value: Value to replace current value.
 *
 * Return: 1 if key is found and its value replaced, or
 * 0 if key not found, or -1 if strdup fails.
*/
int replace_value(hash_node_t *hn, const char *key, const char *value)
{
	while (hn)
	{
		if (strcmp(key, hn->key) == 0)
		{
			free(hn->value);
			hn->value = strdup(value);
			if (!hn->value)
				return (-1);
			return (1);
		}
		hn = hn->next;
	}
	return (0);
}

/**
 * hash_table_set - Adds a elemet to the hash table.
 *
 * @ht: Hash table you want to add or update the key/value to.
 * @key: Key, can not be an empty string.
 * @value: Value associated with the key.
 *
 * Return: 1 if succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int i;
	hash_node_t *new_node;

	if (strcmp(key, "") == 0 || !key || !ht || !ht->array)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	i = replace_value(ht->array[index], key, value);
	if (i == 1)
		return (1);
	else if (i == -1)
		return (0);

	new_node = hash_node_create(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index] ? ht->array[index] : NULL;

	ht->array[index] = new_node;

	return (1);
}
