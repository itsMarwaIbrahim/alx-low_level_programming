#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULl if str = NULL and if insufficient memory was available
 *	otherwise returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc(sizeof(char) + 1);

	if (copy == NULL)
		return (NULL);

	while (i <= len)
	{
		*(copy + i) = *(str + i);
		i++;
	}

	return (copy);
}
