#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 *@head: pointer
 *@n: value
 *Return: num
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *num;

	num = malloc(sizeof(dlistint_t));
	if (num == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = x;

	return (new);
}