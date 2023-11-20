#include "lists.h"
/**
  * list_len - it should find the number of elements in a linked list
  * @h: it is a pointer to the start of the linked list
  * Return: the no. of elements in the linked list
  */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
