#include<stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *return 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);

		if (a < 9)
			{
				printf(",");
			}
	}
	printf("\n");
	return (0);
}
