#include "main.h"
#include "hello.h"

/**
 *  create_file -This function creates a file and write in it
 * @filename: the file to be created
 * @text_content: the content of the file to be created
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd; 
	int len;
	int  write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		write = write(fd, text_content, len);
	}
	if (write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
