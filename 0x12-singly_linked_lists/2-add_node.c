#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: pointer to the address of the head of a list_t list
 * @str: string to add to the list
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
