#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *current = *head;


    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    
    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        (*head) = new_node;
        new_node->prev = NULL;
        return (new_node);
    }
        while (current->next != NULL)
        {
            current = current->next;
        }

    current->next = new_node;
    new_node->prev = current;


    return (new_node);
}