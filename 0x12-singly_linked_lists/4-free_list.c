#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * Description: frees a list_t list
 * @head: least to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
