#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * Description: and write into it or copy content to it
 * @filename: pointer to the filename
 * @text_content: content ofthe file to be created
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fdReadWrite, count, readWritten;

	if (filename == NULL)/* if (!filename)* meaning if not file */
		return (-1);
	fdReadWrite = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* truncate meaning errase if there is content int the file*/
	if (fdReadWrite == -1)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	for (count = 0; text_content[count]; count++) /*strlen option to know length*/
		;
	readWritten = write(fdReadWrite, text_content, count);

	if (readWritten == -1)
		return (-1);
	close(fdReadWrite);

	return (1);

}
