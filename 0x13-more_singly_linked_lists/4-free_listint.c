#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of a listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);

		temp = head;
	}
}

