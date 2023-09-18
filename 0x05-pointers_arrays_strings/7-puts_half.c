#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string
 * @n: integer
 * Return: 0
 */
void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] < 10; x++)
	{
		if (x / 2 == 0)
			_putchar(str[x]);
	}
}
