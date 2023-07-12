#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located.
 *	NULL if the head is NULL or if value is not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i, last;
	listint_t *prev, *temp;

	if (!list || size == 0)
		return (NULL);

	i = 0;
	step = sqrt(size);
	temp = list;

	while (temp && temp->n < value)
	{
		prev = temp;
		while (i++ < step && temp)
			temp = temp->next;

		if (temp && temp->n != value)
			printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);

		i = 0;
	}

	last = (temp) ? temp->index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, last);

	while (prev && prev->index <= last)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			break;
		prev = prev->next;
	}

	if (prev && prev->n == value)
		return (prev);
	else
		return (NULL);
}
