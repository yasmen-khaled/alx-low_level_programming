#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node- new node at start
 *
 * @head: pointer
 * @str: string
 *
 * return : head pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned len = 0;
	
	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
			if (!node)
			return (NULL);


				node->str = strdup(str);
				node->len = len;
				node->next = (*head);
				(*head) = node;

				return (*head);
}
