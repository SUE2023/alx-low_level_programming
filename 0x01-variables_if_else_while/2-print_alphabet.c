#include <stdio.h>
/**
 * main - prints alphabet
 * Description: in lowercase followed by a newline
 * Return: (0)
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
