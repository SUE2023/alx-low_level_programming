#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node
 * Description: at a given position
 * @head: pointer to the first element
 * @idx: position at insertion
 * @n: data of new node
 * Return: pointer new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = NULL;
	listint_t *temp_old;
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}
	for (i = 1; (temp != NULL); i++)
	{
		if (i == idx)
		{
			newNode->n = n;
			newNode->next = temp_old;
			temp->next = newNode;
			return (newNode);
		}
		temp_old = temp;
		temp = temp->next;
	}
	free(newNode);
	return (NULL);

}
