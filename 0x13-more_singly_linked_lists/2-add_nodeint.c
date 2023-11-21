#include "lists.h"
/**
  * add_nodeint - it adds a new node at beginnning of list
  * @head: it is the head node of the list
  * @n: it is data to add to node
  * Return: it is the address of new elemrnt, Null if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
