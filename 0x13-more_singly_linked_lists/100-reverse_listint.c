#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the address of head
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *reverse_list;

	current = *head;
	reverse_list = NULL;

	while (*head)
	{
		*head = (*head)->next;
		current->next = reverse_list;

		reverse_list = current;
		current = *head;
	}
	*head = reverse_list;

	return (*head);
}

