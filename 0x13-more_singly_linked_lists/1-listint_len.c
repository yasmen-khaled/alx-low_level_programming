#include "lists.h"
/**
 *lisint_len -function that returns the number of elements in a linked.
 *@h: pointer
 *
 *
 * Return: no
 *
 * Description:function that prints all the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)

	{
	no++;

	h = h->next;
	}
	return (no);
}
