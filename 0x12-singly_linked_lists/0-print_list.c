#include <stdio.h>
#include "lists.h"

/***
 * print_list - print the elements of linked list
 *
 * @h: pointer
 *
 * return : v
 **/

size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (!h - str)
			printf("[0] (nil)\n");
		else
	printf("[%u] %s\n", h->x, h->str);
		h = h->n;
		v++;
	}
	return (v);
}
