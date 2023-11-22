#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds an integer to the linked list
 * @head: pointer to the head of the linked list
 * @n: the integer added to the linked list
 *
 * Return: pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
