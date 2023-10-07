#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the bytes
 * Return: a pointer to the start of the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int append = 0;
	char *ptr_dest;

	ptr_dest = dest;
	while (*dest != '\0')
		dest++;

	while (append < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		append++;
	}
	*dest = '\0';
	return (ptr_dest);
}
