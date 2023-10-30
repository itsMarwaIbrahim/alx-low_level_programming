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
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, textLen, bytesWritten;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);
	/**
	 * O_APPEND flag, write-only mode, ensures that the text
	 * will be appended to the end of the file
	 */
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	/* -1  means that the file could not be opened */
	if (fileDescriptor == -1)
		return (-1);

	if (text_content)
	{
		textLen = strlen_(text_content);
		bytesWritten = write(fileDescriptor, text_content, textLen);

		/* means that the write operation failed, so the file is closed */	
		if (bytesWritten != textLen)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	close(fileDescriptor);
	return (1);
}
