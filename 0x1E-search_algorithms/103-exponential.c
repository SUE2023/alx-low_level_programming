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
/**
 * exponential_search - searches for a value in a sorted array of integers
 * Description: using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: interger
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL) /* Checks if array is NULL */
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine the range where the value is expected to be foudn */
	right = i < size ? i : size - 1;
	printf("Value found between index[%ld] and [%ld]\n", i / 2, right);
	return (binary_search(array, i / 2, right, value));
	/* performs binary search withing the identified range */
}
