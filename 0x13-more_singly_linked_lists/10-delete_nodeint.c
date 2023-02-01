#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to the address of head
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *temp1;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 1;
	while (temp)
	{
		if (i == index)
		{
			temp1 = temp->next;
			temp->next = temp1->next;
			free(temp1);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
