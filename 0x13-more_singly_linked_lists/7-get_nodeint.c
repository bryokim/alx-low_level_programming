#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: nth node, or NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	if (!head)
		return (NULL);

	count = 0;
	while (temp)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
