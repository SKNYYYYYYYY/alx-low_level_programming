#include "lists.h"
/**
* print_dlistint - function to print elements of a doubly linked list
* @h: pointer to the head of the doubly linked list
* Return: return number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
