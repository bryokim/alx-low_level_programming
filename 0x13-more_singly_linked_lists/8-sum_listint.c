#include "lists.h"

/**
 * sum_listint - find sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of a listint_t linked list.
 *
 * Return: sum of all data (n);
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum;

	sum = 0;
	if (!head)
		return (sum);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
