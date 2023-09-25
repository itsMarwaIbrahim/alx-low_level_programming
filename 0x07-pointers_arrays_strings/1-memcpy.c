#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}	
