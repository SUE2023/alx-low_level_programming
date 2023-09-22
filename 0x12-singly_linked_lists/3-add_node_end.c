#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node
 * Description: at the end of a list_t list
 * @head: original pointer
 * @str: noted to be added
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = NULL;
	currentNode = *head;

	if (currentNode == NULL)
		*head = newNode;
	else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}
	return (*head);
}
