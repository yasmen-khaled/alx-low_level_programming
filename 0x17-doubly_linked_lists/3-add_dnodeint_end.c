#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 *@head: pointer
 *@n: value
 *Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
        dlistint_t *num;

        num = malloc(sizeof(dlistint_t));
        if (num == NULL)
                return (NULL);

        num->n = n;
        num->next = NULL;

        h = *head;

        if (h != NULL)
        {
                while (h->next != NULL)
                        h = h->next;
        }
        else
        {
                *head = num;
        }
        num->prev = h;

        return (num);
}
