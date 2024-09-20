#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    dlistint_t *to_delete;

    if (*head == NULL)
        return -1;
    else if(index == 0)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }
    while (index > 1 && temp != NULL)
        {
            temp = temp->next;
            index--;
        }

    if (temp == NULL || temp->next == NULL)
        return (-1);
    
    to_delete = temp->next;

    temp->next = to_delete->next;
    if (to_delete->next != NULL)
        to_delete->next->prev = temp;
    free(to_delete);

    return (1);
}