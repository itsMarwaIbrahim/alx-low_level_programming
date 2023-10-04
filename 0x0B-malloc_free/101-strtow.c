#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return:
 */
char **strtow(char *str)
{
	int iterate;
	char *strtow;

	if (str == NULL || str == '\0')
		return (NULL);
	while (*strtow != '\0')
