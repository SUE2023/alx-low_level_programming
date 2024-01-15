#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 **get_dnodeint_at_index - returns the nth node
 * Description: of dlistint_t linked list
 * @head: head pointer
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
