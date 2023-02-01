#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the address of head
 *
 * Return: Head node's data (n). If list is empty 0 is returned.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (!*head)
		return (0);

	*head = (*head)->next;

	n = temp->n;
	free(temp);

	return (n);
}
