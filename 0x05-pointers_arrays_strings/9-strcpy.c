#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: first
 * @src: second
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
