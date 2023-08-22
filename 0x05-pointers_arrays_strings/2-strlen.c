#include<stdio.h>
/**
*_strlen – A function that returns the length of a string.
*@str: String to get its length
*Return: int
*/
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}

