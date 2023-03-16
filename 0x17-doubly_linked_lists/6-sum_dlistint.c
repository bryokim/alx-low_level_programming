#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - Finds the sum of all the data(n) of a dlistint_t list.
 *
 * @head: Pointer to the start of the list.
 * Return: Sum of all the data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
