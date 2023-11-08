#include"function_pointers.h"
/**
 * int_index - searches for an integer
 * Description: searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: index on success or -1 with no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
