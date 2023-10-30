#include "main.h"

/**
 * closeTheFile - closing a file descriptor
 * @fileDescriptor: the file descriptor that needs to be closed
 */
void closeTheFile(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDescriptor);
		exit(100);
	}
}
/**
 * main - the entry point of the program
 *	the purpose is to copy the contents of one file to another file
 * @argc: an integer that indicates the number of command-line arguments
 * @argv: an array of strings where each element
 *	represents a command-line argument
 * Return: 0 if the program completed without any errors
 */
int main(int argc, char *argv[])
{
	ssize_t bytesToRead, bytesToWritten;
	char buff[1024];
	int file_from, file_to;

	/* if the number of argument is not the correct one */
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (chmod(argv[2], 0664) == -1)
	{
		dprintf(2, "Error: Can't set permissions for %s\n", argv[2]);
		exit(99);
	}
	while ((bytesToRead = read(file_from, buff, 1024)) > 0)
	{
		bytesToWritten = write(file_to, buff, bytesToRead);

		if (bytesToWritten == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesToRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closeTheFile(file_from);
	closeTheFile(file_to);
	return (0);
}
