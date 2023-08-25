#include <stdlib.h>
#include "lists.h"

/***
 * list_len - elements in linked list
 * @h: pointer of list_t
 *
 * Return: anumber in h
 *
 * Description: a function that returns the number of elements in a linked list
 *
 */

size_t list_len(const list_t *h)
{
	size_t anumber = 0;

	while (h)
	{
		anumber++;
		h = h->next;
	}
	return (anumber);
}
