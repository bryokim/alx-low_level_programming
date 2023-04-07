#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - create a new shash_table_t hash table.
 *
 * @size: Size of the associative array.
 *
 * Return: A new hash table, or NULL if malloc fails.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash_table = malloc(sizeof(shash_table_t));

	if (!shash_table)
		return (NULL);

	shash_table->array = calloc(size, sizeof(shash_node_t *));
	if (!shash_table->array)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
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
int replace_value(shash_node_t *hn, const char *key, const char *value)
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
 * shash_node_create - create a new shash node.
 *
 * @key: Key of the new shash node.
 * @value: Value of th new shash node.
 *
 * Return: New hash node, or NUL on failure.
*/
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *hash_node = malloc(sizeof(shash_node_t));

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
 * set_sprev_snext - set the snext and sprev nodes of the new node.
 *
 * @ht: Pointer to the hash table.
 * @new_node: Pointer to the new node.
*/
void set_sprev_snext(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *hn, *prev;

	if (!ht->shead)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}
	hn = ht->shead;
	while (hn)
	{
		prev = hn;
		if (strcmp(hn->key, new_node->key) > 0)
		{
			if (hn->sprev)
				hn->sprev->snext = new_node;
			new_node->sprev = hn->sprev;
			new_node->snext = hn;
			hn->sprev = new_node;
			break;
		}
		hn = hn->snext;
	}
	if (!hn)
	{
		new_node->snext = NULL;
		new_node->sprev = prev;
		prev->snext = new_node;
	}

	if (!new_node->sprev)
		ht->shead = new_node;
	if (!new_node->snext)
		ht->stail = new_node;
}


/**
 * shash_table_set - set a key/value pair in the shash table.
 *
 * @ht: Hash table.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 if succeeded, or 0 on failure.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int i;
	shash_node_t *new_node;

	if (!ht || !ht->array || !key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	i = replace_value(ht->array[index], key, value);

	if (i == 1)
		return (1);
	else if (i == -1)
		return (0);

	new_node = shash_node_create(key, value);
	if (!new_node)
		return (0);

	set_sprev_snext(ht, new_node);

	new_node->next = ht->array[index] ? ht->array[index] : NULL;

	ht->array[index] = new_node;
	return (1);
}


/**
 * shash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Hash table you want to look into.
 * @key: Key you are looking for.
 *
 * Return: Value associated with the element, or NULL if key
 * couldn't be found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *hn;

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


/**
 * shash_table_print - Print the shash table using sorted linked list.
 *
 * @ht: Pointer to the hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hn = ht->shead;

	putchar('{');
	while (hn)
	{
		printf("'%s': '%s'", hn->key, hn->value);
		if (hn->snext)
			printf("%s", ", ");
		hn = hn->snext;
	}
	puts("}");
}

/**
 * shash_table_print_rev - Print the shash table in reverse
 * using sorted linked list.
 *
 * @ht: Pointer to the hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hn = ht->stail;

	putchar('{');
	while (hn)
	{
		printf("'%s': '%s'", hn->key, hn->value);
		if (hn->sprev)
			printf("%s", ", ");
		hn = hn->sprev;
	}
	puts("}");
}

/**
 * shash_table_delete - Delete a hash table.
 *
 * @ht: Pointer to the hash table to delete.
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *hn, *temp;

	hn = temp = ht->shead;

	while (hn)
	{
		hn = hn->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = hn;
	}
	free(ht->array);
	free(ht);
}
