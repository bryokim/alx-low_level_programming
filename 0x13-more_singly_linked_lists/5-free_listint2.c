#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to the address of the head of a listint_t list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!*head)
		return;

	while (*head)
	{
		*head = (*head)->next;
		free(temp);

		temp = *head;
	}
	*head = NULL;
}
