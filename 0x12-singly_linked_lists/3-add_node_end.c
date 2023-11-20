#include <string.h>
#include "lists.h"
/**
  * add_node_end - adds a new node at the end
  * @head: is a pointer to the head of the list_t
  * @str: is string to be added at end list_t list
  * Return: Null if function fais , otherwise address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s_dupl;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	s_dupl = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->str = s_dupl;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
