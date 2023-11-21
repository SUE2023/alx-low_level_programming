#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * Description: reverses a listint_t linked list
 * @head: pointer to the first element
 * Return: pointer to list element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);

}
