#include "main.h"
/**
 * read_textfile - this function is responsible reads a text file 
 * and prints it to the POSIX standard output.
 * @filename: the file to be read.
 * @letters: the number of characters to be read
 * Description: read thea file
 * section header: the header of this function is holberton.h
 * Return: this return the number of chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, 1_read,2_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	1_read = read(fd, buffer, letters);
	if (1_read == -1)
	{
		free(buffer);
		return (0);
	}

	2_write = write(STDOUT_FILENO, buffer, 1_read);
	if (2_write == -1 || 2_write != 1_read)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (2_write);
}
