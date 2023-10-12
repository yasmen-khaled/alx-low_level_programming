#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: pointer
 *@index: node
 *Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	 unsigned int s;
	 dlistint_t *x;
	 s = 0;
	 if (head == NULL)
		 return (NULL);
	 x = head;
	 while (x)
	 {
		 if (index == s)
			 return (x);
		 s++;
		 x = x->next;
	 }
	 return (NULL);
}
