#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list_t linked list
 * @h: pointer to a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	if (!h)
		return (num);

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		num++;
		h = h->next;
	}
	return (num);
}
