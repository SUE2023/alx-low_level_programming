#include"main.h"
#include<stdio.h>
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * Description: check digits from 0-9
 * @c: an input
 * Outputs 1 for digit and 0 for otherwise
 * Return: (0)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
