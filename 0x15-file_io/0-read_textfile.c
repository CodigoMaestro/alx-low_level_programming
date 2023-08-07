#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - entry point
 * @filename: char
 * @letters: size_t
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	ssize_t totalBytesRead = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);

	while ((bytesRead = read(fd, buffer, letters)) > 0)
	{
		bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		totalBytesRead += bytesRead;
	}

	free(buffer);
	close(fd);

	return (totalBytesRead);
}
