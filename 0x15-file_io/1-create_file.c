#include "main.h"

/**
 * strlen_ - a function that counts the length of a string
 * @string: the string to be counted
 * Return: the length of the string
 */
int strlen_(char *string)
{
	int strCounter = 0;

	while (*string++)
		strCounter++;

	return (strCounter);
}

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure (file can not be created,
 *	file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, textLength, bytesWritten;

	if (!filename)
		return (-1);

	/* O_WRONLY, open the file in write-only mode */
	/* O_CREAT flag, creates the file if it doesn't exist */
	/* O_TRUNC flag, truncates the file if it already exists */
	/* file permissions are 0600, read and write permissions for the owner only */
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1) /* the file could not be opened */
		return (-1);

	if (text_content)
	{
		textLength = strlen_(text_content);
		bytesWritten = write(fd, text_content, textLength);

		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
