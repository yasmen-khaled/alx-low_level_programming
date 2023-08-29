#include "lists.h"

/**
 *add_nodeint -  function that adds a new node at the beginning
 *
 *@head:pointer
 *@n:intger
 *
 * Return:node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);

node->n = n;
node->next = *head;
*head = node;

return (node);

}
