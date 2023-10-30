#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *
 */
int main(int argc, char *argv[])
{
	ssize_t bytesToRead, bytesToWritten;
	char buff[1024];
	int file_from, file_to;

	/* if the number of argument is not the correct one */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* if file_from does not exist, or if you can not read it */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/**
	 * reading data from the file_from file descriptor in
	 *	chunks of size BUFF_SIZE and writing it to the filo_to file descriptor
	 */
	while ((bytesToRead = read(file_from, buff, 1024)) > 0)
	{
		bytesToWritten = write(file_to, buff, bytesToRead);

		if (bytesToWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	/**
	 * handling the case where the read system call fails
	 *	to read data from the file_from file descriptor
	 */
	if (bytesToRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* closing the file_from file descriptor after reading from it */
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	/* closing the file_to file descriptor after writing to it */
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
