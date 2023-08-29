#include "lists.h"

/**
 *free_listint - function that frees list
 *@head: the list
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tee;

	while (head)
	{
		tee = head->next;
		free(head);
		head = tee;
	}
}
