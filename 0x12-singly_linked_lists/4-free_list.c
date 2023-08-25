#include <stdlib>
#include "lists.h"

/**
 *free_lists- function that frees a list_t list.
 *@head: list
 *
 */

void free_list(list_t *head)
{
	list t *space;

	while (head)
	{
	space = head->next;
	free(head->str;
	free(head);
	head = space;
}
}
