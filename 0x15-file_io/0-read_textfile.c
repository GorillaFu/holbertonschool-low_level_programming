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
	int fd, return_read, return_write;
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
	return_read = read(fd, string, letters);
	if (return_read == -1)
	{
		free(string);
		return (0);
	}
	return_write = write(STDOUT_FILENO, string, return_read);
	close(fd);
	free(string);
	if (return_read == return_write)
		return (return_write);
	return (0);
}
