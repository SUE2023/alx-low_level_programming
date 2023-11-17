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
	list_t *newNode, *current;
	int length;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] > 0; length++)
		;/* OPTION for the loop is  newNode->len = strlen(str);*/
	newNode->len = length;
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode); /*Free allocated memory before returning NULL*/
		return (NULL);
	}
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	printf("[%d] %s\n", newNode->len, newNode->str);

	return (newNode);

}
