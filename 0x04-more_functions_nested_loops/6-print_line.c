#include "main.h"


/**
 * print_line - draws a straight line in the terminal
 * @n: first
 * Return: nothing
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar(95);
	}
	_putchar('\n');
}
