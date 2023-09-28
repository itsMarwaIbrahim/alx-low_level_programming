#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return:
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
		_putchar(*s);
	}
	return count;
}
