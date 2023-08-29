#include "lists.h"

/**
 *
 *
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *in = *head;

	node = malloc(sizeof(listint_t));
	if (!node)

		return (NULL);
	node->n = n;

	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (in->next)
		in = in->next;
	in->next = node;

	return (node);
}
