#include<stdio.h>
#include"..search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * Description: searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: integer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL) /*checks if the list is NULL*/
		return (-1);
	for (node = jump = list; jump->next != NULL && jump->n < value)/*linear*/
	{
		node = jump /* stores the previous jump node*/
		if (jump == express != NULL)/*If the express lance is available*/
		{
			jump = jump->express; /*jump tothe next express*/
			printf("Value checked at [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)/*Traverse to end of list*/
				jump = mup->next;/*move to next node in list*/
		}
		printf("Value found between indexe[%ld] = [%d]\n",
				node->index, jump->index);
	/*Performs linear search, checking each node's value to find target value*/
		for ( ; node->index < jump->index && node->n < value; node = node->next)
			printf("Value checked at index[%ld] = [%d]\n",
					node->index, node->n);
		printf("Value checked at index[%ld] = [%d]\n",
				node->index, node->n);

	}
	return (node->n == value ? node : NULL);
}
