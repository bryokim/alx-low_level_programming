#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_listint_safe(const listint_t *head)
{
	size_t num, i;
	const listint_t *slow_p, *fast_p = head;

	if (!head)
		return (0);

	num = 0;
	while (fast_p)
	{
		slow_p = head;
		for (i = 0; i < num; i++)
		{
			if (slow_p == fast_p)
			{
				printf("-> [%p] %d\n", (void *)fast_p, fast_p->n);
				return (num);
			}
			slow_p = slow_p->next;
		}
		printf("[%p] %d\n", (void *)slow_p, slow_p->n);
		fast_p = fast_p->next;
		num++;
	}
	return (num);
}
