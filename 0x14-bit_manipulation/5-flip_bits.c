#include<stdio.h>
#include"main.h"
/**
 * flip_bits - returns the number of bits
 * Description:you would need to flip to get from one number to another
 * @n: number of bit to be flipped
 * @m: number of bit to be flipped
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped, number;

	flipped = n ^ m;
	for (number = 0; flipped > 0;)
	{
		if ((flipped & 1) == 1)
			number++;
		flipped = flipped >> 1;
	}
	return (number);

}
