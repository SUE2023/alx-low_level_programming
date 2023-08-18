#include<stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse, followed by a new line.
 * uses putchar twice in the program
 * return = 0 (success)
 * /

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
