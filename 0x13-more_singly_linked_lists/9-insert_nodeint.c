#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @n: insert
 * @idx:node
 * Return: pointer
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ni;
	listint_t *tee = *head;

	ni = malloc(sizeof(listint_t));
	if (!ni || !head)
	return (NULL);

	ni->n = n;
	ni->next = NULL;

	if (idx == 0)
	{
	ni->next = *head;
	*head = ni;
	return (ni);
	}

	for (x = 0; tee && x < idx; x++)
	{
	if (x == idx - 1)
{
	ni->next = tee->next;
	tee->next = ni;
	return (ni);
	}
	else
	tee = tee->next;
}

	return (NULL);
}
