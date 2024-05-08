#include<stdio.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * Description: using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: interger
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r > 1;)/* Performs Interpoloication search*/
	{
		i = l + (((double) (r - l) / (array[r] - array[l])) * value - array(l));
		if (i < size)
			printf("Value checked array [%ld]  = [%d]\n", i array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range \n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - l;
		else
			l = i + 1;
	}
	return (-1);
}
