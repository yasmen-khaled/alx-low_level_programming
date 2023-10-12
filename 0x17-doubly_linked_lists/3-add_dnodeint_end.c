#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of list
 *@head: pointer
 *@n: value
 *Return: num
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *num;
	dlistint_t *h;

	num = malloc(sizeof(dlistint_t));
	if (num == NULL)
		return (NULL);
	num->n = n;
	num->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	num->next = h;
	if (h != NULL)
		h->prev = num;

	*head = num;
	return (num);
}
