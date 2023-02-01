#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	if (!h)
		return (num);

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);

}

