#include"main.h"
/**
 * print_rev_recursion -  prints a string in reverse
 * Descrription:  prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
