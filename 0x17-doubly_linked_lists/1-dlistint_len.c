#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - finds number of elements in a dlistint_t list.
 *
 * @h: pointer to the start of the list.
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
