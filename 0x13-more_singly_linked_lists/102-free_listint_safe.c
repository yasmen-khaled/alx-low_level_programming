#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer
 *
 * Return:x
 */


size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int v;
	listint_t *tee;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	v = *h - (*h)->next;
	if (v > 0)
	{
	tee = (*h)->next;
	free(*h);
	*h = tee;
	x++;
	}
	else
	{
	free(*h);
	*h = NULL;
	x++;
	break;
}
}

	*h = NULL;

	return (x);
}
