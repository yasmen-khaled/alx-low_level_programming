#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tree = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = tree;
		tree = *head;
		*head = next;
	}

	*head = tree;

	return (*head);
}
