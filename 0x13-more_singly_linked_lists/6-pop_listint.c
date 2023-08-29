#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *
 *@head: a pointer
 *Return: x
 */

int pop_listint(listint_t **head)
{

listint_t *tee;
int x;
	if (!head || !*head)
	return (0);

	x = (*head)->n;
	tee = (*head)->next;
	free(*head);
	*head = tee;

	return (x);
}
