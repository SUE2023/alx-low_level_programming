#include<stdio.h>
/**
 * binary_search -  searches for a value in a sorted array of integers
 * Description: using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL) /* checks if array is NULL*/
		return (-1);
	for (left = 0; right = (size - 1); right >= left) /* performs binary search*/
	{
		printf("Searching in array:  ");
		for (i = left; i < right; i++)
			printf("%d,   ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - right) / 2 ; /* Calculate the middle index */
		if (array[i] == value) /*if the middle element is the value */
			return (i); /*the index */
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1; /* otherwise update the left boundary */
				/*return (-1);  if vallue not found */
	}
	return (-1);

}
