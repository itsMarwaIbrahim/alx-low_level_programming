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
