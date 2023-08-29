#include "lists.h"

/**
 *print_lisint - a function that prints all the elements.
 *@h: pointer
 *
 *
 * Return: no
 */

size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->noob);

			no++;

				h = h->oth;
	}
	
	return (no);
}
