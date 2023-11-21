#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * Description: at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *temp = 0; 
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (i == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}

