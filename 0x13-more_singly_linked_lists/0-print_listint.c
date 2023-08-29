#include "lists.h"

/**
 *print_listint-a function that prints all the elements.
 *@h: linked list
 *
 *
 * Return: no
 */

size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
	printf("%d\n", h->n);
	no++;

	h = h->next;
	}

	return (no);
}
