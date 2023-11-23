#include<stdio.h>
#include"main.h"
/**
 * binary_to_uint - converts a binary number
 * Description: to an unsigned int
 * @b: pointer to binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, index, j;
	unsigned int sum = 0;
	unsigned int power = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		power = power * base;
		sum = sum + (power * (b[index] - 48));
		len--;
		power = 1;
	}
	return (sum);

}
