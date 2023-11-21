#include "lists.h"
/**
  * listint_len - it should return the number of nodes in a list
  * @h: it is the list to check
  * Return: the number of elements in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

