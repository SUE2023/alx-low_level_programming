#include  “main.h”
/**
*main – a program that print _putchar followed by a new line
*return = 0 (success)
*/
int main(void)
{
	/*printing of _putchar by use of a string */
	int character;
	char c[] = “_putchar”;

	for (character = 0; character < 8; character++)
	{
	_putchar(c[character]);
	}
	_putchar(‘\n’);

	return (0);
}

