#include <stdio.h>

/**
 * linear_search: searches for a value in an array of integers
 * Description: using the Linear search algorithm
 * @size: the size of the array
 * @value: the value to be searched
 * @array: array with content to be searched
 * Return: integer
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL) /* Check if the array is NULL */
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i); /* Return the index if value is found*/
	}
	return (-1); /* Return -1 if value is not found */
}
/**
 * main: entry point of the function
 * Return: integer
 *
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int value = 3;
	int index;
	FILE *output_file = fopen("output.txt", "w");

	if (output_file == NULL)
	{
		fprintf(stderr, "Error opening file.\n");
		return (1);
	}

	index = linear_search(arr, size, value);

	if (index != -1)
		fprintf(output_file, "Value %d found at index %d\n", value, index);
	else
		fprintf(output_file, "Value %d not found\n", value);
	fclose(output_file);
	return (0);
}
*/

