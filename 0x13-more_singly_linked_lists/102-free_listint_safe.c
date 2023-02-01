#include "lists.h"
#include <stdlib.h>

size_t free_listint_safe(listint_t **h)
{
        listint_t *current, *runner, *head;
        size_t j, i;

        if (h == NULL || *h == NULL)
                return (0);
        
        current = head = *h;
        j = 0;

        while (head)
        {
                runner = *h;
                for (i = 0; i < j; i++)
                {
                        if (runner == current)
                        {
                                *h = NULL;
                                return (j);
                        }
                        runner = runner->next;
                }
                current = head->next;
                free(head);
                head = current;
                j++;
        }
        *h = NULL;
        return (j);
}