#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - entry point
 * @filename: char
 * @text_content: char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytesWrite, len = 0;

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

	fd = open(filename, O_WRONLY | O_APPEND);

	bytesWrite = write(fd, text_content, len);

	if (fd == -1 || bytesWrite == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
