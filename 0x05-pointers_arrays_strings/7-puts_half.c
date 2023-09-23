#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string
 * @n: integer
 * Return: 0
 */
void puts_half(char *str)
{
	int index;
	int len = 0;

	while (str[len] != '\0')
		len++;
	index = len - 1;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
}
