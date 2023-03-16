#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint - insert a node at index given.Index must be greater than 0.
 *
 * @head: Pointer to the pointer of the start of the list.
 * @idx: Index to add the new node. Must be greater than 0.
 * @n: Data of the node to add.
 * Return: Address of the new node or NULL if it failed or if node
 * cannot be added at given index.
 */
dlistint_t *insert_dnodeint(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	temp = *head;
	while (temp)
	{
		if (count == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
			break;
		}
		count++;
		temp = temp->next;
	}
	if (!temp)
	{
		free(new_node);
		new_node = NULL;
	}
	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Pointer to a pointer of the start of the list.
 * @idx: Index to add the node, starting from 0.
 * @n: Data of the node to add.
 * Return: Address of the new node or NULL if it failed or
 * if node cannot be added at give index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (idx == 0)
	{
		/* Add node at start if index is zero */
		return (add_dnodeint(h, n));
	}
	else
	{
		/* Insert node at given index */
		return (insert_dnodeint(h, idx, n));
	}
}
