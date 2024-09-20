#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current = *h;
    dlistint_t *new_node;
    unsigned int i = 0;

    if (*h == NULL)
        return (NULL);
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    while (current && i < idx - 1)
    {
        current = current->next;
        i++;
    }
    current->next = new_node;
    new_node->next = current;
    new_node->prev = current->prev;
    current->next->prev = new_node;
    new_node->n = n;

    return (new_node);
}