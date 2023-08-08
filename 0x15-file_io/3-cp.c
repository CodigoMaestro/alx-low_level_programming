#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: void
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, bytesRead, bytesWritten;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((bytesRead = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);

		if (bytesWritten == -1)
		{
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
