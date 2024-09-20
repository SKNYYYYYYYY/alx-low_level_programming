#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a dlistint_t list
 * @head: Pointer to the pointer to the first node of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = *head;
	added_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = added_node;
	*head = added_node;

	return (added_node);
}
