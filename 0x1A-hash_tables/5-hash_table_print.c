#include <stdio.h>
#include "hash_tables.h"

/**
 * check_end - check whether it's the end of the table array.
 *
 * @ht: Hash table.
 * @index: Current index of the hash table array.
 *
 * Return: 1 if there are other elements,
 * 0 if if there are no elements.
*/
int check_end(const hash_table_t *ht, unsigned long int index)
{
	while (++index < ht->size)
	{
		if (ht->array[index])
			return (1);
	}
	return (0);
}


/**
 * hash_table_print_index - Print all key/value pairs at a certain index.
 *
 * @ht: Hash table.
 * @index: Index of the hash array to print.
 *
 * Return: void.
*/
void hash_table_print_index(const hash_table_t *ht, unsigned long int index)
{
	hash_node_t *hn;

	hn = ht->array[index];
	while (hn)
	{
		printf("'%s': '%s'", hn->key, hn->value);
		if (hn->next || check_end(ht, index))
			printf("%s", ", ");
		hn = hn->next;
	}
}


/**
 * hash_table_print - Prints the hash table.
 *
 * @ht: Hash table.
 *
 * Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	if (!ht || !ht->array)
	{
		puts("{}");
		return;
	}

	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
			hash_table_print_index(ht, index);
	}

	puts("}");
}
