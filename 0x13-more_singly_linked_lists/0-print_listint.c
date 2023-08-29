#include "lists.h"

/**
 *print_lisint - a function that prints all the elements.
 *@h: pointer
 *
 *
 * Return: no
 *
 * description : Write a function that prints all the elements
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
