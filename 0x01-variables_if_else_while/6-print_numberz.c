#include<stdio.h>

/**
 *main- program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *return = 0 (success)
 *use putchar only twice in the program and no use of variable of char type
 */
int main(void)
{
	int fourtyeight = 1;

	while (fourtyeight < 10)
	{
		putchar(fourtyeight);
		fourtyeight++;
	}

	putchar('\n');

	return (0);
}
