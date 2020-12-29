#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: filename
 * @text_content: text to append
 * Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrstore, retwrite = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[retwrite])
		retwrite++;

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		wrstore = write(fd, text_content, retwrite);
	}

	if (wrstore == -1)
		return (-1);

	close(fd);
	return (1);
}
