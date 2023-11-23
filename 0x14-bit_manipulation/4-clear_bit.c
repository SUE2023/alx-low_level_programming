#include"main.h"
#include<stdio.h>
/**
 * clear_bit - sets the value of a bit
 * Description: to 0 at a given index
 * @n: number whose value is to be set
 * @index: position to be set to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	clear = 1;
	clear = clear << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = clear ^ *n;
	return (1);

}

