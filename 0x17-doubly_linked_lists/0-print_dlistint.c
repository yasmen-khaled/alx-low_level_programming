#include "lists.h"
/**
 * print_dlistint - prints elment
 * dlistint_t list
 *@h: pointer
 * Return: c
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c;
	c = 0;

	if(h == NULL)
		return(c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
