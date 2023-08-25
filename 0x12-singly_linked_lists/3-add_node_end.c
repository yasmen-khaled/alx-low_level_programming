#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a  new node to the end of linked  list
 * @head: double pointer
 *
 * @str: string
 *
 * Return: node address and NULL if its faile
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ind = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
	return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (ind->next)
		ind = ind->next;
	ind->next = node;

	return (node);
}
