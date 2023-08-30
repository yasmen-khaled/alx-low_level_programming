#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that prints a listint_t linked list.
 *
 * @head: A pointer
 *
 * Return: 0.
 */


size_t looped_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t nod = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
hare = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
	{
nod++;
t = t->next;
h = h->next;
}

t = t->next;
while (t != h)
{
nod++;
t = t->next;
}

return (nod);
}

t = t->next;
h = (h->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a list_t list safely.
 * @head: pointer
 *
 * Return: nod
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, in = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
	for (; head != NULL; nod++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (in = 0; in < nod; in++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}
