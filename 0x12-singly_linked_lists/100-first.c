#include<stdio.h>

void startup_function(void)__attribute__((constructor));
/**
 * startup_function - prints a senstence before main
 * Description: function is executed
 * Return: (void)
 */
void startup_function(void)__attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * main - entry point of the code
 * @void: no parameter passed
 * Return: int
 */
int main(void)
{
	printf("Main function prints after initialization funtion\n");
	return (0);
}
