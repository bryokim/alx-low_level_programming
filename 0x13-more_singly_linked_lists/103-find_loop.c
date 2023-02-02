#include "lists.h"
#include <stdio.h>

listint_t *find_listint_loop(listint_t *head)
{
        listint_t *current = head;
        listint_t *fast = head;

        while (current && fast && fast->next)
        {
                current = current->next;
                fast = (fast->next)->next;

                if (current == fast)
                        return (current);
        }
        return (NULL);
}