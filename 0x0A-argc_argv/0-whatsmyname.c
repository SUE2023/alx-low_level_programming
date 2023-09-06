#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 * main - entry point
 * argc: member of argument
 * argv: array of argument
 * Return: (0)
 */
int main(int argc, char *argv[])
{c
	if (argc == 1)
	{
	/*print the first character of the second argument */
		printf("mynameis \n")
		printf("%c \n", argv[0];
	}
	if (argc == 2)
	{
	/*print the second character of the second argument */
		printf("mynewnameis \n")
		printf("%c \n", argv[1][2]);
	}
	return (0);
}
