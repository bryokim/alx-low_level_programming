#include "hash_tables.h"

/**
 * key_index - Returns index of a key.
 *
 * @key: The key.
 * @size: Size of the array of the hash table.
 *
 * Return: Index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
