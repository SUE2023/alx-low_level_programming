#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text
 * Description: at the end of the file
 * @filename: pointer to file
 * @text_content: content to be appended
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdAppend, count, readWritten;

	if (filename == NULL)
		return (-1);

	fdAppend = open(filename, O_WRONLY | O_APPEND);

		if (fdAppend == -1)
			return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count]; count++)/* strlen alternative*/
			;
		readWritten = write(fdAppend, text_content, count);
		if (readWritten == -1)
			return (-1);
	}
	close(fdAppend);
	return (1);

}
