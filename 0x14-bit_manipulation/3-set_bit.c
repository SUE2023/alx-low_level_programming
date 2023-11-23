#include<stdio.h>
#include"main.h"
/**
 * set_bit - sets the value of a bit
 * Description: to 1 at a given index
 * @n: the bit to be set
 * @index: the position of the bit
 * Return: the set number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(size_t) * 8) /* unsigned int can be used instead of size_t */
		return (-1);
	set = 1;
	set = set << index;
	*n = ((*n) | set);
	return (1);

}
