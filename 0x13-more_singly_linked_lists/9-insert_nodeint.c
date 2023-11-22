#include "lists.h"
#include<stdlib.h>
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: double pointer to head node
  * @idx: it's index of the list where thr new node should be inserted
  * @n: the data to enter for the new node
  * Return: the address of a new node and NULL on failure
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int count = 0;

	if (temp == NULL && idx != 0)
		return (NULL);
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (count + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
