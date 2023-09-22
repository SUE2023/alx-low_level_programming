#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * Description: if str is NULL print [0](nil)
 * @h: pointer to linked list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		if (head->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		nodes++;
		head = head->next;
	}
	return (nodes);

}
