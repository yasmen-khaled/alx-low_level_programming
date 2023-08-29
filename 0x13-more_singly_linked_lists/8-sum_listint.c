#include "lists.h"

/**
 *sum_listint - unction that returns the sum of all the data (n)
 *
 *@head:node
 *
 *Return: x
 */


int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *tee = head;

	while (tee)
	{
		x += tee->n;
		tee = tee->next;
	}

	return (x);
}
