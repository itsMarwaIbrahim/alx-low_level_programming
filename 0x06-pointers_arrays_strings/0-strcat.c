#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0 if success
 */
char *_strcat(char *dest, char *src)
{
	char *beginning = dest;
	char *attach = src;

	while (*dest != '\0')
		dest = dest + 1;
	while (*attach != '\0')
	{
		*dest = *attach;
		dest++;
		attach++;
	}
	*dest = '\0';
	return (beginning);
}
