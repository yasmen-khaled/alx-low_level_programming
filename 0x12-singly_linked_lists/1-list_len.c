#include <stdlib.h>
#include "lists.h"

/***
 *
 *
 *
 *
 ***/

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
