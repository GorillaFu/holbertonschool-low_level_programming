#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - function creates a file
 * @filename:  name of file created
 * @text_content: contents of file
 * Return: function will return 1 or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, return_write;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	return_write = write(fd, text_content, i);
	if (return_write == -1)
		return (-1);
	return (1);
}
