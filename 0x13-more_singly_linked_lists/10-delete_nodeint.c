#include "lists.h"

/**
 *delete_nodeint_at_index- deletes the node at index linked list
 *@head: pointer
 *@index: delete
 *
 * Return:1 0R -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tee = *head;
	listint_t *now = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tee);
	return (1);
	}

	while (x < index - 1)
	{
	if (!tee || !(tee->next))
	return (-1);
	tee = tee->next;
	x++;
}


now = tee->next;
tee->next = now->next;
free(now);

	return (1);
}
