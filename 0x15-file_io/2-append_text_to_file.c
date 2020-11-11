#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}


/**
 * append_text_to_file - append text to a file
 * @filename: filename
 * @text_content: text to append
 * Return: -1 on failure, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, return_write = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		return_write = write(fd, text_content, len);
		if (return_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}