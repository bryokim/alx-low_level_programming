#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_middle - Insert a node in the middle of the list.
 *
 * @temp: Pointer to the node before which to add the new node.
 * @n: Data for the new node.
 * Return: Address of the new node or NULL if an error occurred.
 */
dlistint_t *insert_middle(dlistint_t *temp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	new_node->n = n;

	return (new_node);
}

/**
 * insert_index_not_zero - insert a node at index given.
 * Index must be greater than 0.
 *
 * @head: Pointer to the pointer of the start of the list.
 * @idx: Index to add the new node. Must be greater than 0.
 * @n: Data of the node to add.
 * Return: Address of the new node or NULL if it failed or if node
 * cannot be added at given index.
 */
dlistint_t *insert_index_not_zero(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int count = 0;

	temp = *head;
	while (temp)
	{
		if (count == idx)
		{
			new_node = insert_middle(temp, n);
			break;
		}
		count++;
		temp = temp->next;
	}
	if (!temp)
		new_node = (idx == count) ? add_dnodeint_end(head, n) : NULL;

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
		return (insert_index_not_zero(h, idx, n));
	}
}
