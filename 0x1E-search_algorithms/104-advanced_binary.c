#include <stdio.h>
/**
 * advanced_binary_recursive - search recursely for value in assorted array
 * Desciption: of integer using binary search
 * @array: A pointer to the first eleement of the [sub] array to research
 * @left: the starting index of the [sub] array to search
 * @right: the ending index of the [sub] array to search
 * @value: the value to searc for
 * Return: integer
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left) /* if right boundary is less thatn the left boundary*/
		return (-1); /* value found*/
	printf("Searching in array;   ");
	for (i = left; i < right; i++) /* print the [sub]array being searched*/
		printf("%d,  ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2; /*Calculates the middle index */
	if (array[i] == value && (i == left || array[i] != value))
		return (i); /* If the middle element is the value and its the */
	/* first occurence, return the index */
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * Descriptioin : searches for a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: integer
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0) /* Checks if array is NULL or empty */
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
			/* calls the recursive function*/
}
