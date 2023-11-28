#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * Description: to the POSIX standard outpu
 * @letters: string to be read
 * @filename: pointer to the file
 * Return: integer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdReadCount;
	ssize_t numberread, numberwritten;
	char *buffer;

	if (filename == NULL)/* if (!filename)meaning not filename */
		return (0);

	fdReadCount = open(filename, O_RDONLY);
	if (fdReadCount == -1)
		return (0); /* if error in the file opening */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* if (!buffer) */
		return (0);
	numberread = read(fdReadCount, buffer, letters);
	numberwritten = write(STDOUT_FILENO, buffer, numberread);

	close(fdReadCount);
	free(buffer);

	return (numberwritten);
}
