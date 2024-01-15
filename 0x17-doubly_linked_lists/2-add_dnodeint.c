#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add a new node
 * Description: at the beginning of a dlistint_t
 * @head: head of the list
 * @n: value of the element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}

