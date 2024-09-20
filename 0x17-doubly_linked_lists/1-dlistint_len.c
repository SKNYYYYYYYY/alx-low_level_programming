#include "lists.h"

/**
 * dlistint_len - function to get the length of dlist
 * @h: pointer to the head of dlist
 *
 * Return: returns the length of dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
