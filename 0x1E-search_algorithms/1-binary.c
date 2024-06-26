#include <stdio.h>

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
	size_t left = 0, right = size - 1, i;

	if (array == NULL) /* checks if array is NULL*/
		return (-1);

	while (right >= left) /* performs binary search*/
	{
		printf("Searching in array:  ");
		for (i = left; i < right; i++)
			printf("%d,   ", array[i]);
		printf("%d\n", array[right]); /* Corrected printing of last element */
		i = left + (right - left) / 2 ; /* Calculate the middle index */
		if (array[i] == value) /*if the middle element is the value */
			return (i); /*the index */
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1; /* otherwise update the left boundary */
	}
	return (-1); /* Return -1 if value is not found */
}
