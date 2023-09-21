#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (!(*s1 == *s2))
			break;
		s1++;
		s2++;
	}
	return *(unsigned char*)s1 - *(unsigned char*)s2;
}
