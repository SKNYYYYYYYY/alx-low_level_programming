#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	to_delete = temp->next;
	temp->next = to_delete->next;
	if (to_delete->next != NULL)
		to_delete->next->prev = temp;
	free(to_delete);

	return (1);
}