#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * open_file - opening a file and returning the file descriptor
 * @filename: the name of the file to be opened
 * @flags: specifies the flags to be used when opening the file
 * @mode: the file permissions to be set if the file is created
 *	(owner, group and others)
 * Return: failed -1, or success on file descriptor
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fileDescriptor = open(filename, flags, mode);

	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fileDescriptor);
}

/**
 * copy_file - copy the contents of one file to another file
 * @file_from: the file descriptor of the file from which data will be read
 * @file_to: the file descriptor of the file to which the data will be written
 */
void copy_file(int file_from, int file_to)
{
	ssize_t bytesToRead, bytesToWritten;
	char buff[1024];

	while ((bytesToRead = read(file_from, buff, 1024)) > 0)
	{
		bytesToWritten = write(file_to, buff, bytesToRead);
		if (bytesToWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytesToRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - closing a file descriptor
 * @fileDescriptor: the file descriptor that needs to be closed
 */
void close_file(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file desciptor\n");
		exit(100);
	}
}

/**
 * main -  the entry point of the program
 *	the purpose is to copy the contents of one file to another file
 * @argc: an integer that indicates the number of command-line arguments
 * @argv: an array of strings where each element
 *	represents a command-line argument
 * Return: 0 if the program completed without any errors
 */
int main(int argc, char *argv[])
{
	int file_from_FD, file_to_FD;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from_FD = open_file(argv[1], O_RDONLY, 0);
	file_to_FD = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_file(file_from_FD, file_to_FD);

	close_file(file_from_FD);
	close_file(file_to_FD);

	return (0);
}
