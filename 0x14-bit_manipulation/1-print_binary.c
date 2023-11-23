#include<stdio.h>
#include"main.h"
/**
 * printRecursively_binary - prints recursively
 * Description: binary number
 * @n: the decimal number
 * Return: void
 */
void printRecursively_binary(unsigned long int n)
{
	if (n == 0)
		return;
	printRecursively_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
	return;

}
/**
 * print_binary - prints the binary
 * Description: representation of a number
 * @n: the number whose binary is being printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		printRecursively_binary(n);
	return;

}
