#include<stdio.h>

/**
 *Description - print all combination of digit and never use variable of char type
 *use only putchar and 4 times in the code
 *Number printed in ascending order separated by , and followed by space
 */

int main(void)
{
  int digit = 0;

	while (digit < 8)
	{
		putchar(4);
		putchar(2);
		putchar(',');
		digit++;
	}

 putchar('\n);

 return (0);

}
