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
	list_t *nextNode, *currentNode = head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next /*save the nextNode before freeing it*/
		free(currentNode);/* Freed the currentNode*/
		currentNode = nextNode;/* Moving to next done*/
	}
}
