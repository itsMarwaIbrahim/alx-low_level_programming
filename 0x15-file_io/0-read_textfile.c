#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *	to the POSIX standard output
 * @filename: a pointer to a constant character string
 *	representing the file name
 * @letters: the number of letters to read from the file
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytesRead, bytesWritten;
	/* a pointer to a character array that will hold the contents of the file */
	char *buff;

	if (!filename)
		return (0);

	buff = (char *)malloc(letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) /* -1 means that the file could not be opened */
		return (0); /* 0 indecates an error */

	/* The number of bytes actually read is stored in bytesRead */
	bytesRead = read(fd, buff, letters);
	/* write is called to write the contents of buff to the standard output */
	bytesWritten = write(STDOUT_FILENO, buff, bytesRead);

	close(fd);
	free(buff);

	return (bytesWritten);
}
