#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the char
 * Return: nothing
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
