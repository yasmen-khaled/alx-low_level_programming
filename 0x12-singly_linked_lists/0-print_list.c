#include <stdio.h>
#include "lists.h"

/***
 * print_list - print the elements of linked list
 *
 * @h: pointer
 *
 * return :lama
 **/

size_t print_list(const list_t *h)
{
	size_t lama = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
	printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		lama++;
	}
	return (lama);
}
