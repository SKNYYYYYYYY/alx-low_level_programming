#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    unsigned int i = 0;
    while (current)
    {
        if (i == index)
            return (current);\
        current = current->next;
        i++;
    }
    return (NULL);
}