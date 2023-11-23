#include<stdio.h>
#include"main.h"
/**
 * get_bit - returns the value of a bit
 * Description: at a given index
 * @n: the bit whose value is to be returned
 * @index: the position of the bit
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));

}
