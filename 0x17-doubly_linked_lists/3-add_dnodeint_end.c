#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 *@head: pointer
 *@n: value
 *Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = x;

	return (new);
}
