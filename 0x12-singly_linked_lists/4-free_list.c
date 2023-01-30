#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to the head of a list_t list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;

		free(temp->str);
		free(temp);

		temp = head;
	}
}
