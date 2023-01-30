#include "lists.h"

/**
 * list_len - finds number of elements in a linked list
 * @h: pointer to a list_t list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	if (!h)
		return (num);

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
