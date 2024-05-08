#include <stdio.h>
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * Description: using the Jump search algorithm
 * @array : a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value : value to search for
 * Return: interger
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size); /* Calculates the jump stemp in size*/
	for (i = jump = 0; jump < size && (array[jump] < value);)
		/* Performs the jump search*/
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump; /* Store the previous jump position*/
		jump += step; /* update the jump position*/
	}
	printf("Value found between indexes[%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump: size - 1 ; /* Adjusts the jump position */
	for (; i < jump && array[i] < value; i++)
		/* Performs a a linear search within the identified range*/
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int) i : -1); /* Checks if value is*/
				/*found and return the correspoiding index */
}
