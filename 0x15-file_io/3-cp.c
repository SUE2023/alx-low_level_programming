#include"main.h"
#include<stdio.h>
/**
 * errorFile - check if there an error on opening
 * Descripton: and Handle the error
 * @file_from: iriginal file to copy from
 * @file_to: new file to copy to
 * @argv: argument ventor
 * Return: void
 */
void errorFile(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entry point
 * Description: to copy the fle
 * @argc: argument count
 * @argv: argument ventor
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t number_character, number_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 664);
	errorFile(file_from, file_to, argv);

	number_character = 1024;
	while (number_character == 1024)
	{
		number_character = read(file_from, buffer, 1024);
		if (number_character == -1)
			errorFile(-1, 0, argv);
		number_written = write(file_to, buffer, 1024);
		if (number_written == -1)
			errorFile(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);

}

