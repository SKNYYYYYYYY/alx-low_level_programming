#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current = head;

    if (head == NULL)
        return (0);
    while (current)
    {
        sum += current->n;
        current = current->next;
    }
    return (sum);
}