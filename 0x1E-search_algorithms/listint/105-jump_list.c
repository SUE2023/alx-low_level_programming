#include<stdio.h>
#include<search_algos.h>
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * Description: searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value:  the value to search for
 * Return: integer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0) /* checks if list is NULL or empty*/
		return (-1);

	step = 0;
	step_size = sqrt(size); /* Calculate the jump size */

	for (node = jump = list; jump->index + 1 < size && (jump->n < value))
	{
		node = jump; /* store the prveipous jump node */
		for (step += step_size; jump->index < step; jump = jump->next)
		{     /* if it reached the end of hte list */
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index[%ld] = [%ld]\n", jump->, jump->n);
	}
	printf("Value founded between indexes[%ld] and [%ld]\n",
			node->index, jump->index);
	for ( ; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index[%ld] = [%d]\n",
				node->index, node->n);
	printf("Value checked at index[%ld] = [%d]\n",
			node->index, node->node->n);
	return (node->n == value ? node : NULL);
}
