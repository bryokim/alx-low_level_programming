#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: Pointer to the start of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
