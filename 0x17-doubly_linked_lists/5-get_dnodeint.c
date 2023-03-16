#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at index in a dlistint_t list.
 *
 * @head: Pointer to the start of the list.
 * @index: Index of the node to get, starting from 0.
 * Return: Address of the node at given index or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *node = head;

	while (node)
	{
		if (counter == index)
			return (node);

		node = node->next;
		counter++;
	}

	return (NULL);
}
