#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: file name
 * @letters: num char to read and print
 *
 * Return: number of letters read. 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret_read, ret_write;
	char *string;

	if (filename == NULL)
		return (0);
	string = malloc(letters * sizeof(char) + 1);
	if (!string)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(string);
		return (0);
	}
	ret_read = read(fd, string, letters);
	if (ret_read == -1)
	{
		free(string);
		return (0);
	}
	ret_write = write(STDOUT_FILENO, string, ret_read);
	close(fd);
	free(string);
	if (ret_read == ret_write)
		return (ret_write);
	return (0);
}
