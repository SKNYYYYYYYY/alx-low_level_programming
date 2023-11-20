#include "lists.h"
#include <string.h>
/**
  * add_node - it should add a new node at the beginning of list_t list
  * @head: it is the pointer to the head of the list_t list
  * @str: the string to be added to list_t
  * Return: Null if function fails otherwise address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s_new;
	char *s_dupl;
	int length;

	s_new = malloc(sizeof(list_t));
	if (s_new == NULL)
		return (NULL);
	s_dupl = strdup(str);
	if (s_dupl == NULL)
	{
		free(s_new);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;
	s_new->str = s_dupl;
	s_new->len = length;
	s_new->next = *head;

	*head = s_new;
	return (s_new);
}
