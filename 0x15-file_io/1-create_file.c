#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - entry point
 * @filename: char
 * @text_content: char
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t textWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	textWrite = write(fd, text_content, len);

	if (textWrite == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
