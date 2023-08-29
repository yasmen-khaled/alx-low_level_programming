#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node
 *@head:node
 *@index:node
 *
 *
 * Return: pointer
 *
 * Description:function that returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tee = head;

	while (tee && i < index)
	{
	tee = tee->next;
	i++;
	}

	return (tee ? tee : NULL);
}
