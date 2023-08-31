#include"main.h"
#include<stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * Description: returns the natural square root of a number
 * @n: input
 * Return: (0)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion (n));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * Description: square root of a number
 * @n: input
 * @i: iterator
 * Return: (0)
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(int n, int i);
}
