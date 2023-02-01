#include "lists.h"

/**
 * listint_len - find nuber of elements in a linked listint_t list
 * @h: pointer to the head of a listint_t head
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
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
