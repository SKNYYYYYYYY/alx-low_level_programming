#include "lists.h"
#include <stdlib.h>
/**
  * free_list - it should free a linked list
  * @head: it is the list_t list that should be freed
  */
void free_list(list_t *head)
{
	list_t *s_temp;

	while(head)
	{
		s_temp = head->next;
		free(head->str);
		free(head);
		head = s_temp;
	}
}
