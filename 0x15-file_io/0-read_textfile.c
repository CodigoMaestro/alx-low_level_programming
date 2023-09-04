#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry point
 * @filename: char
 * @letters: size_t
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t t;
	ssize_t w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
