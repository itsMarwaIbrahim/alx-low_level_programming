#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
