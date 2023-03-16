#include <stdlib.h>
#include "lists.h"

/**
 * delete_index_not_zero - Delete node at given index.
 * Index must be greater than 0.
 *
 * @head: Pointer to the pointer of the start of the list.
 * @index: Index of the node to remove, starting from 0.
 * Must be greater than 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_index_not_zero(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;
	int status = -1;

	while (temp)
	{
		if (count == index && temp->next)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			status = 1;
			break;
		}
		else if (count == index && !temp->next)
		{
			temp->prev->next = NULL;
			free(temp);
			status = 1;
			break;
		}
		count++;
		temp = temp->next;
	}
	return (status);
}

/**
 * delete_dnodeint_at_index - Deletes node at index given.
 *
 * @head: Pointer to the pointer of the start of the list.
 * @index: Index of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	int status = -1;

	if (!*head)
		return (status);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		status = 1;
	}
	else
	{
		status = delete_index_not_zero(head, index);
	}
	return (status);
}
