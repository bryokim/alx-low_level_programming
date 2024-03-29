#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: pointer to the start of the list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
