#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, mid, j;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len + 1) / 2;
	j = mid;
	while (j < len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
