#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area
 * @b: constant byte
 * @n: the number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
