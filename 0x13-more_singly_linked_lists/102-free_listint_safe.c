#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * Description: with loops
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;  /*int difference;*/
	listint_t *temp;

	if (h == NULL || *h == NULL) /*(h || *h == NULL)*/
		return (0);

	while (*h)
	{
		/*difference = *h - (*h)->next;*/
		if ((*h)->next != NULL) /*(difference > 0)*/
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
